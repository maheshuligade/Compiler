#include <stdlib.h>
#include <math.h>
#include "exptree.hpp"
#include <string.h>
#include "y.tab.hpp"
#include <stdio.h>
#include <iostream>
using namespace std;
int alphabet[200]={0};
struct Gsymbol *Gsymbol_table=NULL;
struct Lsymbol *Lsymbol_table=NULL;
int Memory[1000000];
int Global_Bind_Count=0;
char error_output[200];
int no_of_error=0;
string types_array[5]={"void","boolean","integer"};

int k;

struct tnode* makeLeafNode(int n)
{
	struct tnode* new_leaf_node;
	new_leaf_node=(struct tnode*)malloc(sizeof(struct tnode));
	new_leaf_node->Node_Type=Node_Type_LEAF;
	new_leaf_node->NAME=(char *)malloc(sizeof(char));
	new_leaf_node->NAME=NULL;
	new_leaf_node->value=n;
	new_leaf_node->ptr1=NULL;
	new_leaf_node->ptr2=NULL;
	new_leaf_node->ptr3=NULL;
	return new_leaf_node;
}


struct tnode* Make_Node(int type,int Node_Type,int value,char *NAME,struct tnode* ptr1,struct tnode* ptr2,struct tnode* ptr3,struct tnode* Arg_List)
{	
	
	struct tnode *new_node;
	new_node=(struct tnode* )malloc(sizeof(struct tnode));
	// Problem found
	if (Node_Type==Node_Type_ASSIGNMENT)
	{	

		if (Glookup(NAME)==NULL)
		{	
			//If the varible is not decraired
			yyerror(std::string ("‘") + NAME + "’ was not declared in this scope");
			new_node=NULL;
			no_of_error++;
			//return new_node;
		}
		else if (Glookup(NAME)->size<evaluate(ptr1->ptr2))
		{	
			//If Array is outof bound
			yyerror(std::string ("Array ") + ("‘") + NAME + "’is out of bound.");
			no_of_error++;
		}
		
		else if (Node_Type==Node_Type_ASSIGNMENT && ptr2->type==TYPE_BOOLEAN)
		{	
			
			//cout<<"type="<<ptr2->type<<endl;
			if (value!=FALSE || value!=TRUE)
			{
				yyerror("boolean Type can be TRUE or FALSE");
			}
		}
		
	}
	// else if (Node_Type==Node_Type_IF && ptr1->type!=TYPE_BOOLEAN)
	// {		
	// 		if (ptr1->Node_Type==Node_Type_ARRAY && Glookup(NAME)->TYPE!=TYPE_BOOLEAN)
	// 		{
	// 			yyerror("if  requires boolean type condition.");

	// 		}
	// 		cout<<ptr1->type<<endl;
			
	// 		// cout<<Glookup(NAME)->TYPE<<endl;
	// 		yyerror("if statement requires boolean type condition.");
	// 		no_of_error++;
	// }
	// else if (Node_Type==Node_Type_WHILE	&& ptr1->type!=TYPE_BOOLEAN)
	// {
	// 		yyerror("while loop requires boolean type condition.");
	// 		no_of_error++;
	// }
	else if ((Node_Type==Node_Type_LT ||Node_Type==Node_Type_LE || Node_Type==Node_Type_GT||Node_Type==Node_Type_GE)&&  ptr1->type!=ptr2->type)
	{		//cout<<"ptr1="<<ptr1->type<<"ptr2="<<ptr2->type<<endl;
			//cout<<evaluate(ptr1)<<endl;
			yyerror("compairing different types.");
			no_of_error++;
	}
	else if ((Node_Type==Node_Type_EQ ||Node_Type==Node_Type_NE)&&  ptr1->type!=ptr2->type)
	{		//cout<<"ptr1="<<ptr1->type<<"ptr2="<<ptr2->type<<endl;
			//cout<<evaluate(ptr1)<<endl;
			yyerror("compairing different types.");
			no_of_error++;
	}
	else if (Node_Type==Node_Type_PLUS	&& ptr1->type!=ptr2->type)
	{		
			cout<<ptr1->type<<endl;
			yyerror("can't add "+ types_array[ptr1->type-21] + " to " + types_array[ptr2->type]);
			no_of_error++;
	}
	


