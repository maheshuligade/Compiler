#include <stdio.h>
#include "exptree.hpp"
int reg=0;
int left_value,right_value;
FILE *sim_code_file;

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
int codegen(struct tnode *expressionTree)
{	

	if (expressionTree==NULL)
	{
		return 0;
	}
	else if (expressionTree->Node_Type==Node_Type_PLUS)
	{
		left_value=codegen(expressionTree->ptr1);
		right_value=codegen(expressionTree->ptr2);

		fprintf(sim_code_file, "ADD R%d,R%d",left_value,right_value);

	}

	return 0;
}