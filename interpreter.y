%{
	#include <iostream>
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include "exptree.hpp"
	extern 	int alphabet[200];
	extern 	int yyleng;
	using namespace std;
	int i;
	int yylex();
	int yyerror(char const *s);
%}

%token PLUS MINUS DIV MUL SEMICOLON READ WRITE EQUAL NUM ID MODULUS POWER
%token IF THEN ELSE ENDIF WHILE DO ENDWHILE
%token LESS LTEQUAL GREATER GTEQUAL ISEQUAL NOTEQUAL
%left MINUS PLUS
%left DIV MUL MODULUS
%right POWER
%nonassoc ASSIGNMENT NOTEQUAL ISEQUAL LESS LTEQUAL GREATER GTEQUAL

%%
Slist:Slist Stmt 	{
							evaluate($2);

							for (i = 0; i <=26; i++)
							{
								cout<<alphabet[i];
							}

				
						 cout<<"Complete"<<endl;
					}
	|Stmt			{evaluate($1);}
	;
Stmt:ID EQUAL expr SEMICOLON		{
										//cout<<"In Grammer\n";

										$$=makeStatementNode('=',ID,$1->value -'a',$1,$3,NULL);
										//makeOperatorNode('=',$1,$3);$$->value=$1->value - 'a';
										//$$=Make_Node(TYPE_VOID,ASSIGNMENT,$3->value,$1->NAME,$1,$3,NULL,NULL); 
										//cout<<"After Grammer\n";
										/*$$->value='=';*//*alphabet[$1->value - 'a']=evaluate($3);*/
									}
	|READ'('ID')'	SEMICOLON  		{$$=makeStatementNode('r',READ,$3->value - 'a',$3,NULL,NULL);/*$$=Make_Node(TYPE_VOID,READ,$3->value,NULL,$3,NULL,NULL,NULL);*//*cin>>alphabet[$3->value - 'a'];*/}
	|WRITE'('expr')' SEMICOLON		{/*cout<<($3->value)<<"\n";*/$$=makeStatementNode('w',WRITE,$3->value,$3,NULL,NULL);	/*$$=Make_Node(TYPE_VOID,WRITE,$3->value,$1->NAME,$3,NULL,NULL,NULL);*/
										/*cout<<evaluate($3)<<endl;*/}
	|IF '('expr')'THEN Slist ENDIF SEMICOLON{/*$$=Make_Node(TYPE_VOID,IF,IF,NULL,$3,$6,NULL,NULL);*/}
	|IF '('expr')'THEN Slist ELSE Slist ENDIF SEMICOLON{/*$$=Make_Node(TYPE_VOID,IF,IF,NULL,$3,$6,$8,NULL);*/}
	|WHILE '('expr')'DO Slist ENDWHILE SEMICOLON{/*$$=Make_Node(TYPE_VOID,WHILE,WHILE,NULL,$3,$6,NULL,NULL);*/}
	;
	// char *temp=(char *)malloc(6);strcpy(temp,"WRITE");temp[6]='\0';
// Make_Node(int type,int Node_Type,int value,char *NAME,struct tnode *ptr1,struct tnode *ptr2,struct tnode *ptr3,struct tnode *Arg_List)
expr:expr PLUS expr		{$$=makeOperatorNode('+',$1,$3);}
	|expr MINUS expr	{$$=makeOperatorNode('-',$1,$3);}
	|expr DIV expr		{$$=makeOperatorNode('/',$1,$3);}
	|expr MUL expr		{$$=makeOperatorNode('*',$1,$3);}
	|expr POWER expr	{$$=makeOperatorNode('^',$1,$3);}
	|expr MODULUS expr	{$$=makeOperatorNode('%',$1,$3);}
	|'('expr')'			{$$=$2;}
	|NUM				{$$=$1;}
	|ID					{$$=$1;}
	|MINUS expr 		{struct tnode *temp=(struct tnode *)malloc(sizeof(struct tnode)); temp->ptr1=NULL;temp->ptr2=NULL; temp->value=0; $$=makeOperatorNode('-',temp,$2);}
	|expr LESS expr {}
	|expr LTEQUAL expr {}
	|expr GREATER expr {}
	|expr GTEQUAL expr {}
	|expr NOTEQUAL expr {}
	|expr ISEQUAL expr {/*$$=Make_Node(TYPE_VOID,ISEQUAL,ISEQUAL,NULL,$1,$3,NULL,NULL);*/}
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