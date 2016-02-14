#include <stdlib.h>
#include <math.h>
#include "exptree.hpp"
#include <string.h>
#include "y.tab.hpp"
#include <stdio.h>
#include <iostream>
int alphabet[200]={0};
struct Gsymbol *Gsymbol_table=NULL;
struct Lsymbol *Lsymbol_table=NULL;
int Memory[1000000];
int Global_Bind_Count=0;
using namespace std;
int k;

struct tnode* makeLeafNode(int n)
{
	struct tnode* new_leaf_node;
	new_leaf_node=(struct tnode*)malloc(sizeof(struct tnode));
	//new_leaf_node->type=;
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
	new_node->type=type;
	new_node->Node_Type=Node_Type;
	new_node->NAME=(char *)malloc(20*sizeof(char));
	if(NAME!=NULL)
	{
		
	//		cout<<"before strcpy\n";
		strcpy(new_node->NAME,NAME);
	}
	else
	{
		new_node->NAME=NULL;
	}

	//*(new_node->NAME)=NAME;
	// cout<<(new_node->NAME)<<"\n";
	//cout<<"after strcpy\n";
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
	// new_operator_node->value=ASSIGNMENT;
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
		//cout<<NAME<<"In Glookup Name="<<temp->NAME<<endl;

		if (strcmp(temp->NAME,NAME)==0)
		{
		// 	cout<<"In Glookup"<<endl;
		 	return temp;
		// 	cout<<"temp NAME="<<temp->NAME<<endl;
		// 	break;
		 }
		temp=temp->Next;
	}

	return temp;
}

