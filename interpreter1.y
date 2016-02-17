%{
	#include <iostream>
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include "exptree.hpp"
	extern 	int alphabet[200];
	extern 	int yyleng;
	extern struct Gsymbol *Gsymbol_table;
	using namespace std;
	int i;
	int yylex();
	int yyerror(char const *s);
	void free_node(struct tnode *expressionTree)
	{
		if (expressionTree->ptr1==NULL||expressionTree->ptr2==NULL||expressionTree->ptr3==NULL)
		{
			free(expressionTree);
			return;
		}
		else 
		{
			free_node(expressionTree->ptr1);
			free(expressionTree->ptr1);
			free_node(expressionTree->ptr2);
			free(expressionTree->ptr2);
			free_node(expressionTree->ptr3);
			free(expressionTree->ptr3);
			free(Gsymbol_table->Next);
			Gsymbol_table=NULL;

			
		}
		
	}
%}

%token PLUS MINUS DIV MUL SEMICOLON READ WRITE EQUAL NUM ID MODULUS POWER
%token IF THEN ELSE ENDIF WHILE DO ENDWHILE
%token LESS LTEQUAL GREATER GTEQUAL ISEQUAL NOTEQUAL
%token BEGIN1 END
%left MINUS PLUS
%left DIV MUL MODULUS
%right POWER
%nonassoc ASSIGNMENT NOTEQUAL ISEQUAL LESS LTEQUAL GREATER GTEQUAL

%%
start: BEGIN1 Slist END 	{
							evaluate($2);
						}
Slist:Slist Stmt 	{		/*$$=(struct tnode *)malloc(sizeof(struct tnode));

							$$->Node_Type=30;
							$$->ptr1=$1;
							$$->ptr2=$2;*/

							$$=Make_Node(TYPE_VOID,Node_Type_DUMMY,'D',NULL,NULL,NULL,NULL,NULL);
							//$$->ptr1=$2;
							$$->ptr1=$1;
							$$->ptr2=$2;
							// $$->ptr1=Make_Node(TYPE_VOID,Node_Type_DUMMY,$2->value,NULL,$1,$2,NULL,NULL);
							// evaluate($$);
							/*cout<<endl;
							for (i = 0; i <=26; i++)	
							{
								cout<<alphabet[i];
							}
							//free_node($$);
				
						 cout<<"Complete"<<endl;*/

					}
	|Stmt			{$$=$1;/*evaluate($$);*//*free_node($$);*/}
	;
Stmt:ID EQUAL expr SEMICOLON		{ 
										//$$=Make_Node(TYPE_VOID,Node_Type_DUMMY,'D',NULL,NULL,NULL,NULL,NULL);
										//cout<<"Stmt"<<endl;
										//$$->ptr1=$2;
										//$$->ptr2=NULL;
										//$$->ptr2=Make_Node(TYPE_VOID,ID,'=',$1->NAME,$1,$3,NULL,NULL);
										$$=Make_Node(TYPE_VOID,Node_Type_ASSIGNMENT,'=',$1->NAME,$1,$3,NULL,NULL);
										//cout<<"ID"<<$$->ptr1->NAME<<endl;
									}
	|READ'('ID')'	SEMICOLON  		{
										//$$=Make_Node(TYPE_VOID,Node_Type_DUMMY,'D',NULL,NULL,NULL,NULL,NULL);
										$$=Make_Node(TYPE_VOID,Node_Type_READ,'r',NULL,$3,NULL,NULL,NULL);
									}
	|WRITE'('expr')' SEMICOLON		{
										//$$=Make_Node(TYPE_VOID,Node_Type_DUMMY,'D',NULL,NULL,NULL,NULL,NULL);
										$$=Make_Node(TYPE_VOID,Node_Type_WRITE,'W',NULL,$3,NULL,NULL,NULL);
									}
	|IF '('expr')'THEN Slist ENDIF SEMICOLON{
												//$$=Make_Node(TYPE_VOID,Node_Type_DUMMY,'D',NULL,NULL,NULL,NULL,NULL);
												$$=Make_Node(TYPE_VOID,Node_Type_IF,'i',NULL,$3,$6,NULL,NULL);
											}
	|IF '('expr')'THEN Slist ELSE Slist ENDIF SEMICOLON{	
														//$$=Make_Node(TYPE_VOID,Node_Type_DUMMY,'D',NULL,NULL,NULL,NULL,NULL);
														$$=Make_Node(TYPE_VOID,Node_Type_IF,'I',NULL,$3,$6,$8,NULL);
													}
	|WHILE '('expr')'DO Slist ENDWHILE SEMICOLON{
													//$$=Make_Node(TYPE_VOID,Node_Type_DUMMY,'D',NULL,NULL,NULL,NULL,NULL);
													$$=Make_Node(TYPE_VOID,Node_Type_WHILE,'w',NULL,$3,$6,NULL,NULL);
												}
	;
	// char *temp=(char *)malloc(6);strcpy(temp,"WRITE");temp[6]='\0';
