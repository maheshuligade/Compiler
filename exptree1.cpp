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
int Global_Bind_Count = 257;
char error_output[200];
int no_of_error=0;
int ptr1_type,ptr2_type;
string types_array[5]={"void","boolean","integer"};
extern FILE *sim_code_file;
int k;
int col,line;

struct tnode* makeLeafNode(int n)
{
	struct tnode* new_leaf_node;
	new_leaf_node=(struct tnode*)malloc(sizeof(struct tnode));
	new_leaf_node->Node_Type=Node_Type_LEAF;
	new_leaf_node->NAME=(char *)malloc(sizeof(char));
	new_leaf_node->NAME=NULL;
	new_leaf_node->type=TYPE_INT;
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
	
	if (Node_Type==Node_Type_ASSIGNMENT)
	{	
		// if (Glookup($1->NAME)->size <= evaluate($3))
		// {
		// 	cout<<"Array     "<<endl;
		// }
		//cout<<"NAME="<<NAME<<" size="<<Glookup(NAME)->size<<" Index="<<evaluate(ptr1->ptr2)<<endl;
		if (Glookup(NAME)==NULL)
		{	
			//If the varible is not decraired
			if(Llookup(NAME)==NULL)
			{
				yyerror(std::string ("‘") + NAME + "’ was not declared in this scope");
				//new_node=NULL;
			}
			
		}
		else if ((Glookup(NAME)->size<evaluate(ptr1->ptr2))&&(Glookup(NAME)->value=='A'))
		{	
			//If Array is outof bound
			
			yyerror(std::string ("Array ") + ("‘") + NAME + "’ is out of bound.");
		}
		else if (Glookup(NAME)->TYPE==TYPE_BOOLEAN && ptr2->value!=0 && ptr2->value!=1)
		{
				yyerror("boolean Type can be TRUE or FALSE");
		}
	
		
	 }
	else if (Node_Type==Node_Type_IF)
	{		

			if ((!is_boolean(ptr1)))
			{
				yyerror("if statement requires boolean type condition.");
			}
			else if (ptr1->type==TYPE_VOID)
			{
				if (Glookup(ptr1->NAME)->TYPE!=TYPE_BOOLEAN)
				{
					yyerror("if statement requires boolean type condition.");
				}
			}
			
	}	
	else if (Node_Type==Node_Type_WHILE)
	{		

			if (!is_boolean(ptr1))
			{
				yyerror("while loop requires boolean type condition.");
			}
			else if (ptr1->type==TYPE_VOID)
			{
				if (Glookup(ptr1->NAME)->TYPE!=TYPE_BOOLEAN)
				{
					yyerror("while loop requires boolean type condition.");
				}
			}
			
	}	
	else if ((Node_Type==Node_Type_LT ||Node_Type==Node_Type_LE || Node_Type==Node_Type_GT||Node_Type==Node_Type_GE)&&  ptr1->type!=ptr2->type)
	{		
			if (ptr1->Node_Type==Node_Type_ARRAY)
			{	
				
				if (Llookup(ptr1->NAME)!=NULL)
				{
					ptr1_type=Llookup(ptr1->NAME)->TYPE;
				}
				else if(Glookup(ptr1->NAME)!=NULL)
				{
					ptr1_type=Glookup(ptr1->NAME)->TYPE;
				}
			}
			else
			{
				ptr1_type=ptr1->type;
			}

			if (ptr2->Node_Type==Node_Type_ARRAY)
			{
				
				if (Llookup(ptr2->NAME)!=NULL)
				{
					ptr2_type=Llookup(ptr2->NAME)->TYPE;
				}
				else if(Glookup(ptr2->NAME)!=NULL)
				{
					ptr2_type=Glookup(ptr2->NAME)->TYPE;
				}
			}
			else
			{
				ptr2_type=ptr2->type;
			}

			if (ptr1_type!=ptr2_type && (ptr1_type!=Node_Type_LEAF || ptr2_type!=Node_Type_LEAF))
			{	
				//cout<<"ptr1="<<ptr1_type<<"ptr2="<<ptr2_type<<endl;
				yyerror("compairing different types.");
			}
	}
	else if ((Node_Type==Node_Type_EQ ||Node_Type==Node_Type_NE)&&  ptr1->type!=ptr2->type)
	{	
			if (ptr1->Node_Type==Node_Type_ARRAY)
			{
				if (Llookup(ptr1->NAME)!=NULL)
				{
					ptr1_type=Llookup(ptr1->NAME)->TYPE;
				}
				else if(Glookup(ptr1->NAME)!=NULL)
				{
					ptr1_type=Glookup(ptr1->NAME)->TYPE;
				}
			}
			else
			{
				ptr1_type=ptr1->type;
			}


			if (ptr2->Node_Type==Node_Type_ARRAY)
			{
				
				if (Llookup(ptr2->NAME)!=NULL)
				{
					ptr2_type=Llookup(ptr2->NAME)->TYPE;
				}
				else if(Glookup(ptr2->NAME)!=NULL)
				{
					ptr2_type=Glookup(ptr2->NAME)->TYPE;
				}
			}
			else
			{
				ptr2_type=ptr2->type;
			}

		
			if (ptr1_type!=ptr2_type && (ptr1_type!=Node_Type_LEAF || ptr2_type!=Node_Type_LEAF))
			{	
				//cout<<"ptr1="<<ptr1_type<<"ptr2="<<ptr2_type<<endl;
				yyerror("compairing different types.");
			}
	}
	else if ((Node_Type==Node_Type_PLUS)||(Node_Type==Node_Type_MINUS)||(Node_Type==Node_Type_DIV)||(Node_Type==Node_Type_MUL)||(Node_Type==Node_Type_MODULUS)||(Node_Type==Node_Type_POWER))
	{		

			if (ptr1->Node_Type==Node_Type_ARRAY)
			{
				if (Llookup(ptr1->NAME)!=NULL)
				{
					ptr1_type=Llookup(ptr1->NAME)->TYPE;
				}
				else if(Glookup(ptr1->NAME)!=NULL)
				{
					ptr1_type=Glookup(ptr1->NAME)->TYPE;
				}
			}
			else
			{
				ptr1_type=ptr1->type;
			}


			if (ptr2->Node_Type==Node_Type_ARRAY)
			{
				
				if (Llookup(ptr2->NAME)!=NULL)
				{
					ptr2_type=Llookup(ptr2->NAME)->TYPE;
				}
				else if(Glookup(ptr2->NAME)!=NULL)
				{
					ptr2_type=Glookup(ptr2->NAME)->TYPE;
				}
			}
			else
			{
				ptr2_type=ptr2->type;
			}

			
			if (ptr1_type!=ptr2_type && (ptr1_type!=Node_Type_LEAF || ptr2_type!=Node_Type_LEAF))
			{	
				//cout<<"ptr1="<<ptr1_type<<"ptr2="<<ptr2_type<<endl;
				yyerror("Arithmetic Operations of  different types.");
			}
	}
	else if (Node_Type==Node_Type_FUNCTION_DEF)
	{
		if (ptr1->ptr2!=NULL)
		{	
			if(type!=ptr1->ptr2->type)
			{
				col=ptr1->ptr2->col_no;
				line=ptr1->ptr2->line_no;
				cout<<input_file_name<<":"<<line<<":"<<col<<":"<<"error:"<<"return type mismatched."<<endl;
				no_of_error++;
			}
		}
		if (Glookup(NAME)==NULL)
		{	
				// Ginstall(NAME,ptr1->type,1,'f',NULL);

			yyerror(std::string ("Function named ‘") + NAME + "’ is  not declared in this scope.");
		}
		else
		{
			struct Lsymbol *temp = new Lsymbol;
			struct Lsymbol *temp_2 = new Lsymbol;
			if (Glookup(NAME)!=NULL && Arg_List!=NULL)
			{
				temp_2 = Arg_List->Lentry;
				temp = Glookup(NAME)->Arg_List->Lentry;
				//cout<<"NAME="<<Glookup(NAME)->NAME<<endl;
				while (temp != NULL && temp_2!=NULL)
				{

					//cout<<"NAME="<<temp_2->NAME<<endl;
					//cout<<"NAME="<<temp->NAME<<endl;
					//cout<<"NAME_1="<<temp->NAME<<" NAME_2="<<temp_2->NAME<<endl;
					if (strcmp(temp->NAME , temp_2->NAME) != 0 )
					{
						col=temp_2->col_no;
						line=temp_2->line_no;
						cout<<input_file_name<<":"<<line<<":"<<col<<":"<<"error:"<<"function definition does not match declaration."<<endl;
						no_of_error++;
					}
					if (temp->pass_by_type != temp_2->pass_by_type)
					{
						col=temp_2->col_no;
						line=temp_2->line_no;
						cout<<input_file_name<<":"<<line<<":"<<col<<":"<<"error:"<<"function definition arguments pass by type does not match with declaration."<<endl;
						no_of_error++;
					}
					temp = temp->Next;
					temp_2 = temp_2->Next;
				}
				if ((temp !=NULL && temp_2 ==NULL)||(temp ==NULL && temp_2 !=NULL))
				{
					col=temp_2->col_no;
					line=temp_2->line_no;
					cout<<input_file_name<<":"<<line<<":"<<col<<":"<<"error:"<<"function definition does not match declaration."<<endl;
					no_of_error++;

				}
			}
			delete temp;
			delete temp_2;

			if (Glookup(NAME)->TYPE != type)
			{
					cout<<"NAME = "<<NAME << " type = "<<type <<" TYPE = "<<Glookup(NAME)->TYPE<<endl;		
					yyerror("function definition does not match declaration.");
					no_of_error++;
				
			}
		}
	}
	else if (Node_Type == Node_Type_FUNCTION_CALL)
	{
		if (Glookup(NAME)==NULL)
		{	
			yyerror(std::string ("Function named ‘") + NAME + "’ is  not declared in this scope.");
		}
		else
		{
			if (Glookup(NAME)->Arg_List != NULL)
			{
				struct Lsymbol *temp = new Lsymbol;
				struct Lsymbol *temp_2 = new Lsymbol;
				temp = Glookup(NAME)->Arg_List->Lentry;
				temp_2 = Arg_List->Lentry;

				while (temp != NULL && temp_2!=NULL)
				{

						cout<<"type2="<<temp->TYPE<<" NAME2="<<temp->NAME<<endl;
					if (temp->TYPE != temp_2->TYPE)
					{
						col=temp_2->col_no;
						line=temp_2->line_no;
					//	cout<<"type="<<temp->TYPE<<" NAME="<<temp->NAME<<endl;
					//	cout<<"type2="<<temp_2->TYPE<<" NAME2="<<temp_2->NAME<<endl;
					//	yyerror(string("function call argument type of varible named ‘") + temp_2->NAME + "’ does not match with declaration.");						no_of_error++;
					}

					temp = temp->Next;
					temp_2 = temp_2->Next;
				}

				if ((temp !=NULL && temp_2 ==NULL)||(temp ==NULL && temp_2 !=NULL))
				{
					//yyerror("function call number of arguments does not match declaration.");
				}

				delete temp;
				delete temp_2;
			}
		}
	}
	// cout<<"Node_Type"<<expressionTree->ptr1->Node_Type<<endl;

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
	new_node->line_no=yylineno;
	new_node->col_no=column_no;
	new_node->Arg_List = Arg_List;
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

void Ginstall(char * NAME,int TYPE,int size,int value,struct tnode* Arg_List)
{	

	if (size==0)
	{	
			//If Array is 0 size
			yyerror(std::string ("Array ") + ("‘") + NAME + "’ can not be zero size.");
	}
	if (value == 'f')
	{
		//cout<<"F"<<endl;
		//cout<<"NAME = "<<Arg_List<<endl;
		// struct Lsymbol *temp_2 = new Lsymbol;

		// temp_2 = Arg_List->Lentry;

		// while(temp_2!=NULL)
		// {
		// 	cout<<"temp ="<<temp_2->NAME<<endl;
		// 	temp_2 = temp_2->Next;
		// }
	}
	if (Glookup(NAME)==NULL)
	{
		struct Gsymbol *new_node=(struct Gsymbol *)malloc(sizeof(struct Gsymbol));
		new_node->NAME=(char *)malloc(20*sizeof(char));
		strcpy(new_node->NAME,NAME);
		new_node->TYPE=TYPE;
		new_node->size=size;
		new_node->value=value;
		new_node->Binding=Global_Bind_Count;
		new_node->line_no=yylineno;
		new_node->col_no=column_no;
		new_node->Next=Gsymbol_table;
		Gsymbol_table=new_node;
		Global_Bind_Count+=size;
		new_node->Arg_List = Arg_List;
	}
	else
	{
		yyerror("redeclaration of ‘" + types_array[TYPE - 21] +" "+NAME+"’");
	}
	 
	
}

struct Lsymbol *Llookup(char *NAME)
{
	struct Lsymbol *temp=(struct Lsymbol *)malloc(sizeof(struct Lsymbol));
	temp=Lsymbol_table;

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

void Linstall(char * NAME,int TYPE)
{
	
	if (Llookup(NAME)==NULL)
	{
		struct Lsymbol *new_node=(struct Lsymbol *)malloc(sizeof(struct Lsymbol));
		new_node->NAME=(char *)malloc(20*sizeof(char));
		strcpy(new_node->NAME,NAME);
		new_node->TYPE=TYPE;
		new_node->size=1;
		new_node->value='a';
		new_node->Binding=Global_Bind_Count;
		new_node->line_no=yylineno;
		new_node->col_no=column_no;
		new_node->Next=Lsymbol_table;
		Lsymbol_table=new_node;
		Global_Bind_Count+=1;
	}
	else
	{
		yyerror("redeclaration of ‘" + types_array[TYPE - 21] +" "+NAME+"’");
	}

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

			if (Glookup(expressionTree->NAME)==NULL && Llookup(expressionTree->NAME)==NULL)
			{
				//cout<<"value"<<(evaluate(expressionTree->ptr2))<<endl;
				//cout<<"Variable="<<(expressionTree->NAME)<<endl;
				// cout<<"index="<<evaluate(expressionTree->ptr1->ptr2)<<endl;
				// Ginstall(expressionTree->NAME,expressionTree->type,evaluate(expressionTree->ptr1->ptr2),NULL);
				// cout<<"Binding="<<expressionTree->NAME<<" "<<Glookup(expressionTree->NAME)->Binding<<endl;
				// Memory[Global_Bind_Count + Glookup(expressionTree->NAME)->Binding+evaluate(expressionTree->ptr1->ptr2)]=(evaluate(expressionTree->ptr2));
				//cout<<"error: ‘"<<expressionTree->NAME<<"’ "<<"was not declared in this scope"<<endl;

				//cout<<input_file_name<<":"<<yylineno<<":"<<column_no<<":"<<expressionTree->NAME<<" was not declared in this scope"<<endl;
				yyerror(std::string ("‘") + expressionTree->NAME + "’ was not declared in this scope");
				exit(0);
				return -1;
			}
			else
			{	
				//cout<<"ptr1"<<endl;
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
		// 	Ginstall(expressionTree->NAME,expressionTree->type,1,NULL);
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
		if (expressionTree->value=='A'||expressionTree->value=='a')
		{	
			//return evaluate(expressionTree->ptr2);
			if (Llookup(expressionTree->NAME)==NULL)
			{
				
				return Memory[Glookup(expressionTree->NAME)->Binding + evaluate(expressionTree->ptr2)];
			}
			else
			{
				return Memory[Llookup(expressionTree->NAME)->Binding + evaluate(expressionTree->ptr2)];
			}
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
		if (Glookup(expressionTree->ptr1->NAME)==NULL && Llookup(expressionTree->NAME)==NULL)
		{
			//Memory[Global_Bind_Count]=input;
			//Ginstall(expressionTree->ptr1->NAME,expressionTree->ptr1->type,1,NULL);
			cout<<"error: ‘"<<expressionTree->NAME<<"’ "<<"was not declared in this scope"<<endl;
			no_of_error++;
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
				return evaluate(expressionTree->ptr3);
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
	else if (expressionTree->Node_Type==Node_Type_RETURN)
	{	
		return evaluate(expressionTree->ptr1);
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
		//cout<<"expressionTree->ptr1->type="<<expressionTree->ptr1->type<<" expressionTree->ptr2->type="<<expressionTree->ptr2->type<<endl;
		return (type_check(expressionTree->ptr1)+type_check(expressionTree->ptr2));	
	}
	else if (expressionTree->Node_Type==Node_Type_MINUS)
	{
		
		return (type_check(expressionTree->ptr1)-type_check(expressionTree->ptr2));	
	}
	else if (expressionTree->Node_Type==Node_Type_DIV)
	{
		if (type_check(expressionTree->ptr2)==0)
		{
			yyerror(string("Divide by zero,floating point exception."));
			exit(-1);
		}
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
		else if (expressionTree->value==0)
		{
			return false;
		}
		else
		{
			return -1;
		}
	}
	else if (expressionTree->Node_Type==Node_Type_ASSIGNMENT)
	{
		if (expressionTree->ptr1->Node_Type==Node_Type_ARRAY)
		{
			if (Glookup(expressionTree->NAME)==NULL && Llookup(expressionTree->NAME)==NULL)
			{

				yyerror(std::string ("‘") + expressionTree->NAME + "’ was not declared in this scope");
				return -1;
			}
			Memory[Glookup(expressionTree->NAME)->Binding + evaluate(expressionTree->ptr1->ptr2)]=evaluate(expressionTree->ptr2);
			//cout<<"Array= "<<expressionTree->NAME<<" = "<< evaluate(expressionTree->ptr1->ptr2)<<endl;
		}
		
	}
	else if (expressionTree->Node_Type==Node_Type_ARRAY)
	{	
		if (expressionTree->value=='A'||expressionTree->value=='a')
		{	

			if (Glookup(expressionTree->NAME)==NULL)
			{
				if (Llookup(expressionTree->NAME)==NULL)
				{
					yyerror(std::string ("‘") + expressionTree->NAME + "’ was not declared in this scope");
					
				}
				
				return -1;
			}
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
		//cin>>input;
		//cout<<"IN read"<<endl;
		if (Glookup(expressionTree->ptr1->NAME)==NULL && Llookup(expressionTree->NAME)==NULL)
		{
			//Memory[Global_Bind_Count]=input;
			//Ginstall(expressionTree->ptr1->NAME,expressionTree->ptr1->type,1,NULL);

			//cout<<"error: ‘"<<expressionTree->NAME<<"’ "<<"was not declared in this scope"<<endl;
			yyerror(std::string ("‘") + expressionTree->NAME + "’ was not declared in this scope");
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
			
				//cout<<type_check(expressionTree->ptr1)<<endl;
				// fprintf(sim_code_file, "MOV R1,%d\n",evaluate(expressionTree->ptr1));
				// fprintf(sim_code_file, "OUT R1\n");
				//fprintf(sim_code_file," %d", evaluate(expressionTree->ptr1));
				//fprintf(sim_code_file, "\n");
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
		
		// if (expressionTree->ptr1->type!=TYPE_BOOLEAN)
		// {
		// 	yyerror("while loop requires boolean type condition.");
		// 	no_of_error++;
		// 	//exit(-2);
		// }
		while(type_check(expressionTree->ptr1))
		{

		 	type_check(expressionTree->ptr2);	
		}
	}
	else if (expressionTree->Node_Type==Node_Type_RETURN)
	{	
		return type_check(expressionTree->ptr1);
	}
	else if (expressionTree->Node_Type==Node_Type_DUMMY)
	{
 
		type_check(expressionTree->ptr1);
		type_check(expressionTree->ptr2);
		return 0;
	}
	return -1;	
}


int is_boolean(struct tnode* expressionTree)
{
	/*This fuction returns the boolean value TRUE or FALSE after evaluating logical expression expressionTree.*/
	int return_value;
	return_value=type_check(expressionTree);
	if (return_value==0 || return_value==1)
	{
		return 1;
	}
	return 0;
}
int get_type(struct tnode *expressionTree)
{	
	/*This function return the type of the variables and the Arrays;*/
	if (Llookup(expressionTree->NAME)!=NULL)
	{
		return Llookup(expressionTree->NAME)->TYPE;
	}
	else if (Glookup(expressionTree->NAME)!=NULL)
	{
		return Glookup(expressionTree->NAME)->TYPE;		
	}
	return TYPE_VOID;
}
struct Lsymbol *Make_Arg_Node(char *NAME,int TYPE,int size,int pass_by_type)
{
	/**
		Make_Arg_Node is used to make the arguments in the function declaration and definition stores the local variables and
		which is linked to the Lentry of the Function node later.
	**/

	struct Lsymbol *new_node=(struct Lsymbol *)malloc(sizeof(struct Lsymbol));
	new_node->NAME=(char *)malloc(20*sizeof(char));
	
	strcpy(new_node->NAME,NAME);
	new_node->TYPE=TYPE;
	new_node->size=size;
	new_node->value='a';
	//new_node->Binding=Global_Bind_Count;
	new_node->line_no=yylineno;
	new_node->col_no=column_no;
	new_node->Next=NULL;
	//Global_Bind_Count+=1;
	new_node->pass_by_type = pass_by_type;

	return new_node;
}

struct Lsymbol *Make_Arg_Node_List(struct Lsymbol *Node_1,struct Lsymbol *Node_2)
{
	/**
		Make_Arg_Node_List is used to combine two arguments into one and also checks the redeclaration of the arguments and also 
		contains the local variable and which is linked to the Lentry of the Function node later.
	**/
	struct Lsymbol *temp = new Lsymbol;
	struct Lsymbol *temp_2 = new Lsymbol;
	temp = Node_1;


	while (temp!=NULL)
	{
		temp_2 = Node_2;
		while (temp_2!=NULL)
		{
		
			if (Node_2!=NULL)
			{
				if (strcmp(temp->NAME,temp_2->NAME)==0)
				{
					cout<<input_file_name<<":"<<temp_2->line_no<<":"<<temp_2->col_no<<":"<<"error:"<<"redeclaration of variable‘"<<temp->NAME<<"’"<<endl;
					no_of_error++;
				}
			}
			
			temp_2 = temp_2->Next;
		}
		temp = temp->Next;
	}
	temp = Node_1;

	/**Checks the Local varoables are array or not.**/
	if (temp != NULL)
	{
		while (temp->Next!=NULL)
		{
			if (temp->size > 1)
			{
				yyerror("Array" + string(" ‘") + temp->NAME + "’ can not be passed to the function.");
			}
			temp = temp->Next;
		}
		temp->Next = Node_2;
		if (temp->size > 1)
		{
			yyerror("Array" + string(" ‘") + temp->NAME + "’ can not be passed to the function.");
		}		
	}

	return Node_1;
}