void Ginstall(char * NAME,int TYPE,int size,struct Arg_List *Arg_List)
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
	// struct Gsymbol *temp=(struct Gsymbol *)malloc(sizeof(struct Gsymbol));
	// temp=Gsymbol_table;
	// while(temp!=NULL)
	// {
	 
	// 	temp=temp->Next;
	// }
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
	//cout<<"expressionTree->Node_Type="<<expressionTree->Node_Type<<endl;
	//cout<<"expressionTree->value="<<expressionTree->value<<endl;
	if (expressionTree==NULL)
	{
		//cout<<"NULL Node"<<endl;
		return 0;
	}
	//cout<<"expressionTree->Node_Type="<<expressionTree->Node_Type<<endl;
	//cout<<"expressionTree->value="<<expressionTree->value<<endl;
	else if (expressionTree->Node_Type==ID)
	{
		return expressionTree->value;
	}
	else if (expressionTree->Node_Type==Node_Type_LEAF)
	{
		return expressionTree->value;
	}
	else if (expressionTree->Node_Type==Node_Type_PLUS)
	{
		cout<<(evaluate(expressionTree->ptr1)+evaluate(expressionTree->ptr2))<<endl;	
		return (evaluate(expressionTree->ptr1)+evaluate(expressionTree->ptr2));	
	}
	else if (expressionTree->Node_Type==Node_Type_MINUS)
	{
		cout<<(evaluate(expressionTree->ptr1)-evaluate(expressionTree->ptr2))<<endl;	
		return (evaluate(expressionTree->ptr1)-evaluate(expressionTree->ptr2));	
	}
	else if (expressionTree->Node_Type==Node_Type_DIV)
	{
		cout<<(evaluate(expressionTree->ptr1)/evaluate(expressionTree->ptr2))<<endl;	
		return (evaluate(expressionTree->ptr1)/evaluate(expressionTree->ptr2));	
	}
	else if (expressionTree->Node_Type==Node_Type_MUL)
	{
		cout<<(evaluate(expressionTree->ptr1)*evaluate(expressionTree->ptr2))<<endl;	
		return (evaluate(expressionTree->ptr1)*evaluate(expressionTree->ptr2));	
	}
	else if (expressionTree->Node_Type==Node_Type_MODULUS)
	{
		cout<<(evaluate(expressionTree->ptr1)%evaluate(expressionTree->ptr2))<<endl;	
		return (evaluate(expressionTree->ptr1)%evaluate(expressionTree->ptr2));	
	}
	else if (expressionTree->Node_Type==Node_Type_POWER)
	{
		cout<<(pow(evaluate(expressionTree->ptr1),evaluate(expressionTree->ptr2)))<<endl;	
		return (pow(evaluate(expressionTree->ptr1),evaluate(expressionTree->ptr2)));	
	}
	else if (expressionTree->Node_Type==Node_Type_LT)
	{
		if (evaluate(expressionTree->ptr1)<evaluate(expressionTree->ptr2))
		{
			cout<<"TRUE"<<endl;
			return TRUE;
		}
		else
		{
			cout<<"FALSE"<<endl;
			return FALSE;
		}
		//return (pow(evaluate(expressionTree->ptr1),evaluate(expressionTree->ptr2)));	
	}
	else if (expressionTree->Node_Type==Node_Type_LE)
	{
		if (evaluate(expressionTree->ptr1)<=evaluate(expressionTree->ptr2))
		{
			cout<<"TRUE"<<endl;
			return TRUE;
		}
		else
		{
			cout<<"FALSE"<<endl;
			return FALSE;
		}
		//return (pow(evaluate(expressionTree->ptr1),evaluate(expressionTree->ptr2)));	
	}
	else if (expressionTree->Node_Type==Node_Type_GT)
	{
		if (evaluate(expressionTree->ptr1)>evaluate(expressionTree->ptr2))
		{
			cout<<"TRUE"<<endl;
			return TRUE;
		}
		else
		{
			cout<<"FALSE"<<endl;
			return FALSE;
		}
		//return (pow(evaluate(expressionTree->ptr1),evaluate(expressionTree->ptr2)));	
	}
	else if (expressionTree->Node_Type==Node_Type_GE)
	{
		if (evaluate(expressionTree->ptr1)>=evaluate(expressionTree->ptr2))
		{
			cout<<"TRUE"<<endl;
			return TRUE;
		}
		else
		{
			cout<<"FALSE"<<endl;
			return FALSE;
		}
		//return (pow(evaluate(expressionTree->ptr1),evaluate(expressionTree->ptr2)));	
	}
	else if (expressionTree->Node_Type==Node_Type_EQ)
	{
		if (evaluate(expressionTree->ptr1)==evaluate(expressionTree->ptr2))
		{
			cout<<"TRUE"<<endl;
			return TRUE;
		}
		else
		{
			cout<<"FALSE"<<endl;
			return FALSE;
		}
		//return (pow(evaluate(expressionTree->ptr1),evaluate(expressionTree->ptr2)));	
	}
	else if (expressionTree->Node_Type==Node_Type_NE)
	{
		if (evaluate(expressionTree->ptr1)!=evaluate(expressionTree->ptr2))
		{
			cout<<"TRUE"<<endl;
			return TRUE;
		}
		else
		{
			cout<<"FALSE"<<endl;
			return FALSE;
		}
		//return (pow(evaluate(expressionTree->ptr1),evaluate(expressionTree->ptr2)));	
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
		if (Glookup(expressionTree->NAME)==NULL)
		{
			//cout<<"value"<<(evaluate(expressionTree->ptr2))<<endl;
			cout<<"Variable="<<(expressionTree->NAME)<<endl;
			Memory[Global_Bind_Count]=(evaluate(expressionTree->ptr2));
			Ginstall(expressionTree->NAME,expressionTree->type,1,NULL);
		}
		else
		{	
			Memory[Glookup(expressionTree->NAME)->Binding]=evaluate(expressionTree->ptr2);
		}
		//return 0;
	}
	else if (expressionTree->Node_Type==Node_Type_READ)
	{
		//cout<<(expressionTree->ptr1->NAME)<<endl;
		//cout<<(expressionTree->ptr1->value);
		//cin>>alphabet[evaluate(expressionTree->ptr1)];
		// struct Gsymbol *new_node=(struct Gsymbol *)malloc(sizeof(struct Gsymbol));
		// new_node=Glookup(expressionTree->ptr1->NAME);
		int input=0;
		cin>>input;
		if (Glookup(expressionTree->ptr1->NAME)==NULL)
		{
			Memory[Global_Bind_Count]=input;
			Ginstall(expressionTree->ptr1->NAME,expressionTree->ptr1->type,1,NULL);
		}
		else
		{
			Memory[Glookup(expressionTree->ptr1->NAME)->Binding]=input;
		}
		//free(new_node);
		
	}else if (expressionTree->Node_Type==Node_Type_WRITE)
	{
		//cout<<(expressionTree->ptr1->value);
		//cout<<"expressionTree NAME="<<expressionTree->ptr1->NAME<<endl;
		//struct Gsymbol *new_node=(struct Gsymbol *)malloc(sizeof(struct Gsymbol));
		//new_node=Glookup(expressionTree->ptr1->NAME);
		if (Glookup(expressionTree->ptr1->NAME)!=NULL)
		{
			
			//cout<<"Not NULL"<<endl;
			//cout<<"Binding="<<new_node->Binding<<endl;
			cout<<Memory[Glookup(expressionTree->ptr1->NAME)->Binding]<<endl;
			//free(new_node);
			//Ginstall(expressionTree->NAME,expressionTree->type,1,NULL);
		}
		//cout<<alphabet[evaluate(expressionTree->ptr1)]<<endl;
		//free(new_node);
		
	}
	else if (expressionTree->Node_Type==Node_Type_IF)
	{	
		cout<<"IN if"<<endl;
		cout<<"Node_Type="<<(expressionTree->ptr2)->ptr1->Node_Type<<endl;
		if (evaluate(expressionTree->ptr1))
		{
			evaluate(expressionTree->ptr2);
			cout<<"After evaluate"<<endl;
			/*cout<<"value"<<(evaluate(expressionTree->ptr2->ptr2-))<<endl;
			cout<<"Variable="<<(expressionTree->ptr2->ptr1->NAME)<<endl;*/
		}
	}else if (expressionTree->Node_Type==Node_Type_WHILE)
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
	}
	
}