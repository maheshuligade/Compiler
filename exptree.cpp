#include <stdlib.h>
#include <math.h>
#include "exptree.hpp"
#include <string.h>
#include "y.tab.hpp"
#include <stdio.h>
#include <iostream>
int alphabet[200]={0};
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


struct tnode *Make_Node(int type,int Node_Type,int value,char *NAME,struct tnode *ptr1,struct tnode *ptr2,struct tnode *ptr3,struct tnode *Arg_List)
{	
	
	struct tnode *new_node;
	new_node=(struct tnode *)malloc(sizeof(struct tnode));
	new_node->type=type;
	new_node->Node_Type=Node_Type;
	new_node->NAME=(char *)malloc(sizeof(NAME));
	//cout<<"before strcpy\n";
	strcpy(new_node->NAME,NAME);

	//*(new_node->NAME)=NAME;
	//cout<<(new_node->NAME)<<"\n";
	//cout<<"after strcpy\n";
	new_node->value=value;
	new_node->ptr1=ptr1;
	new_node->ptr1=ptr2;
	new_node->ptr1=ptr3;
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


int evaluate(struct tnode* expressionTree)
{	
	
	if (expressionTree->NAME==NULL)
	{	
		//std::cout<<__FILE__<<","<<__LINE__<<"\n";
		cout<<"expressionTree="<<expressionTree->Node_Type<<endl;
		if (expressionTree->Node_Type==ID)
		{
			cout<<"In Node_Type"<<endl;

							for (k = 0; k <=26; k++)
							{
								cout<<alphabet[k];
							}
			cout<<"\n"<<alphabet[expressionTree->value]<<endl;
			return alphabet[expressionTree->value-'a'];
		}
		// else if (expressionTree->Node_Type==ASSIGNMENT)
		// {
		// 	cout<<"In ASSIGNMENT\n";
		// 	cout<<evaluate(expressionTree->value);
		// 	//alphabet[evaluate(expressionTree->ptr1)-'a']=evaluate(expressionTree->ptr2);
		// 	return 1;
		// }
		// else if (expressionTree->Node_Type==WRITE)
		// {
		// 	cout<<"In WRITE\n";
		// 	cout<<(expressionTree->Node_Type);
		// 	//alphabet[evaluate(expressionTree->ptr1)-'a']=evaluate(expressionTree->ptr2);
		// 	// cout<<alphabet[evaluate(expressionTree->ptr1) - 'a']<<endl;
		// 	return alphabet[evaluate(expressionTree->ptr1) - 'a'];
		//}
		// else if (expressionTree->Node_Type==READ)
		// {
		// 	cout<<"In READ\n";
		// 	//cout<<(expressionTree->Node_Type);
		// 	//alphabet[evaluate(expressionTree->ptr1)-'a']=evaluate(expressionTree->ptr2);
		// 	cin>>alphabet[evaluate(expressionTree->ptr1) - 'a'];
		// }
		// else if (expressionTree->Node_Type==IF)
		// {
		// 	// if (evaluate(expressionTree->ptr1))
		// 	// {
		// 	// 	return evaluate(expressionTree->ptr2);
		// 	// }	
		// 	std::cout<<"In if evaluate\n";
		// }
		// else if (expressionTree->Node_Type==ISEQUAL)
		// {	
		// 	//std::cout<<"In ISEQUAL evaluate\n";
		// 	if (evaluate(expressionTree->ptr1)==evaluate(expressionTree->ptr2))
		// 	{
		// 		std::cout<<"EQUAL";
		// 	}
		// }
		// else if (expressionTree->Node_Type==WHILE)
		// {
		// 	cin>>alphabet[evaluate(expressionTree->ptr1)];	
		// }
		else
		{
			//cout<<"Node_Type="<<expressionTree->Node_Type<<endl;
			//cout<<"value="<<expressionTree->value<<endl;
			// cout<<"NAME="<<expressionTree->NAME<<"\n"<<endl;
		
			
			return expressionTree->value;
		}
	}
	else
	{
		cout<<expressionTree->NAME<<endl;
		switch(*(expressionTree->NAME))
		{
			case '+':
				
				cout<<"Addition="<<( (evaluate(expressionTree->ptr1)) + (evaluate(expressionTree->ptr2)))<<endl;
				cout<<"Node_Type"<<expressionTree->ptr1->Node_Type<<endl;
				return (evaluate(expressionTree->ptr1)) + (evaluate(expressionTree->ptr2));
				break;
			case '-':
				if (expressionTree->ptr2==NULL)
				{
					return -expressionTree->ptr2->value;
				}
				return (evaluate(expressionTree->ptr1)) - (evaluate(expressionTree->ptr2));
				break;
			case '/':
				return (evaluate(expressionTree->ptr1)) / (evaluate(expressionTree->ptr2));
				break;
			case '*':
				return (evaluate(expressionTree->ptr1)) * (evaluate(expressionTree->ptr2));
				break;
			case '^':
				return pow(evaluate(expressionTree->ptr1),(evaluate(expressionTree->ptr2)));
				break;
			case '%':
				return (evaluate(expressionTree->ptr1)) % (evaluate(expressionTree->ptr2));
				break;
			case '=':

				alphabet[evaluate(expressionTree->ptr1) - 'a']= evaluate(expressionTree->ptr2);
				//cout<<(expressionTree->value)<<endl;
				//cout<<"alphabet"<<alphabet[evaluate(expressionTree->ptr1) - 'a']<<endl;
				return alphabet[evaluate(expressionTree->ptr1) - 'a'];
				break;
			case 'w':
				//cout<<"In w\n";
				//alphabet[evaluate(expressionTree->ptr1) - 'a']= evaluate(expressionTree->ptr2);
				//	cout<<(expressionTree->value)<<endl;
				cout<<alphabet[evaluate(expressionTree->ptr1)- 'a']<<endl;
				//return evaluate(expressionTree->ptr1);
					
				break;
			case 'r':
				cout<<"In READ"<<endl;
				cout<<expressionTree->value<<endl;
				cin>>alphabet[(expressionTree->value)];
				cout<<alphabet[(expressionTree->value)]<<endl;
				//return 1;
				break;
			default:
					cout<<"No Condition Maching\n";
					return 1;

		}

	}
	
	
}