	new_node->type=type;
	new_node->Node_Type=Node_Type;
	new_node->NAME=(char *)malloc(20*sizeof(char));
	if(NAME!=NULL)
	{
		
		strcpy(new_node->NAME,NAME);
	}
	else
	{
		new_node->NAME=NULL;
	}
	new_node->value=value;
	new_node->ptr1=ptr1;
	new_node->ptr2=ptr2;
	new_node->ptr3=ptr3;
	
	return new_node;

}


struct tnode* makeOperatorNode(char op,struct tnode* left,struct tnode* right)
{
	struct tnode* new_operator_node;
	new_operator_node=(struct tnode*)malloc(sizeof(struct tnode));
	new_operator_node->NAME=(char *)malloc(sizeof(char));
	*(new_operator_node->NAME)=op;
	new_operator_node->ptr1=left;
	new_operator_node->ptr2=right;
	return new_operator_node;
}
struct tnode* makeStatementNode(char c,int Node_Type, int value,struct tnode* ptr1,struct tnode* ptr2,struct tnode *ptr3)
{
	struct tnode* new_statement_node;
	new_statement_node=(struct tnode*)malloc(sizeof(struct tnode));
	new_statement_node->NAME=(char *)malloc(sizeof(char));
	new_statement_node->value=value;
	new_statement_node->Node_Type=Node_Type;
	*(new_statement_node->NAME)=c;
	new_statement_node->ptr1=ptr1;
	new_statement_node->ptr2=ptr2;
	new_statement_node->ptr3=ptr3;
	return new_statement_node;
}


struct Gsymbol *Glookup(char *NAME)
{
	
	struct Gsymbol *temp=(struct Gsymbol *)malloc(sizeof(struct Gsymbol));
	temp=Gsymbol_table;

	while(temp!=NULL)
	{


		if (strcmp(temp->NAME,NAME)==0)
		{
		 	return temp;
		 }
		temp=temp->Next;
	}

	return temp;
}

void Ginstall(char * NAME,int TYPE,int size,struct Arg_List *Arg_List)
{	

	if (Glookup(NAME)==NULL)
	{
		struct Gsymbol *new_node=(struct Gsymbol *)malloc(sizeof(struct Gsymbol));
		new_node->NAME=(char *)malloc(20*sizeof(char));
		strcpy(new_node->NAME,NAME);
		new_node->TYPE=TYPE;
		new_node->size=size;
		new_node->Binding=Global_Bind_Count;
		new_node->Next=Gsymbol_table;
		Gsymbol_table=new_node;
		Global_Bind_Count+=size;
	}
	else
	{
		yyerror("redeclaration of ‘" + types_array[TYPE - 21] +" "+NAME+"’");
	}
	
}

struct Lsymbol *Llookup(char *NAME)
{

	/*struct Lsymbol *temp=(struct Lsymbol *)malloc(sizeof(struct Lsymbol));
	temp=Lsymbol_table;
	while(temp!=NULL)
	{
		if (strcpy(temp->NAME,NAME)==0)
		{
			return temp;
		}
		temp=temp->Next;
	}*/
	return NULL;
}

void Linstall(char * NAME,int TYPE)
{
	/*struct Lsymbol *new_node=(struct Lsymbol *)malloc(sizeof(struct Lsymbol));
	struct Lsymbol *temp=(struct Lsymbol *)malloc(sizeof(struct Lsymbol));
	temp=Lsymbol_table;
	while(temp!=NULL)
	{
	 
		temp=temp->Next;
	}*/

}



