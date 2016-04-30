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
int Global_Bind_Count = 0;
char error_output[200];
int no_of_error=0;
struct Typetable *ptr1_type,*ptr2_type;
string types_array[5]={"void","boolean","integer"};
extern FILE *sim_code_file;

stack <char *> last_function_used_type_check;

int k;
int col,line;

struct tnode* makeLeafNode(int n)
{
	struct tnode* new_leaf_node;
	new_leaf_node=(struct tnode*)malloc(sizeof(struct tnode));
	new_leaf_node->Node_Type=Node_Type_LEAF;
	new_leaf_node->NAME=(char *)malloc(sizeof(char));
	new_leaf_node->NAME=NULL;
	new_leaf_node->type=Tlookup(INTEGER_NAME);
	new_leaf_node->value=n;
	new_leaf_node->ptr1=NULL;
	new_leaf_node->ptr2=NULL;
	new_leaf_node->ptr3=NULL;
	return new_leaf_node;
}


struct tnode* Make_Node(struct Typetable *type,int Node_Type,int value,char *NAME,struct tnode* ptr1,struct tnode* ptr2,struct tnode* ptr3,struct tnode* Arg_List)
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
			if (lookup_variable(last_function_used_type_check.top(),NAME) == NULL)
			{
				if (Glookup(NAME)==NULL)
				{	
					//If the varible is not decraired
					// if(Llookup(NAME)==NULL)
					// {
						yyerror(std::string ("‘") + NAME + "’ was not declared in this scope");
						//new_node=NULL;
					// }
					
				}
				else 
				{	if (Glookup(NAME)->TYPE == Tlookup(BOOLEAN_NAME) && ptr2->value!=0 && ptr2->value!=1)
					{
						yyerror("boolean Type can be TRUE or FALSE");
					}
					
					if ((Glookup(NAME)->size<evaluate(ptr1->ptr2))&&(Glookup(NAME)->value=='A'))
					{	
						//If Array is outof bound
					
						yyerror(std::string ("Array ") + ("‘") + NAME + "’ is out of bound.");
					}
				}
			}
			else if (lookup_variable(last_function_used_type_check.top(),NAME)->TYPE == Tlookup(BOOLEAN_NAME) && ptr2->value!=0 && ptr2->value!=1)
			{
						yyerror("boolean Type can be TRUE or FALSE");
			}
			// if (Glookup(NAME) != NULL)
			// {
			// 	//else
			// 	if ((Glookup(NAME)->size<evaluate(ptr1->ptr2))&&(Glookup(NAME)->value=='A'))
			// 	{	
			// 		//If Array is outof bound
					
			// 		yyerror(std::string ("Array ") + ("‘") + NAME + "’ is out of bound.");
			// 	}
				
			// }
			
		 }
		else if (Node_Type==Node_Type_IF)
		{		

				if ((!is_boolean(ptr1)))
				{
					yyerror("if statement requires boolean type condition.");
				}
				else if (ptr1->type == Tlookup(VOID_NAME))
				{	
					if (lookup_variable(last_function_used_type_check.top(),ptr1->NAME) == NULL)
					{
						if (Glookup(ptr1->NAME)->TYPE!=Tlookup(BOOLEAN_NAME))
						{
							yyerror("if statement requires boolean type condition.");
						}
					}
					else 
					{
						if (lookup_variable(last_function_used_type_check.top(),ptr1->NAME)->TYPE!=Tlookup(BOOLEAN_NAME))
						{
							yyerror("if statement requires boolean type condition.");
						}					
					}
				}
				
		}	
		else if (Node_Type==Node_Type_WHILE)
		{		

				if (!is_boolean(ptr1))
				{
					yyerror("while loop requires boolean type condition.");
				}
				else if (ptr1->type==Tlookup(VOID_NAME))
				{
					if (lookup_variable(last_function_used_type_check.top(),ptr1->NAME) == NULL)
					{
						if (Glookup(ptr1->NAME)->TYPE!=Tlookup(BOOLEAN_NAME))
						{
							yyerror("while loop requires boolean type condition.");
						}
					}
					else 
					{
						if (lookup_variable(last_function_used_type_check.top(),ptr1->NAME)->TYPE!=Tlookup(BOOLEAN_NAME))
						{
							yyerror("while loop requires boolean type condition.");
						}					
					}
					// if (Glookup(ptr1->NAME)->TYPE!=TYPE_BOOLEAN)
					// {
					// 	yyerror("while loop requires boolean type condition.");
					// }
				}
				
		}	
		else if ((Node_Type==Node_Type_LT ||Node_Type==Node_Type_LE || Node_Type==Node_Type_GT||Node_Type==Node_Type_GE)&&  ptr1->type!=ptr2->type)
		{		
				if (ptr1->Node_Type==Node_Type_ARRAY)
				{	
					
					if (lookup_variable(last_function_used_type_check.top(),ptr1->NAME)!=NULL)
					{
						ptr1_type=lookup_variable(last_function_used_type_check.top(),ptr1->NAME)->TYPE;
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
					
					if (lookup_variable(last_function_used_type_check.top(),ptr2->NAME)!=NULL)
					{
						ptr2_type=lookup_variable(last_function_used_type_check.top(),ptr2->NAME)->TYPE;
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

				// if (ptr1_type!=ptr2_type && (ptr1_type != Node_Type_LEAF || ptr2_type!=Node_Type_LEAF))
				// {	
				// 	//cout<<"ptr1="<<ptr1_type<<"ptr2="<<ptr2_type<<endl;
				// 	yyerror("compairing different types.");
				// }
				if (ptr1_type!=ptr2_type)
				{	
					//cout<<"ptr1="<<ptr1_type<<"ptr2="<<ptr2_type<<endl;
					yyerror("compairing different types.");
				}
		}
		else if ((Node_Type==Node_Type_EQ ||Node_Type==Node_Type_NE)&&  ptr1->type!=ptr2->type)
		{	
				if (ptr1->Node_Type==Node_Type_ARRAY)
				{
					if (lookup_variable(last_function_used_type_check.top(),ptr1->NAME)!=NULL)
					{
						ptr1_type=lookup_variable(last_function_used_type_check.top(),ptr1->NAME)->TYPE;
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
					
					if (lookup_variable(last_function_used_type_check.top(),ptr2->NAME)!=NULL)
					{
						ptr2_type=lookup_variable(last_function_used_type_check.top(),ptr2->NAME)->TYPE;
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

			
				/*if (ptr1_type!=ptr2_type && (ptr1_type!=Node_Type_LEAF || ptr2_type!=Node_Type_LEAF))
				{	
					//cout<<"ptr1="<<ptr1_type<<"ptr2="<<ptr2_type<<endl;
					yyerror("compairing different types.");
				}*/
				if (ptr1_type!=ptr2_type)
				{	
					//cout<<"ptr1="<<ptr1_type<<"ptr2="<<ptr2_type<<endl;
					yyerror("compairing different types.");
				}
		}
		else if ((Node_Type==Node_Type_PLUS)||(Node_Type==Node_Type_MINUS)||(Node_Type==Node_Type_DIV)||(Node_Type==Node_Type_MUL)||(Node_Type==Node_Type_MODULUS)||(Node_Type==Node_Type_POWER))
		{		

				if (ptr1->Node_Type==Node_Type_ARRAY)
				{
					if (lookup_variable(last_function_used_type_check.top(),ptr1->NAME)!=NULL)
					{
						ptr1_type=lookup_variable(last_function_used_type_check.top(),ptr1->NAME)->TYPE;
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
					
					if (lookup_variable(last_function_used_type_check.top(),ptr2->NAME)!=NULL)
					{
						ptr2_type=lookup_variable(last_function_used_type_check.top(),ptr2->NAME)->TYPE;
					}
					else if(Glookup(ptr2->NAME)!=NULL)
					{
						ptr2_type=Glookup(ptr2->NAME)->TYPE;
					}
				}
				else
				{
					ptr2_type = ptr2->type;
				}

				// cout<<ptr1_type<<" "<<ptr2_type<<endl;
				/*if (ptr1_type!=ptr2_type && (ptr1_type!=Node_Type_LEAF || ptr2_type!=Node_Type_LEAF))
				{	
					//cout<<"ptr1="<<ptr1_type<<"ptr2="<<ptr2_type<<endl;
					yyerror("Arithmetic Operations of  different types.");
				}*/
				if (ptr1_type!=ptr2_type)
				{	
					//cout<<"ptr1="<<ptr1_type<<"ptr2="<<ptr2_type<<endl;
					yyerror("Arithmetic Operations of  different types.");				
				}

				if (ptr1_type == Tlookup(BOOLEAN_NAME) || ptr2_type == Tlookup(BOOLEAN_NAME))
				{
					yyerror("Arithmetic Operations  not allowed for boolean types.");				
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
					temp = Arg_List->Lentry;
					temp_2 = Glookup(NAME)->Arg_List->Lentry;
					// cout<<"NAME="<<Glookup(NAME)->NAME<<endl;
					while (temp != NULL && temp_2 != NULL)
					{

						// cout<<"NAME="<<temp_2->NAME<<endl;
						// cout<<"NAME="<<temp->NAME<<endl;
						// cout<<"NAME_1="<<temp->NAME<<" NAME_2="<<temp_2->NAME<<endl;
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
						if (temp->TYPE != temp_2->TYPE)
						{
							col=temp_2->col_no;
							line=temp_2->line_no;
							cout<<input_file_name<<":"<<line<<":"<<col<<":"<<"error:"<<"function definition arguments pass by type does not match with declaration."<<endl;
							no_of_error++;
						}
						temp = temp->Next;
						temp_2 = temp_2->Next;
					}
					// cout<<"end"<<endl;
					if (temp !=NULL && temp_2 ==NULL)
					{
						col=temp->col_no;
						line=temp->line_no;
						cout<<input_file_name<<":"<<line<<":"<<col<<":"<<"error:"<<"function definition does not match declaration."<<endl;
						no_of_error++;

					}
					if (temp ==NULL && temp_2 !=NULL)
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
						//cout<<"NAME = "<<NAME << " type = "<<type <<" TYPE = "<<Glookup(NAME)->TYPE<<endl;		
						yyerror("function definition type does not match declaration.");
						no_of_error++;
					
				}
			}
		}
		else if (Node_Type == Node_Type_FUNCTION_CALL)
		{
			int arg_no_decl = 0,arg_no_passed = 0;
			if ((strcmp(NAME, "initialize") != 0) && (strcmp(NAME, "allocate") != 0) && (strcmp(NAME, "free") != 0))
			{
				
	
				if (Glookup(NAME)==NULL)
				{	
					yyerror(std::string ("Function named ‘") + NAME + "’ is  not declared in this scope.");
				}
				else if (Glookup(NAME) != NULL)
				{
					// cout<<"last_function_used_type_check = "<<last_function_used_type_check.top()<<endl;
					if (Glookup(NAME)->BODY == NULL && (strcmp(NAME ,last_function_used_type_check.top())) != 0)
					{
						yyerror(string("Definiation of function named ‘") + NAME + "’ does not exist in this scope.");
					}
				// }
				// else
				// {	
					// cout<<"Node_Type = "<<ptr1->Node_Type<<endl;
					if (Glookup(NAME)->Arg_List != NULL)
					{
						struct Lsymbol *temp = new Lsymbol;
						struct tnode *temp_2 = new tnode;
						temp = Glookup(NAME)->Arg_List->Lentry;
						temp_2 = Arg_List;

						while (temp != NULL)
						{
							arg_no_decl++;
							temp = temp->Next;
						}
						
						while (temp_2 != NULL)
						{
							arg_no_passed++;
							// if (temp_2->value == 'c')
							// {
							// 	cout<<" 		NAME = "<<temp_2->NAME<<endl;
							// }
							cout<<char(temp_2->value)<<endl;
							temp_2 = temp_2->ptr3;
						}


						// cout<<"arg_no_decl = "<<arg_no_decl << " arg_no_passed = "<<arg_no_passed<<endl;


						
						temp = Glookup(NAME)->Arg_List->Lentry;
						temp_2 = Arg_List;
						// cout<<last_function_used_type_check.top()<<endl;
						while (temp != NULL && temp_2 != NULL)
						{

							// cout<<"type1="<<temp->TYPE<<" NAME1="<<temp->NAME<<endl;
							// cout<<"type2="<<temp_2->type<<" NAME2="<<temp_2->Node_Type<<endl;
							if (temp->TYPE != temp_2->type)
							{
								col=temp_2->col_no;
								line=temp_2->line_no;
							// 	//cout<<"c type="<<temp->TYPE<<" NAME="<<temp->NAME<<endl;
							// 	//cout<<"c type2="<<temp_2->TYPE<<" NAME2="<<temp_2->NAME<<endl;
								if (temp_2->Node_Type == Node_Type_ARRAY)
								{
									yyerror(string("function call argument type of varible named ‘") + temp_2->NAME + "’ does not match with declaration.");
								}
								else
								{
									yyerror(string("function call argument type does not match with declaration."));
								}
							}

							// cout<<"type1="<<temp->TYPE<<" NAME1="<<temp->pass_by_type<<endl;

							if (temp->pass_by_type == PASS_BY_REFERENCE && temp_2->Node_Type != Node_Type_ARRAY)
							{
								yyerror(string("function call argument pass by type does not match with declaration."));

							}

							temp = temp->Next;
							temp_2 = temp_2->ptr3;
						}

						// cout<<"end"<<endl;
						if (temp_2 != NULL)
						{	
							if (temp_2->NAME != NULL)
							{
								// cout<<"NAME temp_2= "<<temp_2->NAME<<endl;
							}
						}
						
						if ((temp !=NULL && temp_2 ==NULL)||(temp ==NULL && temp_2 !=NULL))
						{
							// if (temp_2 != NULL)
							// {
							// 	cout<<"temp_2 ="<<char(ptr1->value)<<endl;
							// }
							// if (temp != NULL)
							// {
							// 	cout<<"temp ="<<char(ptr1->value)<<endl;

							// }
							// if (ptr1->value != 'c')
							// {
								yyerror("function call number of arguments does not match declaration.");

							// }
						}

						//delete temp;
						// delete temp_2; //why need not to free?
					}
				}
			}
		}
	// cout<<"Node_Type"<<expressionTree->ptr1->Node_Type<<endl;
		
	new_node->type = type;
	new_node->Node_Type=Node_Type;
	new_node->NAME=(char *)malloc(20*sizeof(char));
	if(NAME!=NULL)
	{
		if (type == Tlookup(ID_NAME))
		{
		
	// cout<<"NAME = "<<NAME<<endl;
		}
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
	return NULL;

}


// struct tnode* makeOperatorNode(char op,struct tnode* left,struct tnode* right)
// {
// 	struct tnode* new_operator_node;
// 	new_operator_node=(struct tnode*)malloc(sizeof(struct tnode));
// 	new_operator_node->NAME=(char *)malloc(sizeof(char));
// 	*(new_operator_node->NAME)=op;
// 	new_operator_node->ptr1=left;
// 	new_operator_node->ptr2=right;
// 	return new_operator_node;
// }
// struct tnode* makeStatementNode(char c,int Node_Type, int value,struct tnode* ptr1,struct tnode* ptr2,struct tnode *ptr3)
// {
// 	struct tnode* new_statement_node;
// 	new_statement_node=(struct tnode*)malloc(sizeof(struct tnode));
// 	new_statement_node->NAME=(char *)malloc(sizeof(char));
// 	new_statement_node->value=value;
// 	new_statement_node->Node_Type=Node_Type;
// 	*(new_statement_node->NAME)=c;
// 	new_statement_node->ptr1=ptr1;
// 	new_statement_node->ptr2=ptr2;
// 	new_statement_node->ptr3=ptr3;
// 	return new_statement_node;
// }


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

void Ginstall(char * NAME,struct Typetable *TYPE,int size,int value,struct tnode* Arg_List)
{	

	if (size==0)
	{	
			//If Array is 0 size
			yyerror(std::string ("Array ") + ("‘") + NAME + "’ can not be zero size.");
	}
	// if (value == 'f')
	// {
	// 	cout<<"F"<<endl;
	// 	cout<<"NAME = "<<Arg_List<<endl;
	// 	struct Lsymbol *temp_2 = new Lsymbol;

	// 	temp_2 = Arg_List->Lentry;

	// 	while(temp_2!=NULL)
	// 	{
	// 		cout<<"temp ="<<temp_2->NAME<<endl;
	// 		temp_2 = temp_2->Next;
	// 	}
	// }
	if (Glookup(NAME)==NULL)
	{
		struct Gsymbol *new_node=(struct Gsymbol *)malloc(sizeof(struct Gsymbol));
		new_node->NAME=(char *)malloc(20*sizeof(char));
		strcpy(new_node->NAME,NAME);
		new_node->TYPE = TYPE;
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
		yyerror("redeclaration of ‘" + string(TYPE->NAME) +" "+NAME+"’");
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

void Linstall(char * NAME,struct Typetable *TYPE)
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
		// yyerror("redeclaration of ‘" + types_array[TYPE - 21] +" "+NAME+"’");
		yyerror("redeclaration of ‘" + string(TYPE->NAME) +" "+NAME+"’");
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
			if (lookup_variable(last_function_used_type_check.top(),expressionTree->NAME) == NULL)
			{
				if (Glookup(expressionTree->NAME)==NULL)
				{

					yyerror(std::string ("‘") + expressionTree->NAME + "’ was not declared in this scope");
					return -1;
				}
			}
			Memory[Glookup(expressionTree->NAME)->Binding + evaluate(expressionTree->ptr1->ptr2)]=evaluate(expressionTree->ptr2);
			//cout<<"Array= "<<expressionTree->NAME<<" = "<< evaluate(expressionTree->ptr1->ptr2)<<endl;
		}
		
		if (expressionTree->ptr2->Node_Type == Node_Type_FUNCTION_CALL)
		{
			//cout<<"Node_Type =    "<<expressionTree->ptr2->Node_Type<<endl;
			type_check(expressionTree->ptr2); 
		}
		

	}
	else if (expressionTree->Node_Type==Node_Type_ARRAY)
	{	
		if (expressionTree->value=='A')
		{	

			if (Glookup(expressionTree->NAME)==NULL)
			{
				// if (Llookup(expressionTree->NAME)==NULL)
				// {
					yyerror(std::string ("‘") + expressionTree->NAME + "’ was not declared in this scope");
					
				// }
				
				return -1;
			}
			return Memory[Glookup(expressionTree->NAME)->Binding + type_check(expressionTree->ptr2)];
		}
		else if (expressionTree->value=='a')
		{
			if (lookup_variable(last_function_used_type_check.top(),expressionTree->NAME) == NULL)
			{
				if (Glookup(expressionTree->NAME)==NULL)
				{
					yyerror(std::string ("‘") + expressionTree->NAME + "’ was not declared in this scope");			
					return -1;
				}
				return Memory[Glookup(expressionTree->NAME)->Binding + type_check(expressionTree->ptr2)];
				
			}
			return Memory[lookup_variable(last_function_used_type_check.top(),expressionTree->NAME)->Binding + type_check(expressionTree->ptr2)];
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
		if (lookup_variable(last_function_used_type_check.top(),expressionTree->NAME) == NULL)
		{
			if (Glookup(expressionTree->ptr1->NAME)==NULL)
			{
				//Memory[Global_Bind_Count]=input;
				//Ginstall(expressionTree->ptr1->NAME,expressionTree->ptr1->type,1,NULL);

				//cout<<"error: ‘"<<expressionTree->NAME<<"’ "<<"was not declared in this scope"<<endl;
				yyerror(std::string ("‘") + expressionTree->NAME + "’ was not declared in this scope");
				return -1;
			}
		}
		else
		{
			//Memory[lookup_variable(last_function_used_type_check.top(),expressionTree->ptr1->NAME)->Binding + type_check(expressionTree->ptr2) +1]=input;		
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
	else if (expressionTree->Node_Type==Node_Type_FUNCTION_CALL)
	{	
		// if (!last_function_used_type_check.empty())
		// {
		// 	cout<<"NAME="<<last_function_used_type_check.top()<<endl;
		// }

		// if (Glookup(expressionTree->NAME)->Arg_List != NULL)
		// {
		// 		struct Lsymbol *temp = new Lsymbol;
		// 		struct Lsymbol *temp_2 = new Lsymbol;
		// 		temp = expressionTree->Arg_List->Lentry;
		// 		cout<<"value = "<<char(expressionTree->value)<<endl;
		// 		// temp = Glookup(expressionTree->NAME)->Arg_List->Lentry;
		// 		// temp = expressionTree->Arg_List->Lentry;
		// 		// temp = Glookup(last_function_used_type_check.top())->Arg_List->Lentry;
		// 		// cout<<"ptr1 = "<<expressionTree->Arg_List<<endl;
		// 		// if (temp_2 == NULL)
		// 		// {
		// 		// 	cout<<"NULL"<<endl;
		// 		// }
		// 		// if (temp->Next == NULL)
		// 		// {
		// 		// 	cout<<"NULL"<<endl;
		// 		// }
		// 		while ( temp != NULL)
		// 		{

		// 				cout<<"type="<<temp->TYPE<<" NAME="<<temp->NAME<<endl;
		// 				// cout<<"type="<<temp_2->TYPE<<" NAME="<<temp_2->NAME<<endl;
		// 			// if (temp->type != temp_2->TYPE)
		// 			// {
		// 			// // 	col=temp_2->col_no;
		// 			// // 	line=temp_2->line_no;
		// 				//cout<<"c type="<<temp->TYPE<<" NAME="<<temp->NAME<<endl;
		// 				// cout<<"c type2="<<temp_2->TYPE<<" NAME2="<<temp_2->NAME<<endl;
		// 			// 	yyerror(string("function call argument type of varible named ‘") + temp_2->NAME + "’ does not match with declaration.");					
		// 			//	no_of_error++;
		// 			// }
		// 			// cout<<"type = "<<lookup_variable(last_function_used_type_check.top(),temp->NAME)->TYPE;
		// 			// cout<<"NAME = "<<lookup_variable(last_function_used_type_check.top(),temp->NAME)->NAME<<endl;

		// 			temp = temp->Next;
		// 			// temp_2 = temp_2->Next;
				//}
				// cout<<" "<<endl;
				// }
				// while (temp != NULL)
				// {

				// 	cout<<"type2="<<temp->TYPE<<" NAME2="<<temp->NAME<<endl;
				// 	temp = temp->Next;
				// }
				// while (temp_2 != NULL)
				// {

				// 	cout<<"type2="<<temp_2->TYPE<<" NAME2="<<temp_2->NAME<<endl;
				// 	temp_2 = temp_2->Next;
				// }

				// if ((temp !=NULL && temp_2 ==NULL)||(temp ==NULL && temp_2 !=NULL))
				// {
				// 	yyerror("function call number of arguments does not match declaration.");
				// }

				//delete temp;
				//delete temp_2;
			// }
		// last_function_used_type_check.pop();
		return type_check(expressionTree->ptr1);
	}
	else if (expressionTree->Node_Type==Node_Type_FUNCTION_DEF)
	{	
		// cout<<"Node_Type = "<<expressionTree->ptr1->ptr1->Node_Type<<endl;
		last_function_used_type_check.push((expressionTree->NAME));
		type_check(expressionTree->ptr1);
		last_function_used_type_check.pop();
		return 0;
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
struct Typetable *get_type(struct tnode *expressionTree)
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
	return Tlookup(VOID_NAME);
}
struct Lsymbol *Make_Arg_Node(char *NAME,struct Typetable *TYPE,int size,int pass_by_type)
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
	// new_node->Binding=Global_Bind_Count;
	new_node->line_no=yylineno;
	new_node->col_no=column_no;
	new_node->Next=NULL;
	// Global_Bind_Count+=1;
	new_node->pass_by_type = pass_by_type;

	return new_node;
}

struct Lsymbol *Make_Arg_Node_List(struct Lsymbol *Node_1,struct Lsymbol *Node_2,int value)
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
				if (strcmp(temp->NAME,temp_2->NAME)==0 && value!='c')
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



struct Lsymbol *lookup_variable(char  *function_name,char *variable_name)
{
	/**
		Lookup variable in the local and gloabal symbol table ,If the variable is not there in the local
		symbol table then look into the global symbol table ,if it is not there return NULL
	**/
	struct Lsymbol *function_variables;
	function_variables = Glookup(function_name)->Local;

	// cout<<"variable name = "<<variable_name<<endl;
	// cout<<"function_name = "<<function_name<<endl;
	if (function_variables != NULL)
	{
		// cout<<"Variable = "<<function_variables->Next->NAME<<endl;

		struct Lsymbol *temp = new Lsymbol;

		temp = function_variables;
		while (temp != NULL)
		{
			// cout<<"type2="<<temp->TYPE<<" NAME2="<<temp->NAME<<endl;
			if (strcmp(temp->NAME , variable_name) == 0 )
			{
			 	// cout<<"type2="<<temp->TYPE<<" NAME2="<<temp->NAME<<endl;
			 	return temp;
			}
			temp = temp->Next;
		}
	}
	return NULL;
}

struct Lsymbol *Mark_Variables_local(struct Lsymbol *function_local_variable)
{
	/**
		This function marks the local variable as LOCAL_VARIABLE need 
		for pushing in the Function call  of the codegen.
	**/
	struct Lsymbol *temp = new Lsymbol;
	temp = function_local_variable;
	
	while (temp !=NULL )
	{
		temp->pass_by_type = LOCAL_VARIABLE;
		temp = temp->Next;
	}
	delete temp;
	return function_local_variable;												
}
int get_global_var_no()
{
	/**This function returns the no of the global variables.**/

	int no_of_global_var = 0;

	struct Gsymbol *temp = new Gsymbol;
	temp = Gsymbol_table;

	while (temp != NULL)
	{	
		if (temp->Arg_List == NULL)
		{
			no_of_global_var = no_of_global_var + temp->size;
		}
		temp = temp->Next;
	}

	return no_of_global_var;
}





struct tnode *Make_Arg_Node_List_for_global(struct tnode *Node_1,struct tnode *Node_2,int value)
{
	/**
		Make_Arg_Node_List_for_global is used to combine two arguments into one and also checks the redeclaration of the arguments and also 
		contains the global variable and which is linked to the Lentry of the Function node later.
	**/
	struct tnode *temp = new tnode;
	struct tnode *temp_2 = new tnode;
	temp = Node_1;


	while (temp!=NULL)
	{
		temp_2 = Node_2;
		while (temp_2!=NULL)
		{
			
			if (Node_2!=NULL)
			{
				if (strcmp(temp->NAME,temp_2->NAME)==0 && value!='c')
				{
					cout<<input_file_name<<":"<<temp_2->line_no<<":"<<temp_2->col_no<<":"<<"error:"<<"redeclaration of variable‘"<<temp->NAME<<"’"<<endl;
					no_of_error++;
				}
			}
			
			temp_2 = temp_2->Arg_List;
		}
		temp = temp->Arg_List;
	}
	temp = Node_1;

	/**Checks the Glookal varoables are array or not.**/
	if (temp != NULL)
	{
		while (temp->Arg_List!=NULL)
		{
			// if (temp->size > 1)
			// {
			// 	yyerror("Array" + string(" ‘") + temp->NAME + "’ can not be passed to the function.");
			// }
			temp = temp->Arg_List;
		}
		temp->Arg_List = Node_2;
		// if (temp->size > 1)
		// {
		// 	yyerror("Array" + string(" ‘") + temp->NAME + "’ can not be passed to the function.");
		// }		
	}
	
	return Node_1;
}
