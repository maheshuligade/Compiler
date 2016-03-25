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
int label_1,label_2;
int reg_1,reg_2;
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

	if (expressionTree==NULL)
	{
		return 0;
	}
	else if (expressionTree->Node_Type==ID)
	{
		// /cout<<"Memory="<<Memory[Glookup(expressionTree->NAME)->Binding]<<endl;
		return Memory[Glookup(expressionTree->NAME)->Binding];
	}
	else if (expressionTree->Node_Type==Node_Type_LEAF)
	{
		return expressionTree->value;
	}
	else if (expressionTree->Node_Type==Node_Type_LT)
	{
		if (codegen(expressionTree->ptr1)<codegen(expressionTree->ptr2))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if (expressionTree->Node_Type==Node_Type_LE)
	{
		if (codegen(expressionTree->ptr1)<=codegen(expressionTree->ptr2))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if (expressionTree->Node_Type==Node_Type_GT)
	{
		if (codegen(expressionTree->ptr1)>codegen(expressionTree->ptr2))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if (expressionTree->Node_Type==Node_Type_GE)
	{
		if (codegen(expressionTree->ptr1)>=codegen(expressionTree->ptr2))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if (expressionTree->Node_Type==Node_Type_EQ)
	{
		if (codegen(expressionTree->ptr1)==codegen(expressionTree->ptr2))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if (expressionTree->Node_Type==Node_Type_NE)
	{
		if (codegen(expressionTree->ptr1)!=codegen(expressionTree->ptr2))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if (expressionTree->Node_Type==Node_Type_NOT)
	{
		if (!codegen(expressionTree->ptr1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if (expressionTree->Node_Type==Node_Type_OR)
	{
		if (codegen(expressionTree->ptr1) || codegen(expressionTree->ptr2))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if (expressionTree->Node_Type==Node_Type_AND)
	{
		if (codegen(expressionTree->ptr1)&&codegen(expressionTree->ptr2))
		{
			return true;
		}
		else
		{
			return false;
		}
	}else if (expressionTree->Node_Type==Node_Type_BOOLEAN_CONSTANT)
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
		
		if (expressionTree->ptr1->Node_Type==Node_Type_ARRAY)
		{
			return Memory[Glookup(expressionTree->NAME)->Binding + codegen(expressionTree->ptr1->ptr2)]=codegen(expressionTree->ptr2);
		}
	}
	else if (expressionTree->Node_Type==Node_Type_ARRAY)
	{
		if (expressionTree->value=='a'||expressionTree->value=='A')
		{
			return Memory[Glookup(expressionTree->NAME)->Binding + codegen(expressionTree->ptr2)];
		}
		else
		{
			return expressionTree->value;
		}
	}
	else if (expressionTree->Node_Type==Node_Type_PLUS)
	{
		left_value=codegen(expressionTree->ptr1);
		right_value=codegen(expressionTree->ptr2);

		fprintf(sim_code_file, "ADD R%d,R%d",left_value,right_value);

	}
	else if (expressionTree->Node_Type==Node_Type_WRITE)
	{
		// cout<<"expressionTree->Value="<<Memory[1]<<codegen(expressionTree->ptr1)<<endl;
		reg_1=get_reg();
		fprintf(sim_code_file, "MOV R%d,%d\n",reg_1,codegen(expressionTree->ptr1));
		fprintf(sim_code_file, "OUT R%d\n",reg_1);
		free_reg();
		return 0;
	}
	else if (expressionTree->Node_Type==Node_Type_READ)
	{
		reg_1=get_reg();
		int MEMORY_LOC=Glookup(expressionTree->ptr1->NAME)->Binding + evaluate(expressionTree->ptr2) +1;
		fprintf(sim_code_file, "IN R%d\n",reg_1);
		fprintf(sim_code_file, "MOV [%d],R%d\n",MEMORY_LOC,reg_1);
		free_reg();
		return 0;
	}
	else if (expressionTree->Node_Type==Node_Type_IF)
	{	
		if (expressionTree->value=='i')
		{
			label_1=get_label();
			label_2=get_label();
			left_value=codegen(expressionTree->ptr1);
			cout<<"value="<<left_value<<endl;
			fprintf(sim_code_file, "LABEL%d:\n",label_1);
			
			right_value=codegen(expressionTree->ptr2);
			fprintf(sim_code_file, "CMP %d,0\n",left_value);
			fprintf(sim_code_file, "JNZ LABEL%d\n",label_1);
		}
		else if (expressionTree->value=='I')
		{
			
		}
		
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