int evaluate(struct tnode* expressionTree)
{	
	
	if (expressionTree!=NULL)
	{
		// cout<<"Node_Type="<<expressionTree->Node_Type<<endl;
	}
	if (expressionTree==NULL)
	{
		
		return 0;
	}
	
	
	else if (expressionTree->Node_Type==ID)
	{
		if (expressionTree->ptr1!=NULL)
		{
					//cout<<"Node_Type_ARRAY="<<expressionTree->ptr1->Node_Type<<endl;
		
		}
		// if (expressionTree->ptr1->Node_Type==Node_Type_ARRAY)
		// {
	
		// 	return Memory[Glookup(expressionTree->NAME)->Binding + evaluate(expressionTree->ptr1->ptr2)];
		// }
		// else
		{
			return Memory[Glookup(expressionTree->NAME)->Binding];
		}	
	}
	else if (expressionTree->Node_Type==Node_Type_LEAF)
	{
		return expressionTree->value;
	}
	else if (expressionTree->Node_Type==Node_Type_PLUS)
	{	
		
		return (evaluate(expressionTree->ptr1)+evaluate(expressionTree->ptr2));	
	}
	else if (expressionTree->Node_Type==Node_Type_MINUS)
	{
		
		return (evaluate(expressionTree->ptr1)-evaluate(expressionTree->ptr2));	
	}
	else if (expressionTree->Node_Type==Node_Type_DIV)
	{
		
		return (evaluate(expressionTree->ptr1)/evaluate(expressionTree->ptr2));	
	}
	else if (expressionTree->Node_Type==Node_Type_MUL)
	{
		return (evaluate(expressionTree->ptr1)*evaluate(expressionTree->ptr2));	
	}
	else if (expressionTree->Node_Type==Node_Type_MODULUS)
	{
		return (evaluate(expressionTree->ptr1)%evaluate(expressionTree->ptr2));	
	}
	else if (expressionTree->Node_Type==Node_Type_POWER)
	{
		return (pow(evaluate(expressionTree->ptr1),evaluate(expressionTree->ptr2)));	
	}
	else if (expressionTree->Node_Type==Node_Type_LT)
	{
		if (evaluate(expressionTree->ptr1)<evaluate(expressionTree->ptr2))
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
		if (evaluate(expressionTree->ptr1)<=evaluate(expressionTree->ptr2))
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
		if (evaluate(expressionTree->ptr1)>evaluate(expressionTree->ptr2))
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
		if (evaluate(expressionTree->ptr1)>=evaluate(expressionTree->ptr2))
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
		if (evaluate(expressionTree->ptr1)==evaluate(expressionTree->ptr2))
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
		if (evaluate(expressionTree->ptr1)!=evaluate(expressionTree->ptr2))
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
		if (!evaluate(expressionTree->ptr1))
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
		if (evaluate(expressionTree->ptr1) || evaluate(expressionTree->ptr2))
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
		if (evaluate(expressionTree->ptr1)&&evaluate(expressionTree->ptr2))
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
		/*if (expressionTree->ptr1==NULL)
		{
			cout<<"expressionTree="<<expressionTree->value<<endl;
			return expressionTree->value;
		}*/
		//alphabet[atoi(expressionTree->NAME)]=evaluate(expressionTree->ptr2);
		//cout<<"NAME="<<atoi(expressionTree->NAME)<<endl;
		//cout<<"value"<<((expressionTree->value))<<endl;

		if (expressionTree->ptr1->Node_Type==Node_Type_ARRAY)
		{
			//cout<<"value"<<(evaluate(expressionTree->ptr2))<<endl;

			if (Glookup(expressionTree->NAME)==NULL)
			{
				//cout<<"value"<<(evaluate(expressionTree->ptr2))<<endl;
				//cout<<"Variable="<<(expressionTree->NAME)<<endl;
				// cout<<"index="<<evaluate(expressionTree->ptr1->ptr2)<<endl;
				// Ginstall(expressionTree->NAME,expressionTree->type,evaluate(expressionTree->ptr1->ptr2),NULL);
				// cout<<"Binding="<<expressionTree->NAME<<" "<<Glookup(expressionTree->NAME)->Binding<<endl;
				// Memory[Global_Bind_Count + Glookup(expressionTree->NAME)->Binding+evaluate(expressionTree->ptr1->ptr2)]=(evaluate(expressionTree->ptr2));
				//cout<<"error: ‘"<<expressionTree->NAME<<"’ "<<"was not declared in this scope"<<endl;
				cout<<input_file_name<<":"<<yylineno<<":"<<column_no<<":"<<expressionTree->NAME<<" was not declared in this scope"<<endl;
				exit(0);
				return -1;
			}
			else
			{	
				cout<<"ptr1"<<endl;
				//cout<<"Binding="<<Glookup(expressionTree->NAME)->Binding<<endl;
				Memory[Glookup(expressionTree->NAME)->Binding + evaluate(expressionTree->ptr1->ptr2)]=evaluate(expressionTree->ptr2);
			}

			//cout<<"Memory="<<Memory[Glookup(expressionTree->NAME)->Binding + evaluate(expressionTree->ptr1->ptr2)]<<endl;
			return Memory[Glookup(expressionTree->NAME)->Binding + evaluate(expressionTree->ptr1->ptr2)];
		}
		// if (Glookup(expressionTree->NAME)==NULL)
		// {
		// 	//cout<<"value"<<(evaluate(expressionTree->ptr2))<<endl;
		// 	//cout<<"Variable="<<(expressionTree->NAME)<<endl;
		// 	Memory[Global_Bind_Count]=(evaluate(expressionTree->ptr2));
		// 	Ginstall(expressionTree->NAME,expreZssionTree->type,1,NULL);
		// }
		// else
		// {	
		// 	//cout<<"Binding="<<Glookup(expressionTree->NAME)->Binding<<endl;
		// 	Memory[Glookup(expressionTree->NAME)->Binding]=evaluate(expressionTree->ptr2);
		// }
		// return Memory[Glookup(expressionTree->NAME)->Binding];

		//return 0;
	}
	else if (expressionTree->Node_Type==Node_Type_ARRAY)
	{
		if (expressionTree->value=='A')
		{
			//return evaluate(expressionTree->ptr2);
			return Memory[Glookup(expressionTree->NAME)->Binding + evaluate(expressionTree->ptr2)];
		}
		else
		{
			return expressionTree->value;
		}
	}
	else if (expressionTree->Node_Type==Node_Type_READ)
	{
		int input=0;
		cin>>input;
		//cout<<"IN read"<<endl;
		if (Glookup(expressionTree->ptr1->NAME)==NULL)
		{
			//Memory[Global_Bind_Count]=input;
			//Ginstall(expressionTree->ptr1->NAME,expressionTree->ptr1->type,1,NULL);
			cout<<"error: ‘"<<expressionTree->NAME<<"’ "<<"was not declared in this scope"<<endl;
			return -1;
		}
		else
		{

			Memory[Glookup(expressionTree->ptr1->NAME)->Binding + evaluate(expressionTree->ptr2) +1]=input;
		}
		//cout<<"READ="<<Memory[Glookup(expressionTree->ptr1->NAME)->Binding + evaluate(expressionTree->ptr2)+1]<<endl;

		
		
	}else if (expressionTree->Node_Type==Node_Type_WRITE)
	{
		// if (expressionTree->ptr1->Node_Type==Node_Type_ARRAY)
		// {
			//cout<<"value"<<(evaluate(expressionTree->ptr2))<<endl;

			

			//cout<<"Memory="<<Memory[Glookup(expressionTree->NAME)->Binding + evaluate(expressionTree->ptr1->ptr2)]<<endl;
			// cout<<Memory[Glookup(expressionTree->ptr1->NAME)->Binding + evaluate(expressionTree->ptr1->ptr2)]<<endl;
		// }
		// else
		// {
			// Memory[1]=24;
			cout<<evaluate(expressionTree->ptr1)<<endl;


		// }
		//cout<<(expressionTree->ptr1->value);
		//cout<<"expressionTree NAME="<<expressionTree->ptr1->NAME<<endl;
		//struct Gsymbol *new_node=(struct Gsymbol *)malloc(sizeof(struct Gsymbol));
		//new_node=Glookup(expressionTree->ptr1->NAME);
		//if (Glookup(expressionTree->ptr1->NAME)!=NULL)
		//{
			
			//cout<<"Not NULL"<<endl;
			//cout<<"Binding="<<new_node->Binding<<endl;
			//cout<<Memory[Glookup(expressionTree->ptr1->NAME)->Binding]<<endl;
			//cout<<"Node_Type_WRITE="<<Memory[Glookup(expressionTree->ptr1->NAME)->Binding]<<" "<<expressionTree->ptr1->Node_Type<<endl;
		//	cout<<evaluate(expressionTree->ptr1)<<endl;
			//return evaluate(expressionTree->ptr1);
			//free(new_node);
			//Ginstall(expressionTree->NAME,expressionTree->type,1,NULL);
	//	}
		//cout<<alphabet[evaluate(expressionTree->ptr1)]<<endl;
		//free(new_node);
			return 0;
		
	}
	else if (expressionTree->Node_Type==Node_Type_IF)
	{	
		
		if (expressionTree->value=='i')
		{
			if (evaluate(expressionTree->ptr1))
			{
				return evaluate(expressionTree->ptr2);
			}
		}
		else if (expressionTree->value=='I')
		{
			 if (evaluate(expressionTree->ptr1))
			{
				return evaluate(expressionTree->ptr2);
				
			}
			else
			{
				return evaluate
				(expressionTree->ptr3);
			}
		}
	}
	else if (expressionTree->Node_Type==Node_Type_WHILE)
	{	
	
		
		while(evaluate(expressionTree->ptr1))
		{

		 	evaluate(expressionTree->ptr2);		
		}
	}
	else if (expressionTree->Node_Type==Node_Type_DUMMY)
	{
 
		evaluate(expressionTree->ptr1);
		evaluate(expressionTree->ptr2);
		return 0;
	}
	return -1;	
	
}






