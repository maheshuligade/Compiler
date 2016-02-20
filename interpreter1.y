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
	extern int Memory[1000];
	int i;
	int yylex();
	int yyerror(char const *s);
	
%}

%token PLUS MINUS DIV MUL SEMICOLON READ WRITE EQUAL NUM ID MODULUS POWER
%token IF THEN ELSE ENDIF WHILE DO ENDWHILE
%token LESS LTEQUAL GREATER GTEQUAL ISEQUAL NOTEQUAL
%token BEGIN1 END MAIN INTEGER BOOLEAN 
%token NOT OR AND
%token DECL ENDDECL
%token TRUE FALSE

%right ASSIGNMENT 
%left OR 
%left AND
%left NOTEQUAL ISEQUAL 
%left LESS LTEQUAL GREATER GTEQUAL
%left MINUS PLUS
%left DIV MUL 
%left MODULUS
%right POWER
%right NOT

%%
PROGRAM: GLOBAL_DEF_BLOCK FUNC_DEF_BLOCK MAIN_BLOCK {evaluate($3);}

GLOBAL_DEF_BLOCK:		{$$=NULL;}
				;
FUNC_DEF_BLOCK:			{$$=NULL;}
				;

MAIN_BLOCK:INTEGER MAIN '(' ')' '{' LOCAL_DEF_BLOCK BODY '}' {$$=$7;/*evaluate($$);*/}
			;
LOCAL_DEF_BLOCK:DECL LOCAL_DEF_LISTS ENDDECL {$$=$2;}
				|							{$$=NULL;}
				;
LOCAL_DEF_LISTS:LOCAL_DEF_LISTS LOCAL_DEF_LIST 	{		

													$$=Make_Node(TYPE_VOID,Node_Type_DUMMY,'D',NULL,NULL,NULL,NULL,NULL);
													$$->ptr1=$1;
													$$->ptr2=$2;

												}
	|LOCAL_DEF_LIST								{$$=$1;}
	
	;
LOCAL_DEF_LIST:	TYPE IDS SEMICOLON {
										Ginstall($2->NAME,$1->Node_Type,evaluate($2->ptr2),NULL);
										
									}

// LOCAL_DEF_LIST:LOCAL_DEF_LIST LOCAL_DECL {}
			 	
// LOCAL_DECL:TYPE LID_LIST						{}
// LID_LIST:	ID	SEMICOLON						{}
// 		|ID [expr] SEMICOLON					{}


BODY: BEGIN1 Slist END 	{
							$$=$2;
							// evaluate($$);
							// cout<<"Memory"<<endl;
							// for (int i = 0; i < 20; i++)
							// {
							// 	cout<<i<<" "<<Memory[i]<<" "<<endl;
							// }
							// exit(0);
						}
Slist: Stmts	{$$=$1;}
	 | 			{$$=NULL;}
Stmts:Stmts Stmt 	{		

							$$=Make_Node(TYPE_VOID,Node_Type_DUMMY,'D',NULL,NULL,NULL,NULL,NULL);
							$$->ptr1=$1;
							$$->ptr2=$2;

					}
	|Stmt			{$$=$1;}
	
	;
Stmt:IDS EQUAL expr SEMICOLON		{ 
										$$=Make_Node(TYPE_VOID,Node_Type_ASSIGNMENT,'=',$1->NAME,$1,$3,NULL,NULL);
										
									}
	// |TYPE IDS SEMICOLON {

	// 									//$$=Make_Node(TYPE_VOID,Node_Type_ASSIGNMENT,'=',$1->NAME,$1,$2,NULL,NULL);
	// 									Ginstall($2->NAME,$1->Node_Type,evaluate($2->ptr2),NULL);
	// 									//cout<<"size="<<evaluate($2->ptr2)<<endl;
	// 								}
	|READ'('IDS')'	SEMICOLON  		{
										
										$$=Make_Node(TYPE_VOID,Node_Type_READ,'r',NULL,$3,NULL,NULL,NULL);
									}
	|WRITE'('expr')' SEMICOLON		{
										
										$$=Make_Node(TYPE_VOID,Node_Type_WRITE,'W',NULL,$3,NULL,NULL,NULL);
									}
	|IF '('expr')'THEN Slist ENDIF SEMICOLON{
												
												$$=Make_Node(TYPE_VOID,Node_Type_IF,'i',NULL,$3,$6,NULL,NULL);
											}
	|IF '('expr')'THEN Slist ELSE Slist ENDIF SEMICOLON{	
														
														$$=Make_Node(TYPE_VOID,Node_Type_IF,'I',NULL,$3,$6,$8,NULL);
													}
	|WHILE '('expr')'DO Slist ENDWHILE SEMICOLON{
													
													$$=Make_Node(TYPE_VOID,Node_Type_WHILE,'w',NULL,$3,$6,NULL,NULL);
												}
	;
	

