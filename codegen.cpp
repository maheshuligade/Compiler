#include <iostream>
#include <stdio.h>
#include "exptree.hpp"
#include "y.tab.hpp"
// 
using namespace std;
int reg=0;
int left_value,right_value;
int reg_no=0;
int label_no=0;

int MEMORY_LOC;
void change_extension(char *filename)
{	
	int i,j;

	for (i = 0; filename[i]!='\n'; i++)
	{
		if (filename[i]=='.')
		{
			// cout<<filename[i++];
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
	return reg_no++;
}

void free_reg()
{
	reg_no--;
}
int get_label()
{
	return label_no++;
}

int codegen(struct tnode *expressionTree)
{	
	int reg_1,reg_2;
	int label_1,label_2,label_3;

	if (expressionTree==NULL)
	{
		return 0;
	}
	else if (expressionTree->Node_Type==ID)
	{

		reg_1=get_location(expressionTree);//get_reg();
		// fprintf(sim_code_file, "MOV R%d,%d\n",reg_1,Glookup(expressionTree->NAME)->Binding);
		fprintf(sim_code_file, "MOV R%d,[R%d]\n",reg_1,reg_1);

		//free_reg();
		//return Memory[Glookup(expressionTree->NAME)->Binding];

		return reg_1;
	}
	else if (expressionTree->Node_Type==Node_Type_LEAF)
	{

		reg_1=get_reg();
		fprintf(sim_code_file, "MOV R%d,%d\n",reg_1,expressionTree->value);
		//free_reg();
		
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
		// reg_1=codegen(expressionTree->ptr1);
		reg_1=get_reg();
		fprintf(sim_code_file, "MOV R%d,%d\n",reg_1,expressionTree->value);
		return reg_1;
	}

	else if (expressionTree->Node_Type==Node_Type_ASSIGNMENT)
	{

			reg_1=get_location(expressionTree->ptr1);
			reg_2=codegen(expressionTree->ptr2);
			// MEMORY_LOC=Glookup(expressionTree->NAME)->Binding + evaluate(expressionTree->ptr1->ptr2);

			// fprintf(sim_code_file, "MOV R%d,%d\n",reg_2,evaluate(expressionTree->ptr1->ptr2));
			//fprintf(sim_code_file, "ADD R%d,R%d\n",reg_2,reg_1);
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
		//  fprintf(sim_code_file, "\n");
		// if (expressionTree->value=='A')
		// {	

		// 	// fprintf(sim_code_file, "\n");
		// 	//reg_1=get_reg();
		// 	reg_1=codegen(expressionTree->ptr2);
		// 	reg_2=codegen(expressionTree->ptr1);
		// 	// cout<<"VALUE="<<expressionTree->ptr2->value<<endl;
		// 	//MEMORY_LOC=Glookup(expressionTree->NAME)->Binding + evaluate(expressionTree->ptr1->ptr2) + 1;
	
		// 	// fprintf(sim_code_file, "\n");
		// 	fprintf(sim_code_file, "ADD R%d,R%d\n",reg_1,reg_2);
		// 	// fprintf(sim_code_file, "MOV [R%d],R%d\n",reg_1,MEMORY_LOC);
		// 	// fprintf(sim_code_file, "MOV R%d,[R%d]\n",reg_1,reg_2);
		// 	fprintf(sim_code_file, "MOV R%d,[R%d]\n",reg_1,reg_1);

		// 	// fprintf(sim_code_file, "\n");
		// 	free_reg();
			
		// 	return reg_1;
		// }
		// else if (expressionTree->value=='a')
		// {	

		// 	// fprintf(sim_code_file, "\n");
		// 	//reg_1=get_reg();
		// 	expressionTree->ptr2->value-=1;

		// 	reg_1=codegen(expressionTree->ptr1);
		// 	reg_2=codegen(expressionTree->ptr2);
		// 	// cout<<"VALUE="<<expressionTree->ptr2->value<<endl;
		// 	//MEMORY_LOC=Glookup(expressionTree->NAME)->Binding + evaluate(expressionTree->ptr1->ptr2) + 1;
	
		// 	// fprintf(sim_code_file, "\n");
		// 	fprintf(sim_code_file, "ADD R%d,R%d\n",reg_1,reg_2);
		// 	// fprintf(sim_code_file, "MOV [R%d],R%d\n",reg_1,MEMORY_LOC);
		// 	// fprintf(sim_code_file, "MOV R%d,[R%d]\n",reg_1,reg_2);
		// 	fprintf(sim_code_file, "MOV R%d,[R%d]\n",reg_1,reg_1);

		// 	// fprintf(sim_code_file, "\n");
		// 	free_reg();
			
		// 	return reg_1;
		// }
		// else
		// {
		// 	return expressionTree->value;
		// }
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
		// MEMORY_LOC =Glookup(expressionTree->ptr1->NAME)->Binding + evaluate(expressionTree->ptr2) +1;
		fprintf(sim_code_file, "\nMOV R%d,[R%d]\n",reg_2,reg_1);
		fprintf(sim_code_file, "OUT R%d\n",reg_2);
		free_reg();
		free_reg();


		fprintf(sim_code_file, "\n");

		return reg_1;

		// //reg_1=get_reg();
		// 	reg_1=codegen(expressionTree->ptr2);
		// 	reg_2=codegen(expressionTree->ptr1);
		// 	//MEMORY_LOC=Glookup(expressionTree->NAME)->Binding + evaluate(expressionTree->ptr1->ptr2) + 1;
	
		// 	// fprintf(sim_code_file, "\n");
		// 	fprintf(sim_code_file, "ADD R%d,R%d\n",reg_1,reg_2);
		// 	fprintf(sim_code_file, "MOV [R%d],R%d\n",reg_1,MEMORY_LOC);


	}
	else if (expressionTree->Node_Type==Node_Type_READ)
	{	
		
		/*MEMORY_LOC will get the value of the location of the variable.The location is calculated by the 
		 base value (Binding)  plus the offset value*/
		
		// reg_1=get_reg();
		// MEMORY_LOC=Glookup(expressionTree->ptr1->NAME)->Binding + evaluate(expressionTree->ptr2) +1;
		// fprintf(sim_code_file, "IN R%d\n",reg_1);
		// fprintf(sim_code_file, "MOV [%d],R%d\n",MEMORY_LOC,reg_1);
		// free_reg();
		// return reg_1;

		fprintf(sim_code_file, "\n");

		reg_1=get_reg();
		reg_2=get_location(expressionTree->ptr1);
		// cout<<"reg_1="<<reg_1<<"reg_2="<<reg_2<<endl;
		// MEMORY_LOC =Glookup(expressionTree->ptr1->NAME)->Binding + evaluate(expressionTree->ptr2) +1;
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
		// cout<<"label_1="<<label_1<<"label_2="<<label_2<<endl;
		fprintf(sim_code_file, "\nLABEL%d:\n",label_1);
		//Condition part
		reg_1=codegen(expressionTree->ptr1);

		//While part
		fprintf(sim_code_file, "JZ R%d,LABEL%d\n",reg_1,label_2);

		//Statement part
		reg_2=codegen(expressionTree->ptr2);
		fprintf(sim_code_file, "JMP LABEL%d\n",label_1);
		fprintf(sim_code_file, "LABEL%d:\n",label_2);
		// cout<<"label_1="<<label_1<<"label_2="<<label_2<<endl;
		free_reg();
		return label_1;

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
	
	if (expressionTree->value=='A')
	{	

			int reg_1,reg_2;
			reg_1=get_reg();
			fprintf(sim_code_file, "MOV R%d,%d\n",reg_1,Glookup(expressionTree->NAME)->Binding);
			// cout<<"VALUE"<<char(expressionTree->value)<<endl;
			//expressionTree->ptr2->value-=1;

			//reg_1=codegen(expressionTree->ptr1);
			reg_2=codegen(expressionTree->ptr2);
			fprintf(sim_code_file, "ADD R%d,R%d\n",reg_1,reg_2);
			// fprintf(sim_code_file, "MOV R%d,[R%d]\n",reg_1,reg_1);
			free_reg();
			return reg_1;
		}
		else if (expressionTree->value=='a')
		{	
			expressionTree->ptr2->value-=1;
			int reg_1,reg_2;
			reg_1=get_reg();
			reg_2=codegen(expressionTree->ptr2);
			fprintf(sim_code_file, "MOV R%d,%d\n",reg_1,Glookup(expressionTree->NAME)->Binding);
			// cout<<"VALUE"<<char(expressionTree->value)<<endl;
			// cout<<"value="<<expressionTree->ptr2->value<<endl;

			//reg_1=codegen(expressionTree->ptr1);
			
			fprintf(sim_code_file, "ADD R%d,R%d\n",reg_1,reg_2);
			// fprintf(sim_code_file, "MOV R%d,[R%d]\n",reg_1,reg_1);
			free_reg();
			return reg_1;
		}
		return -1;
}