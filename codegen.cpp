#include <iostream>
#include <stdio.h>
#include "exptree.hpp"
#include "y.tab.hpp"
#include <string>
// 
int reg=0;
int left_value,right_value;
int reg_no=0;
int label_no=0;
stack <string> last_function_used;


int MEMORY_LOC;
void change_extension(char *filename)
{	
	/*This Function changes the extension of the input_source_program.silc to input_source_program.sim*/
	int i,j;

	for (i = 0; filename[i]!='\n'; i++)
	{
		if (filename[i]=='.')
		{
			i++;
			break;
		}
	}
	filename[i++]='s';
	filename[i++]='i';
	filename[i++]='m';
	filename[i++]='\0';
}

int get_reg()
{	
	/*This Function allocates the least unused register and returns its value*/
	return reg_no++;
}

void free_reg()
{	
	/*This Function deallocates the max unused register and returns its value*/
	reg_no--;
}
int get_label()
{
	/*This Function returns least unused label no which is used in the if and while*/
	return label_no++;
}

int codegen(struct tnode *expressionTree)
{	
	/*This function generates the sim machine code.*/

	int reg_1 = 0,reg_2 = 0;
	int label_1,label_2,label_3;
	int used_register_no =0;
	
	if (expressionTree != NULL)
	{
		cout<<"Node_Type = "<<expressionTree->Node_Type<<endl;
	}
	if (expressionTree==NULL)
	{
		return 0;
	}
	else if (expressionTree->Node_Type==ID)
	{
		reg_1=get_location(expressionTree);
		
		fprintf(sim_code_file, "MOV R%d,[R%d]\n",reg_1,reg_1);
		return reg_1;
	}
	else if (expressionTree->Node_Type==Node_Type_LEAF)
	{
		reg_1=get_reg();
		
		fprintf(sim_code_file, "MOV R%d,%d\n",reg_1,expressionTree->value);		
		return reg_1;
	}
	else if (expressionTree->Node_Type==Node_Type_LT)
	{
		
		reg_1=codegen(expressionTree->ptr1);
		reg_2=codegen(expressionTree->ptr2);
		
		fprintf(sim_code_file, "LT R%d,R%d\n",reg_1,reg_2);
		free_reg();
		return reg_1;

	}
	else if (expressionTree->Node_Type==Node_Type_LE)
	{
		reg_1=codegen(expressionTree->ptr1);
		reg_2=codegen(expressionTree->ptr2);
		
		fprintf(sim_code_file, "LE R%d,R%d\n",reg_1,reg_2);
		free_reg();
		return reg_1;
	}
	else if (expressionTree->Node_Type==Node_Type_GT)
	{
		reg_1=codegen(expressionTree->ptr1);
		reg_2=codegen(expressionTree->ptr2);
		
		fprintf(sim_code_file, "GT R%d,R%d\n",reg_1,reg_2);
		free_reg();
		return reg_1;
	}
	else if (expressionTree->Node_Type==Node_Type_GE)
	{
		reg_1=codegen(expressionTree->ptr1);
		reg_2=codegen(expressionTree->ptr2);
		
		fprintf(sim_code_file, "GE R%d,R%d\n",reg_1,reg_2);
		free_reg();
		return reg_1;
	}
	else if (expressionTree->Node_Type==Node_Type_EQ)
	{
		reg_1=codegen(expressionTree->ptr1);
		reg_2=codegen(expressionTree->ptr2);
		
		fprintf(sim_code_file, "EQ R%d,R%d\n",reg_1,reg_2);
		free_reg();
		return reg_1;
	}
	else if (expressionTree->Node_Type==Node_Type_NE)
	{
		reg_1=codegen(expressionTree->ptr1);
		reg_2=codegen(expressionTree->ptr2);
		
		fprintf(sim_code_file, "NE R%d,R%d\n",reg_1,reg_2);
		free_reg();
		return reg_1;
	}
	else if (expressionTree->Node_Type==Node_Type_NOT)
	{
		reg_1=codegen(expressionTree->ptr1);
		reg_2=get_reg();

		fprintf(sim_code_file, "MOV R%d,0\n",reg_2);
		fprintf(sim_code_file, "EQ R%d,R%d\n",reg_2,reg_1);
		free_reg();
		return reg_2;
	}
	else if (expressionTree->Node_Type==Node_Type_OR)
	{
		reg_1=codegen(expressionTree->ptr2);
		reg_2=codegen(expressionTree->ptr1);
		
		fprintf(sim_code_file, "ADD R%d,R%d\n\n",reg_2,reg_1);
		free_reg();
		return reg_2;
	}
	else if (expressionTree->Node_Type==Node_Type_AND)
	{
		reg_1=codegen(expressionTree->ptr2);
		reg_2=codegen(expressionTree->ptr1);
		
		fprintf(sim_code_file, "MUL R%d,R%d\n\n",reg_2,reg_1);
		free_reg();
		return reg_2;
		
	}
	else if (expressionTree->Node_Type==Node_Type_BOOLEAN_CONSTANT)
	{	
		reg_1=get_reg();
		
		fprintf(sim_code_file, "MOV R%d,%d\n",reg_1,expressionTree->value);
		return reg_1;
	}

	else if (expressionTree->Node_Type==Node_Type_ASSIGNMENT)
	{

			reg_1=get_location(expressionTree->ptr1);
			reg_2=codegen(expressionTree->ptr2);
			
			fprintf(sim_code_file, "MOV [R%d],R%d\n",reg_1,reg_2);
			free_reg();
			free_reg();
			
			return reg_1;

	}
	else if (expressionTree->Node_Type==Node_Type_ARRAY)
	{	
		reg_1=get_location(expressionTree);
	
		fprintf(sim_code_file, "MOV R%d,[R%d]\n",reg_1,reg_1);
		return reg_1;
	}
	else if (expressionTree->Node_Type==Node_Type_MINUS)
	{

		fprintf(sim_code_file, "\n");

		fprintf(sim_code_file, "\n");

		reg_1=codegen(expressionTree->ptr1);
		reg_2=codegen(expressionTree->ptr2);
		
		fprintf(sim_code_file, "SUB R%d,R%d\n\n",reg_1,reg_2);
		free_reg();
		return reg_1;

	}
	else if (expressionTree->Node_Type==Node_Type_PLUS)
	{

		fprintf(sim_code_file, "\n");

		reg_1=codegen(expressionTree->ptr1);
		reg_2=codegen(expressionTree->ptr2);
		
		fprintf(sim_code_file, "ADD R%d,R%d\n\n",reg_1,reg_2);
		free_reg();
		return reg_1;

	}
	else if (expressionTree->Node_Type==Node_Type_DIV)
	{

		fprintf(sim_code_file, "\n");

		reg_1=codegen(expressionTree->ptr1);
		reg_2=codegen(expressionTree->ptr2);
		
		fprintf(sim_code_file, "DIV R%d,R%d\n\n",reg_1,reg_2);
		free_reg();
		return reg_1;

	}
	else if (expressionTree->Node_Type==Node_Type_MUL)
	{

		fprintf(sim_code_file, "\n");

		reg_1=codegen(expressionTree->ptr1);
		reg_2=codegen(expressionTree->ptr2);
		
		fprintf(sim_code_file, "MUL R%d,R%d\n\n",reg_1,reg_2);
		free_reg();
		return reg_1;

	}
	else if (expressionTree->Node_Type==Node_Type_MODULUS)
	{
		fprintf(sim_code_file, "\n");

		reg_1=codegen(expressionTree->ptr1);
		reg_2=codegen(expressionTree->ptr2);
		
		fprintf(sim_code_file, "MOD R%d,R%d\n\n",reg_1,reg_2);
		free_reg();
		return reg_1;
	}
	// else if (expressionTree->Node_Type==Node_Type_POWER)
	// {

	// 	fprintf(sim_code_file, "\n");

	// 	reg_1=get_reg();
	// 	left_value=codegen(expressionTree->ptr2);
	// 	reg_2=get_reg();
	// 	right_value=codegen(expressionTree->ptr1);
	// 	fprintf(sim_code_file, "MUL R%d,R%d\n\n",reg_1,reg_2);
	// 	free_reg();
	// 	free_reg();
	// 	return reg_1;


	// }
	else if (expressionTree->Node_Type==Node_Type_WRITE)
	{
		
		/*MEMORY_LOC will get the value of the location of the variable.The location is calculated by the 
		base value (Binding)  plus the offset value*/
		fprintf(sim_code_file, "\n");

		reg_1=get_location(expressionTree->ptr1);
		reg_2=get_reg();

		fprintf(sim_code_file, "\nMOV R%d,[R%d]\n",reg_2,reg_1);
		fprintf(sim_code_file, "OUT R%d\n",reg_2);
		
		free_reg();
		free_reg();
		fprintf(sim_code_file, "\n");
		
		return reg_1;

	}
	else if (expressionTree->Node_Type==Node_Type_READ)
	{	
		
		/*MEMORY_LOC will get the value of the location of the variable.The location is calculated by the 
		 base value (Binding)  plus the offset value*/

		fprintf(sim_code_file, "\n");

		reg_1=get_reg();
		reg_2=get_location(expressionTree->ptr1);
	
		fprintf(sim_code_file, "IN R%d\n",reg_1);
		fprintf(sim_code_file, "MOV [R%d],R%d\n",reg_2,reg_1);
		
		free_reg();
		free_reg();

		fprintf(sim_code_file, "\n");

		return reg_1;

	}
	else if (expressionTree->Node_Type==Node_Type_IF)
	{	
		
		if (expressionTree->value=='i')
		{	
			
			/*Checkthe condition is true if it is true then execute if part else execute else part*/
			
			label_1=get_label();

			//Condition part
			fprintf(sim_code_file, "\n");
			reg_1=codegen(expressionTree->ptr1);

			//if part
			fprintf(sim_code_file, "JZ R%d,LABEL%d\n",reg_1,label_1);
			
			//Next to if else part
			reg_2=codegen(expressionTree->ptr2);
			fprintf(sim_code_file, "LABEL%d:\n",label_1);

		}
		else if (expressionTree->value=='I')
		{
			
			/*Checkthe condition is true if it is true then execute if part else execute else part*/
			
			label_1=get_label();
			label_2=get_label();

			//Condition part
			fprintf(sim_code_file, "\n");
			reg_1=codegen(expressionTree->ptr1);

			//if part
			fprintf(sim_code_file, "JZ R%d,LABEL%d\n",reg_1,label_1);
			reg_2=codegen(expressionTree->ptr2);
			fprintf(sim_code_file, "JMP LABEL%d\n",label_2);

			//else part
			fprintf(sim_code_file, "LABEL%d:\n",label_1);
			codegen(expressionTree->ptr3);

			//Next to if else part
			fprintf(sim_code_file, "LABEL%d:\n",label_2);

		}
		free_reg();
		return reg_1;
	
	}
	else if (expressionTree->Node_Type==Node_Type_WHILE)
	{
		label_1=get_label();
		label_2=get_label();

		fprintf(sim_code_file, "\nLABEL%d:\n",label_1);
		//Condition part
		reg_1=codegen(expressionTree->ptr1);

		//While part
		fprintf(sim_code_file, "JZ R%d,LABEL%d\n",reg_1,label_2);

		//Statement part
		reg_2=codegen(expressionTree->ptr2);
		
		fprintf(sim_code_file, "JMP LABEL%d\n",label_1);
		fprintf(sim_code_file, "LABEL%d:\n",label_2);

		free_reg();
		return label_1;

	}
	else if (expressionTree->Node_Type==Node_Type_FUNCTION_DEF)
	{
		//cout<<"NAME = "<<expressionTree->NAME<<endl;
		//strcpy(last_function_used , expressionTree->NAME);
		
		last_function_used.push(expressionTree->NAME);

		fprintf(sim_code_file, "\n%s:\n",expressionTree->NAME);
		reg_1 = codegen(expressionTree->ptr1);
		
		last_function_used.pop();
		//Glookup(expressionTree->NAME);
		return reg_1;
	}
	else if (expressionTree->Node_Type == Node_Type_FUNCTION_CALL)
	{
		//cout<<"NAME = "<<expressionTree->NAME<<endl;
		cout<<"R = "<<reg_1<<" R = "<<reg_2<<endl;
		while (reg_1 >= 0)
		{
			fprintf(sim_code_file, "PUSH R%d\n",reg_1--);
		}
		
		struct Lsymbol *temp = new Lsymbol;
		temp = expressionTree->Arg_List->Lentry;
		while (temp != NULL)
		{
			cout<<"NAME = "<<temp->NAME<<endl;
			cout<<"Value = "<<get_variable_binding(std::string("hello"),temp->NAME)<<endl;
			temp = temp->Next;
		}
		delete temp;
		// if (expressionTree->Arg_List != NULL)
		// {
		// 	cout<<"NAME = "<<expressionTree->Arg_List->Lentry->NAME<<endl;
		// }
		reg_1 = codegen(expressionTree->ptr1);
		fprintf(sim_code_file, "CALL %s\n",expressionTree->NAME);
		return reg_1;
	}
	else if (expressionTree->Node_Type==Node_Type_RETURN)
	{
		reg_1 = codegen(expressionTree->ptr1);
		fprintf(sim_code_file, "RET\n");
		return reg_1;

	}
	else if(expressionTree->Node_Type==Node_Type_DUMMY)
	{
		codegen(expressionTree->ptr1);
		codegen(expressionTree->ptr2);
		return 0;
	}

	return -1;
}