expr:expr PLUS expr		{	
							$$=Make_Node(TYPE_VOID,Node_Type_PLUS,'+',NULL,$1,$3,NULL,NULL);
						}
	|expr MINUS expr	{
							
							$$=Make_Node(TYPE_VOID,Node_Type_MINUS,'-',NULL,$1,$3,NULL,NULL);
						}

	|expr DIV expr		{
							
							$$=Make_Node(TYPE_VOID,Node_Type_DIV,'/',NULL,$1,$3,NULL,NULL);
						}
	|expr MUL expr		{
							
							$$=Make_Node(TYPE_VOID,Node_Type_MUL,'*',NULL,$1,$3,NULL,NULL);
						}
	|expr POWER expr	{	
							
							$$=Make_Node(TYPE_VOID,Node_Type_POWER,'^',NULL,$1,$3,NULL,NULL);
						}
	|expr MODULUS expr	{
							
							$$=Make_Node(TYPE_VOID,Node_Type_MODULUS,'%',NULL,$1,$3,NULL,NULL);
						}
	|'('expr')'			{$$=$2;}
	|NUM				{$$=$1;}
	|IDS				{$$=$1; /*cout<<"IDS="<<evaluate($1->ptr2)<<endl;*/}
	|MINUS expr 		{
							
							$$=Make_Node(TYPE_VOID,Node_Type_MINUS,'-',NULL,makeLeafNode(0),$2,NULL,NULL);
						}
	|PLUS expr 			{
							
							$$=Make_Node(TYPE_VOID,Node_Type_PLUS,'+',NULL,makeLeafNode(0),$2,NULL,NULL);
						}
	|expr LESS expr		{
							
							$$=Make_Node(TYPE_BOOLEAN,Node_Type_LT,'<',NULL,$1,$3,NULL,NULL);
						}
	|expr LTEQUAL expr {
							
							$$=Make_Node(TYPE_BOOLEAN,Node_Type_LE,'L',NULL,$1,$3,NULL,NULL);
						}
	|expr GREATER expr {
							
							$$=Make_Node(TYPE_BOOLEAN,Node_Type_GT,'>',NULL,$1,$3,NULL,NULL);
						}
	|expr GTEQUAL expr {
							
							$$=Make_Node(TYPE_BOOLEAN,Node_Type_GE,'G',NULL,$1,$3,NULL,NULL);
						}
	|expr NOTEQUAL expr {
							
							$$=Make_Node(TYPE_BOOLEAN,Node_Type_NE,'N',NULL,$1,$3,NULL,NULL);
						}
	|expr ISEQUAL expr  {
							
							$$=Make_Node(TYPE_BOOLEAN,Node_Type_EQ,'E',NULL,$1,$3,NULL,NULL);
						}						
	|NOT expr 		{
							
							$$=Make_Node(TYPE_BOOLEAN,Node_Type_NOT,'L',NULL,$2,NULL,NULL,NULL);
						}						
	|expr OR expr 		{
							
							$$=Make_Node(TYPE_BOOLEAN,Node_Type_OR,'L',NULL,$1,$3,NULL,NULL);
						}
	|expr AND expr		{
							
							$$=Make_Node(TYPE_BOOLEAN,Node_Type_AND,'L',NULL,$1,$3,NULL,NULL);
						}
	|TRUE				{
							$$=Make_Node(TYPE_BOOLEAN,Node_Type_BOOLEAN_CONSTANT,1,NULL,$1,NULL,NULL,NULL);
						}
	|FALSE				{
							$$=Make_Node(TYPE_BOOLEAN,Node_Type_BOOLEAN_CONSTANT,0,NULL,$1,NULL,NULL,NULL);
						}
	;
IDS:ID 					{
							$$=Make_Node(TYPE_VOID,Node_Type_ARRAY,'A',$1->NAME,$1,makeLeafNode(1),NULL,NULL);
						}
	|ID'['expr']'		{
							//$$=$1;
							$$=Make_Node(TYPE_VOID,Node_Type_ARRAY,'A',$1->NAME,$1,$3,NULL,NULL);
							
						}
	;
TYPE:INTEGER   {$$=Make_Node(TYPE_INT,TYPE_INT,'T',NULL,NULL,NULL,NULL,NULL);}
	|BOOLEAN   {$$=Make_Node(TYPE_BOOLEAN,TYPE_BOOLEAN,'T',NULL,NULL,NULL,NULL,NULL);}
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