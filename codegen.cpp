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
int label_1,label_2,label_3;

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

	if (expressionTree==NULL)
	{
		return 0;
	}
	else if (expressionTree->Node_Type==ID)
	{

		reg_1=get_reg();
		fprintf(sim_code_file, "MOV R%d,[%d]\n",reg_1,Glookup(expressionTree->NAME)->Binding);
		free_reg();
		return Memory[Glookup(expressionTree->NAME)->Binding];

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
		if (expressionTree->value==1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	else if (expressionTree->Node_Type==Node_Type_ASSIGNMENT)
	{

			reg_1=codegen(expressionTree->ptr2);
		
			MEMORY_LOC=Glookup(expressionTree->NAME)->Binding + evaluate(expressionTree->ptr1->ptr2);

			fprintf(sim_code_file, "MOV [%d],R%d\n",MEMORY_LOC,reg_1);
			free_reg();
			return reg_1;

	}
	else if (expressionTree->Node_Type==Node_Type_ARRAY)
	{	
		if (expressionTree->value=='a'||expressionTree->value=='A')
		{	

			reg_1=get_reg();

			MEMORY_LOC=Glookup(expressionTree->NAME)->Binding + evaluate(expressionTree->ptr1->ptr2) + 1;
	
			fprintf(sim_code_file, "MOV R%d,[%d]\n",reg_1,MEMORY_LOC);

			//free_reg();
			
			return reg_1;
		}
		else
		{
			return expressionTree->value;
		}
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
		
		reg_1=get_reg();
		MEMORY_LOC=Glookup(expressionTree->ptr1->NAME)->Binding + evaluate(expressionTree->ptr2) +1;
		fprintf(sim_code_file, "MOV R%d,[%d]\n",reg_1,MEMORY_LOC);
		fprintf(sim_code_file, "OUT R%d\n",reg_1);
		free_reg();
		return 0;

	}
	else if (expressionTree->Node_Type==Node_Type_READ)
	{	
		
		/*MEMORY_LOC will get the value of the location of the variable.The location is calculated by the 
		 base value (Binding)  plus the offset value*/
		
		reg_1=get_reg();
		MEMORY_LOC=Glookup(expressionTree->ptr1->NAME)->Binding + evaluate(expressionTree->ptr2) +1;
		fprintf(sim_code_file, "IN R%d\n",reg_1);
		fprintf(sim_code_file, "MOV [%d],R%d\n",MEMORY_LOC,reg_1);
		free_reg();
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
		return 0;

	}
	else if(expressionTree->Node_Type==Node_Type_DUMMY)
	{
		codegen(expressionTree->ptr1);
		codegen(expressionTree->ptr2);
		return 0;
	}

	return -1;
}