// Make_Node(int type,int Node_Type,int value,char *NAME,struct tnode *ptr1,struct tnode *ptr2,struct tnode *ptr3,struct tnode *Arg_List)
expr:expr PLUS expr		{	//cout<<"In PLUS"<<endl;
							//$$=Make_Node(TYPE_VOID,Node_Type_DUMMY,'D',NULL,NULL,NULL,NULL,NULL);
							//cout<<"+"<<endl;
							//$$->ptr2=NULL;
							$$=Make_Node(TYPE_VOID,Node_Type_PLUS,'+',NULL,$1,$3,NULL,NULL);
						}
	|expr MINUS expr	{
							//$$=Make_Node(TYPE_VOID,Node_Type_DUMMY,'D',NULL,NULL,NULL,NULL,NULL);
							//$$->ptr2=NULL;
							$$=Make_Node(TYPE_VOID,Node_Type_MINUS,'-',NULL,$1,$3,NULL,NULL);
						}

	|expr DIV expr		{
							//$$=Make_Node(TYPE_VOID,Node_Type_DUMMY,'D',NULL,NULL,NULL,NULL,NULL);
							//$$->ptr2=NULL;
							$$=Make_Node(TYPE_VOID,Node_Type_DIV,'/',NULL,$1,$3,NULL,NULL);
						}
	|expr MUL expr		{
							//$$=Make_Node(TYPE_VOID,Node_Type_DUMMY,'D',NULL,NULL,NULL,NULL,NULL);
							//$$->ptr2=NULL;
							$$=Make_Node(TYPE_VOID,Node_Type_MUL,'*',NULL,$1,$3,NULL,NULL);
						}
	|expr POWER expr	{	
							//$$=Make_Node(TYPE_VOID,Node_Type_DUMMY,'D',NULL,NULL,NULL,NULL,NULL);
							//$$->ptr2=NULL;
							$$=Make_Node(TYPE_VOID,Node_Type_POWER,'^',NULL,$1,$3,NULL,NULL);
						}
	|expr MODULUS expr	{
							//$$=Make_Node(TYPE_VOID,Node_Type_DUMMY,'D',NULL,NULL,NULL,NULL,NULL);
							//$$->ptr2=NULL;
							$$=Make_Node(TYPE_VOID,Node_Type_MODULUS,'%',NULL,$1,$3,NULL,NULL);
						}
	|'('expr')'			{$$=$2;}
	|NUM				{$$=$1;}
	|ID					{$$=$1;}
	|MINUS expr 		{
							//$$=Make_Node(TYPE_VOID,Node_Type_DUMMY,'D',NULL,NULL,NULL,NULL,NULL);
							//$$->ptr2=NULL;
							$$=Make_Node(TYPE_VOID,Node_Type_MINUS,'-',NULL,makeLeafNode(0),$2,NULL,NULL);
						}
	|PLUS expr 			{
							//$$=Make_Node(TYPE_VOID,Node_Type_DUMMY,'D',NULL,NULL,NULL,NULL,NULL);
							//$$->ptr2=NULL;
							$$=Make_Node(TYPE_VOID,Node_Type_PLUS,'+',NULL,makeLeafNode(0),$2,NULL,NULL);
						}
	|expr LESS expr		{
							//$$=Make_Node(TYPE_VOID,Node_Type_DUMMY,'D',NULL,NULL,NULL,NULL,NULL);
							//$$->ptr2=NULL;
							$$=Make_Node(TYPE_BOOLEAN,Node_Type_LT,'<',NULL,$1,$3,NULL,NULL);
						}
	|expr LTEQUAL expr {
							//$$=Make_Node(TYPE_VOID,Node_Type_DUMMY,'D',NULL,NULL,NULL,NULL,NULL);
							//$$->ptr2=NULL;
							$$=Make_Node(TYPE_BOOLEAN,Node_Type_LE,'L',NULL,$1,$3,NULL,NULL);
						}
	|expr GREATER expr {
							//$$=Make_Node(TYPE_VOID,Node_Type_DUMMY,'D',NULL,NULL,NULL,NULL,NULL);
							//$$->ptr2=NULL;
							$$=Make_Node(TYPE_BOOLEAN,Node_Type_GT,'>',NULL,$1,$3,NULL,NULL);
						}
	|expr GTEQUAL expr {
							//$$=Make_Node(TYPE_VOID,Node_Type_DUMMY,'D',NULL,NULL,NULL,NULL,NULL);
							//$$->ptr2=NULL;
							$$=Make_Node(TYPE_BOOLEAN,Node_Type_GE,'G',NULL,$1,$3,NULL,NULL);
						}
	|expr NOTEQUAL expr {
							//$$=Make_Node(TYPE_VOID,Node_Type_DUMMY,'D',NULL,NULL,NULL,NULL,NULL);
							//$$->ptr2=NULL;
							$$=Make_Node(TYPE_BOOLEAN,Node_Type_NE,'N',NULL,$1,$3,NULL,NULL);
						}
	|expr ISEQUAL expr {
							//$$=Make_Node(TYPE_VOID,Node_Type_DUMMY,'D',NULL,NULL,NULL,NULL,NULL);
							//$$->ptr2=NULL;
							$$=Make_Node(TYPE_BOOLEAN,Node_Type_EQ,'E',NULL,$1,$3,NULL,NULL);
						}
	;

%%

int yyerror(char const *s)
{
	cout<<s<<endl;
	return 0;
}

int main()
{
	yyparse();
	return 0;
}	