int get_location(struct tnode *expressionTree)
{
	/*This function gives the codegen for  the location,where location = base address + offset*/

	int reg_1,reg_2;
	int location;
	if (expressionTree->value=='A')
	{		
			if (Llookup(expressionTree->NAME)==NULL)
			{
				
			}
			reg_1=get_reg();
			fprintf(sim_code_file, "MOV R%d,%d\n",reg_1,Glookup(expressionTree->NAME)->Binding);
		
			reg_2=codegen(expressionTree->ptr2);
			
			fprintf(sim_code_file, "ADD R%d,R%d\n",reg_1,reg_2);
			free_reg();
			return reg_1;
	}
	else if (expressionTree->value=='a')
	{	
			expressionTree->ptr2->value-=1;
			
			
			reg_1=get_reg();
			reg_2=codegen(expressionTree->ptr2);
			
			fprintf(sim_code_file, "MOV R%d,%d\n",reg_1,Glookup(expressionTree->NAME)->Binding);
			fprintf(sim_code_file, "ADD R%d,R%d\n",reg_1,reg_2);

			free_reg();
			return reg_1;
	}
		return -1;
}




int get_variable_binding(string last_function_used,char *NAME)
{
	/**
		This function gives the binding of the variable if it is local variable then it returns the binding of the 
		local variable otherwise it returns the binding of the global variable.
	**/

	struct Gsymbol *temp = new Gsymbol;

	temp = Gsymbol_table;


	cout<<"last_function_used ="<<last_function_used <<endl;
	
	while(temp!=NULL)
	{

		if (temp->NAME == last_function_used)
		{	
			if (temp->Arg_List != NULL)
			{	
				struct Lsymbol *temp_2 = new Lsymbol;

				temp_2 = temp->Arg_List->Lentry;

				while(temp_2!=NULL)
				{
					cout<<"temp ="<<temp_2->NAME<<endl;
					temp_2 = temp_2->Next;
				}
			}
		}
		temp=temp->Next;
	}


	delete temp;

	return 0;

}