int type_check(struct tnode* expressionTree)
{	
	
	if (expressionTree!=NULL)
	{
		// cout<<"Node_Type="<<expressionTree->Node_Type<<endl;
	}
	if (expressionTree==NULL)
	{
		
		return 0;
	}
	
	
	else if (expressionTree->Node_Type==ID)
	{
		if (expressionTree->ptr1!=NULL)
		{
					//cout<<"Node_Type_ARRAY="<<expressionTree->ptr1->Node_Type<<endl;
		
		}
		// if (expressionTree->ptr1->Node_Type==Node_Type_ARRAY)
		// {
	
		// 	return Memory[Glookup(expressionTree->NAME)->Binding + evaluate(expressionTree->ptr1->ptr2)];
		// }
		// else
		{
			return Memory[Glookup(expressionTree->NAME)->Binding];
		}	
	}
	else if (expressionTree->Node_Type==Node_Type_LEAF)
	{
		return expressionTree->value;
	}
	else if (expressionTree->Node_Type==Node_Type_PLUS)
	{
		
		return (type_check(expressionTree->ptr1)+type_check(expressionTree->ptr2));	
	}
	else if (expressionTree->Node_Type==Node_Type_MINUS)
	{
		
		return (type_check(expressionTree->ptr1)-type_check(expressionTree->ptr2));	
	}
	else if (expressionTree->Node_Type==Node_Type_DIV)
	{
		
		return (type_check(expressionTree->ptr1)/type_check(expressionTree->ptr2));	
	}
	else if (expressionTree->Node_Type==Node_Type_MUL)
	{
		return (type_check(expressionTree->ptr1)*type_check(expressionTree->ptr2));	
	}
	else if (expressionTree->Node_Type==Node_Type_MODULUS)
	{
		return (type_check(expressionTree->ptr1)%type_check(expressionTree->ptr2));	
	}
	else if (expressionTree->Node_Type==Node_Type_POWER)
	{
		return (pow(type_check(expressionTree->ptr1),type_check(expressionTree->ptr2)));	
	}
	else if (expressionTree->Node_Type==Node_Type_LT)
	{
		if (type_check(expressionTree->ptr1)<type_check(expressionTree->ptr2))
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
		if (type_check(expressionTree->ptr1)<=type_check(expressionTree->ptr2))
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
		if (type_check(expressionTree->ptr1)>type_check(expressionTree->ptr2))
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
		if (type_check(expressionTree->ptr1)>=type_check(expressionTree->ptr2))
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
		if (type_check(expressionTree->ptr1)==type_check(expressionTree->ptr2))
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
		if (type_check(expressionTree->ptr1)!=type_check(expressionTree->ptr2))
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
		if (!type_check(expressionTree->ptr1))
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
		if (type_check(expressionTree->ptr1) || type_check(expressionTree->ptr2))
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
		if (type_check(expressionTree->ptr1)&&type_check(expressionTree->ptr2))
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
			if (Glookup(expressionTree->NAME)==NULL)
			{

				yyerror(std::string ("‘") + expressionTree->NAME + "’ was not declared in this scope");
				return -1;
			}
			Memory[Glookup(expressionTree->NAME)->Binding + evaluate(expressionTree->ptr1->ptr2)]=evaluate(expressionTree->ptr2);
			
		}
		
	}
	else if (expressionTree->Node_Type==Node_Type_ARRAY)
	{
		if (expressionTree->value=='A')
		{
			//return type_check(expressionTree->ptr2);
			return Memory[Glookup(expressionTree->NAME)->Binding + type_check(expressionTree->ptr2)];
		}
		else
		{
			return expressionTree->value;
		}
	}
	else if (expressionTree->Node_Type==Node_Type_READ)
	{
		int input=0;
		cin>>input;
		//cout<<"IN read"<<endl;
		if (Glookup(expressionTree->ptr1->NAME)==NULL)
		{
			//Memory[Global_Bind_Count]=input;
			//Ginstall(expressionTree->ptr1->NAME,expressionTree->ptr1->type,1,NULL);
			cout<<"error: ‘"<<expressionTree->NAME<<"’ "<<"was not declared in this scope"<<endl;
			return -1;
		}
		else
		{

			Memory[Glookup(expressionTree->ptr1->NAME)->Binding + type_check(expressionTree->ptr2) +1]=input;
		}
		//cout<<"READ="<<Memory[Glookup(expressionTree->ptr1->NAME)->Binding + type_check(expressionTree->ptr2)+1]<<endl;

		
		
	}else if (expressionTree->Node_Type==Node_Type_WRITE)
	{
		
			if (no_of_error==0)
			{
			
				cout<<type_check(expressionTree->ptr1)<<endl;


			}
			return 0;
		
	}
	else if (expressionTree->Node_Type==Node_Type_IF)
	{	
		
		
		if (expressionTree->value=='i')
		{
			if (type_check(expressionTree->ptr1))
			{
				return type_check(expressionTree->ptr2);
			}
		}
		else if (expressionTree->value=='I')
		{
			 if (type_check(expressionTree->ptr1))
			{
				return type_check(expressionTree->ptr2);
				
			}
			else
			{
				return type_check(expressionTree->ptr3);
			}
		}
	}
	else if (expressionTree->Node_Type==Node_Type_WHILE)
	{	
		
		if (expressionTree->ptr1->type!=TYPE_BOOLEAN)
		{
			yyerror("while loop requires boolean type condition.");
			no_of_error++;
			//exit(-2);
		}
		while(type_check(expressionTree->ptr1))
		{

		 	type_check(expressionTree->ptr2);	
		}
	}
	else if (expressionTree->Node_Type==Node_Type_DUMMY)
	{
 
		type_check(expressionTree->ptr1);
		type_check(expressionTree->ptr2);
		return 0;
	}
	return -1;	
	}