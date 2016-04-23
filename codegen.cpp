#include <iostream>
#include <stdio.h>
#include "exptree.hpp"
#include "y.tab.hpp"
#include <string>
// 
// int reg=0;
// int left_value,right_value;
static int reg_no = 0;

static int label_no=0;
static stack <char *> last_function_used;


static int MEMORY_LOC;
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

int get_reg(int line)
{	
	/*This Function allocates the least unused register and returns its value*/
	// cout<<"reg_get = "<<++reg_no<<endl;
	// cout<<reg_no<<endl;

	if (reg_no  > 7)
	{	
		cout<<line<<endl;
		cout<<"exception:get_reg."<<endl;
	}
	// cout<<"reg_no = "<<reg_no<<endl;
	return reg_no++;
}

void free_reg(int line)
{	
	/*This Function deallocates the max unused register and returns its value*/
	// cout<<line<<endl;
	reg_no--;
	// cout<<"reg_free = "<<reg_no<<endl;
	if (reg_no < 0)
	{	
		cout<<line<<endl;
		/**Exception if the reg value less than 0.**/
		cout<<"exception:free_reg. "<<reg_no<<endl;
	}
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
		// cout<<"reg_no Node_Type = "<<reg_no<<endl;
		// cout<<"Node_Type = "<<expressionTree->Node_Type<<endl;
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
		reg_1=get_reg(__LINE__);
		
		fprintf(sim_code_file, "MOV R%d,%d\n",reg_1,expressionTree->value);		
		return reg_1;
	}
	else if (expressionTree->Node_Type==Node_Type_LT)
	{
		
		reg_1=codegen(expressionTree->ptr1);
		reg_2=codegen(expressionTree->ptr2);
		
		fprintf(sim_code_file, "LT R%d,R%d\n",reg_1,reg_2);
		free_reg(__LINE__);
		return reg_1;

	}
	else if (expressionTree->Node_Type==Node_Type_LE)
	{
		reg_1=codegen(expressionTree->ptr1);
		reg_2=codegen(expressionTree->ptr2);
		
		fprintf(sim_code_file, "LE R%d,R%d\n",reg_1,reg_2);
		free_reg(__LINE__);
		return reg_1;
	}
	else if (expressionTree->Node_Type==Node_Type_GT)
	{
		reg_1=codegen(expressionTree->ptr1);
		reg_2=codegen(expressionTree->ptr2);
		
		fprintf(sim_code_file, "GT R%d,R%d\n",reg_1,reg_2);
		free_reg(__LINE__);
		return reg_1;
	}
	else if (expressionTree->Node_Type==Node_Type_GE)
	{
		reg_1=codegen(expressionTree->ptr1);
		reg_2=codegen(expressionTree->ptr2);
		
		fprintf(sim_code_file, "GE R%d,R%d\n",reg_1,reg_2);
		free_reg(__LINE__);
		return reg_1;
	}
	else if (expressionTree->Node_Type==Node_Type_EQ)
	{
		reg_1=codegen(expressionTree->ptr1);
		reg_2=codegen(expressionTree->ptr2);
		
		fprintf(sim_code_file, "EQ R%d,R%d\n",reg_1,reg_2);
		free_reg(__LINE__);
		return reg_1;
	}
	else if (expressionTree->Node_Type==Node_Type_NE)
	{
		reg_1=codegen(expressionTree->ptr1);
		reg_2=codegen(expressionTree->ptr2);
		
		fprintf(sim_code_file, "NE R%d,R%d\n",reg_1,reg_2);
		free_reg(__LINE__);
		return reg_1;
	}
	else if (expressionTree->Node_Type==Node_Type_NOT)
	{
		reg_1=codegen(expressionTree->ptr1);
		reg_2=get_reg(__LINE__);

		fprintf(sim_code_file, "MOV R%d,0\n",reg_2);
		fprintf(sim_code_file, "EQ R%d,R%d\n",reg_2,reg_1);
		free_reg(__LINE__);
		return reg_2;
	}
	else if (expressionTree->Node_Type==Node_Type_OR)
	{
		reg_1=codegen(expressionTree->ptr2);
		reg_2=codegen(expressionTree->ptr1);
		
		fprintf(sim_code_file, "ADD R%d,R%d\n\n",reg_2,reg_1);
		free_reg(__LINE__);
		return reg_2;
	}
	else if (expressionTree->Node_Type==Node_Type_AND)
	{
		reg_1=codegen(expressionTree->ptr2);
		reg_2=codegen(expressionTree->ptr1);
		
		fprintf(sim_code_file, "MUL R%d,R%d\n\n",reg_2,reg_1);
		free_reg(__LINE__);
		return reg_2;
		
	}
	else if (expressionTree->Node_Type==Node_Type_BOOLEAN_CONSTANT)
	{	
		reg_1=get_reg(__LINE__);
		
		fprintf(sim_code_file, "MOV R%d,%d\n",reg_1,expressionTree->value);
		return reg_1;
	}

	else if (expressionTree->Node_Type==Node_Type_ASSIGNMENT)
	{
			// cout<<"Node_Type = "<<expressionTree->ptr2->Node_Type<<endl;
			// if (expressionTree->ptr2->Node_Type == Node_Type_FUNCTION_CALL)
			// {
			// reg_2 = codegen(expressionTree->ptr2);
			// // 	get_reg(__LINE__);
			// }
			// else
			// {
			// 	reg_2 = get_reg(__LINE__);
			// }
			reg_1 = get_location(expressionTree->ptr1);
			reg_2 = codegen(expressionTree->ptr2);
			// cout<<"Node_Type in ASSIGNMENT = "<<expressionTree->ptr2->Node_Type<<endl;
			fprintf(sim_code_file, "MOV [R%d],R%d\n",reg_1,reg_2);
			free_reg(__LINE__);
			free_reg(__LINE__);
			
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
		free_reg(__LINE__);
		return reg_1;

	}
	else if (expressionTree->Node_Type==Node_Type_PLUS)
	{

		fprintf(sim_code_file, "\n");

		reg_1=codegen(expressionTree->ptr1);
		reg_2=codegen(expressionTree->ptr2);
		
		fprintf(sim_code_file, "ADD R%d,R%d\n\n",reg_1,reg_2);
		free_reg(__LINE__);
		return reg_1;

	}
	else if (expressionTree->Node_Type==Node_Type_DIV)
	{

		fprintf(sim_code_file, "\n");

		reg_1=codegen(expressionTree->ptr1);
		reg_2=codegen(expressionTree->ptr2);
		
		fprintf(sim_code_file, "DIV R%d,R%d\n\n",reg_1,reg_2);
		free_reg(__LINE__);
		return reg_1;

	}
	else if (expressionTree->Node_Type==Node_Type_MUL)
	{

		fprintf(sim_code_file, "\n");

		reg_1=codegen(expressionTree->ptr1);
		reg_2=codegen(expressionTree->ptr2);
		
		fprintf(sim_code_file, "MUL R%d,R%d\n\n",reg_1,reg_2);
		free_reg(__LINE__);
		return reg_1;

	}
	else if (expressionTree->Node_Type==Node_Type_MODULUS)
	{
		fprintf(sim_code_file, "\n");

		reg_1=codegen(expressionTree->ptr1);
		reg_2=codegen(expressionTree->ptr2);
		
		fprintf(sim_code_file, "MOD R%d,R%d\n\n",reg_1,reg_2);
		free_reg(__LINE__);
		return reg_1;
	}
	// else if (expressionTree->Node_Type==Node_Type_POWER)
	// {

	// 	fprintf(sim_code_file, "\n");

	// 	reg_1=get_reg(__LINE__);
	// 	left_value=codegen(expressionTree->ptr2);
	// 	reg_2=get_reg(__LINE__);
	// 	right_value=codegen(expressionTree->ptr1);
	// 	fprintf(sim_code_file, "MUL R%d,R%d\n\n",reg_1,reg_2);
	// 	free_reg(__LINE__);
	// 	free_reg(__LINE__);
	// 	return reg_1;


	// }
	else if (expressionTree->Node_Type==Node_Type_WRITE)
	{
		
		/*MEMORY_LOC will get the value of the location of the variable.The location is calculated by the 
		base value (Binding)  plus the offset value*/
		fprintf(sim_code_file, "\n");
		if (expressionTree->ptr1->Node_Type == Node_Type_ARRAY)
		{
			reg_1=get_location(expressionTree->ptr1);
			reg_2=get_reg(__LINE__);

			fprintf(sim_code_file, "\nMOV R%d,[R%d]\n",reg_2,reg_1);
			fprintf(sim_code_file, "OUT R%d\n",reg_2);
		}
		else
		{
			reg_1 = codegen(expressionTree->ptr1);
			reg_2=get_reg(__LINE__);
			fprintf(sim_code_file, "\nMOV R%d,R%d\n",reg_2,reg_1);
			fprintf(sim_code_file, "OUT R%d\n",reg_2);

		}
		
		free_reg(__LINE__);
		free_reg(__LINE__);
		fprintf(sim_code_file, "\n");
		
		return reg_1;

	}
	else if (expressionTree->Node_Type==Node_Type_READ)
	{	
		
		/*MEMORY_LOC will get the value of the location of the variable.The location is calculated by the 
		 base value (Binding)  plus the offset value*/

		fprintf(sim_code_file, "\n");

		reg_1=get_reg(__LINE__);
		reg_2=get_location(expressionTree->ptr1);
	
		fprintf(sim_code_file, "IN R%d\n",reg_1);
		fprintf(sim_code_file, "MOV [R%d],R%d\n",reg_2,reg_1);
		
		free_reg(__LINE__);
		free_reg(__LINE__);

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
		free_reg(__LINE__);
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

		free_reg(__LINE__);
		return label_1;

	}
	else if (expressionTree->Node_Type==Node_Type_FUNCTION_DEF)
	{
		//cout<<"NAME = "<<expressionTree->NAME<<endl;
		//strcpy(last_function_used , expressionTree->NAME);
		// int r;
		// r = reg_1;
		// reg_1 = 0;
		reg_no = 0;
		cout<<"NAME = "<<expressionTree->NAME<<endl;
		last_function_used.push(expressionTree->NAME);

		fprintf(sim_code_file, "\n%s:\n",expressionTree->NAME);

		/**Actions done by the calle function**/

		/**Saves the context.**/
		fprintf(sim_code_file, "PUSH BP\n");
		fprintf(sim_code_file, "MOV BP,SP\n");

		// cout<<"last_function_used = "<<last_function_used.top()<<endl;

		assign_binding(expressionTree);
		/**Pushes all local variables in the stack.**/
		struct Lsymbol *temp = new Lsymbol;
		temp = Glookup(expressionTree->NAME)->Local;
		while (temp != NULL)
		{	

			// cout<<"NAME = "<<temp->NAME<<" pass_by_type = "<<temp->pass_by_type<<" binding = "<<temp->Binding<<endl;
			if (temp->pass_by_type == LOCAL_VARIABLE)
			{	
				int  bind;
				// cout<<reg_no<<endl;
				reg_1 = get_reg(__LINE__);
				// cout<<reg_no<<endl;

				if (lookup_variable((last_function_used.top()),(temp->NAME)) != NULL)
				{
						bind = lookup_variable((last_function_used.top()),(temp->NAME))->Binding;
						fprintf(sim_code_file, "MOV R%d,%d\n",reg_1,bind);
						fprintf(sim_code_file, "PUSH R%d\n",reg_1);
				}
				free_reg(__LINE__);
			}
			temp = temp->Next;
		}
		delete temp;


		// reg_2 = get_reg(__LINE__);
		// if (strcmp(last_function_used.top(), "main") != 0)
		// {
		// 	fprintf(sim_code_file, "MOV R7,SP\n");
		// 	fprintf(sim_code_file, "MOV R6,4\n");
		// 	fprintf(sim_code_file, "SUB R7,R6\n");
		// 	fprintf(sim_code_file, "MOV R7,[R7]\n");
		// 	fprintf(sim_code_file, "OUT R7\n");
		// }
		// free_reg(__LINE__);
		reg_1 = codegen(expressionTree->ptr1);


		last_function_used.pop();
		//Glookup(expressionTree->NAME);
		// reg_1 = r;
		// free_reg(__LINE__);
		// cout<<"					reg = "<<reg_no<<endl;
		return reg_1;
	}
	else if (expressionTree->Node_Type == Node_Type_FUNCTION_CALL)
	{
		//cout<<"NAME = "<<expressionTree->NAME<<endl;
		// cout<<"R = "<<reg_1<<" R = "<<reg_2<<endl;
		int r,bind,position = -3;
		int register_pushed[10],reg_push_no = 0;;
		// r = reg_1;
		// reg_1 = 3;

		/**Pushing Register in use in the stack.**/
		r = 0;
		while (r < reg_no)
		{	register_pushed[reg_push_no++] = r;
			fprintf(sim_code_file, "PUSH R%d\n",r++);
		}
		r = r - 1;
		// cout<<reg_no<<endl;
		// cout<<r<<endl;
		// reg_no = 0; //For the exception:free_reg problem
		/**Pushing Arguments  in the stack.**/

		struct tnode *temp = new tnode;
		struct Lsymbol *temp_2 = new Lsymbol;

		temp = expressionTree->Arg_List;
		temp_2 = Glookup(expressionTree->NAME)->Arg_List->Lentry;

		/**Getting number of arguments**/
		int no_of_arg = 0;
		while (temp_2 != NULL)
		{
			no_of_arg++;
			temp_2 = temp_2->Next;
		}

		position = -2- no_of_arg;
		// cout<<"no_of_arg = "<<position<<endl;
		int arg_for_pop = 0;

		temp_2 = Glookup(expressionTree->NAME)->Arg_List->Lentry;
		while (temp != NULL && temp_2 != NULL)
		{	arg_for_pop++;
			// cout<<"NAME = "<<temp->Node_Type<<endl;
			// cout<<"NAME2 = "<<temp_2->pass_by_type<<endl;
			temp_2->Binding = position++;
			// cout<<"NAME = "<<temp_2->NAME<<" pass_by_type = "<<temp_2->pass_by_type<<" binding = "<<temp_2->Binding<<endl;
			if (temp_2->pass_by_type == PASS_BY_REFERENCE)
			{
				reg_1 = get_reg(__LINE__);

				if (lookup_variable((last_function_used.top()),(temp->NAME)) != NULL)
				{
					// cout<<"NAME temp= "<<lookup_variable((last_function_used.top()),(temp->NAME))->NAME<<" pass_by_type = "<<lookup_variable((last_function_used.top()),(temp->NAME))->pass_by_type<<" binding = "<<lookup_variable((last_function_used.top()),(temp->NAME))->Binding<<endl;

					if (lookup_variable((last_function_used.top()),(temp->NAME))->pass_by_type == PASS_BY_REFERENCE)
					{	
						reg_2 = get_reg(__LINE__);
						bind = lookup_variable((last_function_used.top()),(temp->NAME))->Binding;
						fprintf(sim_code_file, "MOV R%d,%d\n",reg_1,bind);
						fprintf(sim_code_file, "MOV R%d,BP\n",reg_2);
						fprintf(sim_code_file, "ADD R%d,R%d\n",reg_1,reg_2);
						fprintf(sim_code_file, "MOV R%d,[R%d]\n",reg_1,reg_1);

						// MOV R3,BP
						// ADD R2,R3
						// MOV R2,[R2]
						register_pushed[reg_push_no++] = reg_1;
						fprintf(sim_code_file, "PUSH R%d\n",reg_1);
						free_reg(__LINE__);
					}
					else if (lookup_variable((last_function_used.top()),(temp->NAME))->pass_by_type == PASS_BY_VALUE)
					{
						reg_2 = get_reg(__LINE__);
						bind = lookup_variable((last_function_used.top()),(temp->NAME))->Binding;
						fprintf(sim_code_file, "MOV R%d,%d\n",reg_1,bind);
						fprintf(sim_code_file, "MOV R%d,BP\n",reg_2);
						fprintf(sim_code_file, "ADD R%d,R%d\n",reg_1,reg_2);
						// fprintf(sim_code_file, "MOV R%d,[R%d]\n",reg_1,reg_1);
						// fprintf(sim_code_file, "MOV R%d,[R%d]\n",reg_1,reg_1);
						register_pushed[reg_push_no++] = reg_1;
						fprintf(sim_code_file, "PUSH R%d\n",reg_1);
						free_reg(__LINE__);

					}
					else if (lookup_variable((last_function_used.top()),(temp->NAME))->pass_by_type == LOCAL_VARIABLE)
					{
						reg_2 = get_reg(__LINE__);
						bind = lookup_variable((last_function_used.top()),(temp->NAME))->Binding;
						fprintf(sim_code_file, "MOV R%d,%d\n",reg_1,bind);
						fprintf(sim_code_file, "MOV R%d,BP\n",reg_2);
						fprintf(sim_code_file, "ADD R%d,R%d\n",reg_1,reg_2);
						// fprintf(sim_code_file, "MOV R%d,[R%d]\n",reg_1,reg_1);
						// fprintf(sim_code_file, "MOV R%d,[R%d]\n",reg_1,reg_1);
						register_pushed[reg_push_no++] = reg_1;

						fprintf(sim_code_file, "PUSH R%d\n",reg_1);
						free_reg(__LINE__);

					}
				}
				else if(Glookup(last_function_used.top()) != NULL)
				{
					// cout<<char(temp->value)<<endl;
					// bind = Glookup(last_function_used.top())->Binding +;
					reg_1 = get_location(temp);
					// fprintf(sim_code_file, "MOV R%d,%d\n",reg_1,bind);
					// fprintf(sim_code_file, "MOV R%d,[R%d]\n",reg_1,reg_1);
					register_pushed[reg_push_no++] = reg_1;
					fprintf(sim_code_file, "PUSH R%d\n",reg_1);
					free_reg(__LINE__);
				}
				// else if(Glookup(last_function_used.top()) != NULL)
				// {
				// 	bind = Glookup(last_function_used.top())->Binding;
				// 	fprintf(sim_code_file, "MOV R%d,%d\n",reg_1,bind);
				// 	fprintf(sim_code_file, "PUSH R%d\n",reg_1);
				// }

				free_reg(__LINE__);
			}
			else if (temp_2->pass_by_type == PASS_BY_VALUE)
			{
				// cout<<"Value = "<<get_variable_binding(string(last_function_used.top()),temp->NAME)<<endl;
				if (temp->Node_Type == Node_Type_ARRAY)
				{
					reg_1 = get_reg(__LINE__);

					if (lookup_variable((last_function_used.top()),(temp->NAME)) != NULL)
					{
						if (lookup_variable((last_function_used.top()),(temp->NAME))->pass_by_type == PASS_BY_REFERENCE)
						{
							bind = lookup_variable((last_function_used.top()),(temp->NAME))->Binding;

							//cout<<"Binding = "<<bind<<endl;
							fprintf(sim_code_file, "MOV R%d,%d\n",reg_1,bind);
							fprintf(sim_code_file, "MOV R%d,[R%d]\n",reg_1,reg_1);
							register_pushed[reg_push_no++] = reg_1;
							fprintf(sim_code_file, "PUSH R%d\n",reg_1);
						}
						else 
						if (lookup_variable((last_function_used.top()),(temp->NAME))->pass_by_type == PASS_BY_VALUE)
						{
							reg_2 = get_reg(__LINE__);

							bind = lookup_variable((last_function_used.top()),(temp->NAME))->Binding;
							// cout<<"NAME = "<<temp->NAME<<endl;
							fprintf(sim_code_file, "MOV R%d,%d\n",reg_1,bind);
							fprintf(sim_code_file, "MOV R%d,BP\n",reg_2);
							fprintf(sim_code_file, "ADD R%d,R%d\n",reg_1,reg_2);
							fprintf(sim_code_file, "MOV R%d,[R%d]\n",reg_1,reg_1);
							register_pushed[reg_push_no++] = reg_1;
							fprintf(sim_code_file, "PUSH R%d\n",reg_1);
							free_reg(__LINE__);
						}
						else if (lookup_variable((last_function_used.top()),(temp->NAME))->pass_by_type == LOCAL_VARIABLE)
						{
							reg_2 = get_reg(__LINE__);

							bind = lookup_variable((last_function_used.top()),(temp->NAME))->Binding;
							// cout<<"NAME = "<<temp->NAME<<endl;
							fprintf(sim_code_file, "MOV R%d,%d\n",reg_1,bind);
							fprintf(sim_code_file, "MOV R%d,BP\n",reg_2);
							fprintf(sim_code_file, "ADD R%d,R%d\n",reg_1,reg_2);
							fprintf(sim_code_file, "MOV R%d,[R%d]\n",reg_1,reg_1);
							register_pushed[reg_push_no++] = reg_1;

							fprintf(sim_code_file, "PUSH R%d\n",reg_1);
							free_reg(__LINE__);
						}

					}
					else
					{
						bind = Glookup((temp->NAME))->Binding;
						fprintf(sim_code_file, "MOV R%d,%d\n",reg_1,bind);
						fprintf(sim_code_file, "MOV R%d,[R%d]\n",reg_1,reg_1);
						register_pushed[reg_push_no++] = reg_1;
						fprintf(sim_code_file, "PUSH R%d\n",reg_1);
						//cout<<"Binding = "<<bind<<endl;
					}	
					free_reg(__LINE__);
				}
				else
				{
					// fprintf(sim_code_file, "\n\n");
					reg_1 = codegen(temp);
					// cout<<"Node_Type = "<<temp->Node_Type<<endl;
					register_pushed[reg_push_no++] = reg_1;
					fprintf(sim_code_file, "PUSH R%d\n",reg_1);
					// cout<<"reg_1 = "<<reg_1<<endl;
					// free_reg(__LINE__);

				}
			}
			temp = temp->Arg_List;
			temp_2 = temp_2->Next;
		}
		delete temp;
		delete temp_2;

		/**Pushing space for the return value.**/
		register_pushed[reg_push_no++] = reg_1;
		fprintf(sim_code_file, "PUSH R%d\n",reg_1);

		// if (expressionTree->Arg_List != NULL)
		// {
		// 	cout<<"NAME = "<<expressionTree->Arg_List->Lentry->NAME<<endl;
		// }
		// reg_1 = r;
		// reg_1 = codegen(expressionTree->ptr1);
		// cout<<"Node_Type = "<<expressionTree->ptr1->Node_Type<<endl;
		// cout<<"reg_1 = "<<reg_1<<endl;
		


		// get_reg(__LINE__);
		// cout<<"reg_no = "<<reg_no<<endl;
		// reg_no = 0;
		fprintf(sim_code_file, "CALL %s\n",expressionTree->NAME);
		// cout<<"reg_no = "<<reg_no<<endl;
		cout<<"reg = "<<reg_push_no<<endl;
		while (reg_push_no > 0)
		{
			// cout<<"reg_push_no = "<<register_pushed[--reg_push_no]<<endl;
			fprintf(sim_code_file, "POP R%d\n",register_pushed[--reg_push_no]);
		}

		// fprintf(sim_code_file, "POP R0\n");
		// fprintf(sim_code_file, "OUT R0\n");
		// reg_no = r;
		// cout<<"reg_no = "<<reg_no<<endl;
		int i;
		// cout<<arg_for_pop<<endl;
		// i = arg_for_pop - 2;
		// while (i >= 0)
		// {	
		// 	fprintf(sim_code_file, "POP R0\n");
		// 	i--;
		// }
		// i = reg_no;
		// cout<<reg_no<<endl;
		// while (i >= 0)
		// {
		// 	// cout<<"I"<<endl;
		// 	fprintf(sim_code_file, "POP R%d\n",i--);
		// }
		// cout<<reg_1<	<endl;
		// cout<<r<<endl;

		struct Lsymbol *temp_local = new Lsymbol;
		temp_local =  Glookup(last_function_used.top())->Local;

		int no_of_local_var = 0;
		while (temp_local != NULL)
		{	
			// cout<<"NAME = "<<temp_local->pass_by_type<<endl;
			if (temp_local->pass_by_type == LOCAL_VARIABLE)
			{
				no_of_local_var++;
			}
			temp_local = temp_local->Next;
		}
		/**For the exception:free_reg problem**/
		reg_1 = get_reg(__LINE__);
		// reg_1 = 0;
		reg_2 = get_reg(__LINE__);
		// fprintf(sim_code_file, "MOV R%d,BP\n",reg_1);
		// fprintf(sim_code_file, "MOV R%d,2\n",reg_2);
		// fprintf(sim_code_file, "SUB R%d,R%d\n",reg_1,reg_2);
		// fprintf(sim_code_file, "MOV R%d,[R%d]\n",reg_1,reg_1);
		// cout<<arg_for_pop + r<<endl;
		// cout<<"arg_for_pop = "<<arg_for_pop<<endl;
		// cout<<"r = "<<r<<endl;
		// cout<<"no_of_local_var = "<<no_of_local_var<<endl;
		fprintf(sim_code_file, "MOV R%d,BP\n",reg_1);
		fprintf(sim_code_file, "MOV R%d,%d\n",reg_2,arg_for_pop + r + 2 + no_of_local_var);
		fprintf(sim_code_file, "ADD R%d,R%d\n",reg_1,reg_2);
		fprintf(sim_code_file, "MOV R%d,[R%d]\n",reg_1,reg_1);
		// fprintf(sim_code_file, "OUT R%d\n",reg_1);
		free_reg(__LINE__);
		return reg_1;
	}
	else if (expressionTree->Node_Type==Node_Type_RETURN)
	{
		reg_1 = get_reg(__LINE__);
		reg_2 = get_reg(__LINE__);
		/**Actions on encoutring RET statement**/

		/**Poping local variables from the stack.**/

		struct Lsymbol *temp = new Lsymbol;
		temp =  Glookup(last_function_used.top())->Local;

		int no_of_local_var = 0;
		while (temp != NULL)
		{	no_of_local_var++;
			temp = temp->Next;
		}

		fprintf(sim_code_file, "MOV R%d,SP\n",reg_1);
		fprintf(sim_code_file, "MOV R%d,%d\n",reg_2,no_of_local_var);
		fprintf(sim_code_file, "SUB R%d,R%d\n",reg_1,reg_2);

		fprintf(sim_code_file, "MOV SP,R%d\n",reg_1);

		free_reg(__LINE__);

		/**Set the Return value at BP - 2**/

		fprintf(sim_code_file, "MOV R%d,BP\n",reg_1);
		fprintf(sim_code_file, "MOV R%d,2\n",reg_2);
		fprintf(sim_code_file, "SUB R%d,R%d\n",reg_1,reg_2);
		reg_2 = codegen(expressionTree->ptr1);
		// fprintf(sim_code_file, "MOV [R%d],R%d\n",reg_1,reg_1);
		fprintf(sim_code_file, "MOV [R%d],R%d\n",reg_1,reg_2);
		// fprintf(sim_code_file, "OUT R%d\n",reg_2);
		// fprintf(sim_code_file, "MOV R%d,BP\n",reg_1);
		// fprintf(sim_code_file, "MOV R%d,2\n",reg_2);
		// fprintf(sim_code_file, "ADD R%d,R%d\n",reg_1,reg_2);
		fprintf(sim_code_file, "MOV SP,BP\n");
		fprintf(sim_code_file, "POP BP\n");

		fprintf(sim_code_file, "RET\n");
		free_reg(__LINE__);
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

	int reg_1 = 0,reg_2 = 0;
	int location;
	// cout<<"Node_Type = "<<expressionTree->ptr2->Node_Type<<endl;
	if (expressionTree->value=='A')
	{		
			// if (Llookup(expressionTree->NAME)==NULL)
			// {
				
			// }
			reg_1=get_reg(__LINE__);
			fprintf(sim_code_file, "MOV R%d,%d\n",reg_1,Glookup(expressionTree->NAME)->Binding);
		
			reg_2=codegen(expressionTree->ptr2);
			
			fprintf(sim_code_file, "ADD R%d,R%d\n",reg_1,reg_2);
			free_reg(__LINE__);
			return reg_1;
	}
	else if (expressionTree->value=='a')
	{	
			expressionTree->ptr2->value-=1;
			// cout<<"before reg_1 = "<<reg_1<<" reg_2 = "<<reg_2<<endl;
			reg_1=get_reg(__LINE__);
			reg_2=codegen(expressionTree->ptr2);
			// cout<<"after reg_1 = "<<reg_1<<" reg_2 = "<<reg_2<<endl;
			
			if (lookup_variable(last_function_used.top(),expressionTree->NAME) == NULL)
			{
				location = Glookup(expressionTree->NAME)->Binding;
				fprintf(sim_code_file, "MOV R%d,%d\n",reg_1,location);
				fprintf(sim_code_file, "ADD R%d,R%d\n",reg_1,reg_2);
			}
			else
			{	
				// cout<<"pass_by_type = "<<lookup_variable(last_function_used.top(),expressionTree->NAME)->pass_by_type<<endl;			
				location = lookup_variable(last_function_used.top(),expressionTree->NAME)->Binding;
				if (lookup_variable(last_function_used.top(),expressionTree->NAME)->pass_by_type == PASS_BY_REFERENCE)
				{
					// cout<<"location = "<<location<<endl;
					fprintf(sim_code_file, "MOV R%d,%d\n",reg_1,location);
					fprintf(sim_code_file, "MOV R%d,BP\n",reg_2);
					fprintf(sim_code_file, "ADD R%d,R%d\n",reg_1,reg_2);
					fprintf(sim_code_file, "MOV R%d,[R%d]\n",reg_1,reg_1);
					// fprintf(sim_code_file, "OUT R%d",reg_1);
				}
				else if (lookup_variable(last_function_used.top(),expressionTree->NAME)->pass_by_type == PASS_BY_VALUE)
				{
					// cout<<"location = "<<location<<endl;
					fprintf(sim_code_file, "MOV R%d,%d\n",reg_1,location);
					fprintf(sim_code_file, "MOV R%d,BP\n",reg_2);
					fprintf(sim_code_file, "ADD R%d,R%d\n",reg_1,reg_2);
					// fprintf(sim_code_file, "MOV R%d,[R%d]\n",reg_1,reg_1);
					// fprintf(sim_code_file, "OUT R%d",reg_1);
				}
				else
				{
					fprintf(sim_code_file, "MOV R%d,%d\n",reg_1,location);
					fprintf(sim_code_file, "MOV R%d,BP\n",reg_2);
					fprintf(sim_code_file, "ADD R%d,R%d\n",reg_1,reg_2);
					// fprintf(sim_code_file, "MOV R%d,[R%d]\n",reg_1,reg_1);
					// fprintf(sim_code_file, "MOV R%d,[R%d]\n",reg_1,reg_1);

				}
			}
			free_reg(__LINE__);
			return reg_1;	
	}
	else 
	{
		/**Exception if the variable does not exist.**/
		cout<<"exception:get_location."<<endl;
		return -1;
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


	// cout<<"last_function_used ="<<last_function_used <<endl;
	
	while(temp!=NULL)
	{

		if (temp->NAME == last_function_used)
		{	
			if (temp->Arg_List != NULL)
			{	
				struct Lsymbol *temp_2 = new Lsymbol;

				temp_2 = temp->Local;//->Lentry;

				while(temp_2!=NULL)
				{	
					if (temp_2->NAME == NAME)
					{
						return temp->Binding;
					}
					// cout<<"temp ="<<temp_2->NAME<<endl;
					temp_2 = temp_2->Next;
				}
			}
		}
		temp=temp->Next;
	}
	cout<<"Exception:get_variable_binding"<<endl;

	delete temp;

	return 0;

}
void assign_binding(struct tnode *expressionTree)
{
	/**
		This function assigns the binding to the local variables and the 
		argument relative to the stack
	**/
	
	int no_of_local = 0,no_of_arg = 0,position_plus = 0,position_minus = 0;

	struct Lsymbol *temp = new Lsymbol;
	temp = Glookup(expressionTree->NAME)->Arg_List->Lentry;

	while (temp != NULL)
	{
		no_of_arg++;
		temp = temp->Next;
	}

	// cout<<"no_of_arg = "<<no_of_arg<<endl;

	temp = Glookup(expressionTree->NAME)->Local;

	while (temp != NULL)
	{
		no_of_local++;
		temp = temp->Next;
	}
	// cout<<"no_of_local = "<<no_of_local<<endl;
		
	no_of_local = no_of_local - no_of_arg;
	// cout<<"no_of_local = "<<no_of_local<<endl;

	temp = Glookup(expressionTree->NAME)->Local;

	position_plus = 0;
	position_minus = -2 - no_of_arg;

	while (temp != NULL)
	{	
		if (no_of_local > position_plus)
		{
			temp->Binding = ++position_plus;
			// cout<<temp->Binding<<endl;
		}
		else
		{
			temp->Binding = position_minus++;
		}
		temp = temp->Next;
	}

	delete temp;
}