%{
	#include <iostream>
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include "exptree.hpp"
	using namespace std;
	extern 	int alphabet[200];
	extern 	int yyleng;
	extern struct Gsymbol *Gsymbol_table;
	// extern int Memory[1000];
	extern FILE *yyin;
	extern int no_of_error;
	int BP=1535;
	int SP=1535;
	int i;
	int yylex();
	char input_file_name[100],sim_code_filename[100];
	FILE *fp,*sim_code_file;
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
PROGRAM: GLOBAL_DEF_BLOCK FUNC_DEF_BLOCK MAIN_BLOCK {	
														if (no_of_error==0)
														{
															type_check($3);
															/*evaluate($3);*/
															codegen($3);
														}
													}

GLOBAL_DEF_BLOCK:DECL ENDDECL {$$=NULL;}
				|		{$$=NULL;}
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
									  // $2->type=$1->type;	
										Ginstall($2->NAME,$1->type,evaluate($2->ptr2),$2->value,NULL);
										
										
									}

// LOCAL_DEF_LIST:LOCAL_DEF_LIST LOCAL_DECL {}
			 	
// LOCAL_DECL:TYPE LID_LIST						{}
// LID_LIST:	ID	SEMICOLON						{}
// 		|ID [expr] SEMICOLON					{}


BODY: BEGIN1 Slist END 	{
							$$=$2;
							// evaluate($$);
							// 	<<"Memory"<<endl;
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
										//$1->type=$3->type;
										// if ($1->type==TYPE_VOID)
										// {
										// 	//cout<<"Glookup(ptr1->NAME)="<<Glookup($1->NAME)->TYPE<<endl;
										// 	$$=Make_Node(Glookup($1->NAME)->TYPE,Node_Type_ASSIGNMENT,'=',$1->NAME,$1,$3,NULL,NULL);
										// }
										// else
										// {
											//cout<<"expr Node_Type="<<$3->Node_Type<<endl;
											$$=Make_Node($1->type,Node_Type_ASSIGNMENT,'=',$1->NAME,$1,$3,NULL,NULL);
											// cout<<"ptr1="<<endl;
										//}
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
							// //if ($1->type==TYPE_VOID)
							// {
							// 	cout<<"Glookup(ptr1->NAME)="<<Glookup($3->NAME)->TYPE<<endl;
							// 	//$$=Make_Node(Glookup($1->NAME)->TYPE,Node_Type_ASSIGNMENT,'=',$1->NAME,$1,$3,NULL,NULL);
							// }
							//cout<<"ptr1->type="<<$1->type<<" ptr2->type="<<$3->type<<endl;
							$$=Make_Node(TYPE_INT,Node_Type_PLUS,'+',NULL,$1,$3,NULL,NULL);
						}
	|expr MINUS expr	{
							
							$$=Make_Node(TYPE_INT,Node_Type_MINUS,'-',NULL,$1,$3,NULL,NULL);
						}

	|expr DIV expr		{
							
							$$=Make_Node(TYPE_INT,Node_Type_DIV,'/',NULL,$1,$3,NULL,NULL);
						}
	|expr MUL expr		{
							
							$$=Make_Node(TYPE_INT,Node_Type_MUL,'*',NULL,$1,$3,NULL,NULL);
						}
	|expr POWER expr	{	
							
							$$=Make_Node(TYPE_INT,Node_Type_POWER,'^',NULL,$1,$3,NULL,NULL);
						}
	|expr MODULUS expr	{
							
							$$=Make_Node(TYPE_INT,Node_Type_MODULUS,'%',NULL,$1,$3,NULL,NULL);
						}
	|'('expr')'			{$$=$2;}
	|NUM				{$$=$1;}
	|IDS				{$$=$1; /*cout<<"IDS="<<evaluate($1->ptr2)<<endl;*/}
	|MINUS expr 		{
							
							$$=Make_Node(TYPE_INT,Node_Type_MINUS,'-',NULL,makeLeafNode(0),$2,NULL,NULL);
						}
	|PLUS expr 			{
							
							$$=Make_Node(TYPE_INT,Node_Type_PLUS,'+',NULL,makeLeafNode(0),$2,NULL,NULL);
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
							if (Glookup($1->NAME)!=NULL)
							{	
								if (Glookup($1->NAME)->size > 1)
								{
									yyerror(string("‘") + $1->NAME + "’ was declared as array.");
									no_of_error++;
								}	
							}
							$$=Make_Node(TYPE_VOID,Node_Type_ARRAY,'a',$1->NAME,$1,makeLeafNode(1),NULL,NULL);
							
						}
	|ID'['expr']'		{
							//$$=$1;
							if (Glookup($1->NAME)!=NULL)
							{	
								if (Glookup($1->NAME)->value=='a')
								{
									yyerror(string("‘") + $1->NAME + "’ is not a array.");
									no_of_error++;
								}	
							}
							$$=Make_Node(TYPE_VOID,Node_Type_ARRAY,'A',$1->NAME,$1,$3,NULL,NULL);
							
						}
	
	;
TYPE:INTEGER   {$$=Make_Node(TYPE_INT,TYPE_INT,'T',NULL,NULL,NULL,NULL,NULL);}
	|BOOLEAN   {$$=Make_Node(TYPE_BOOLEAN,TYPE_BOOLEAN,'T',NULL,NULL,NULL,NULL,NULL);}
	;

%%

int yyerror(string s)
{
	cout<<input_file_name<<":"<<yylineno<<":"<<column_no<<":"<<"error:"<<s<<endl;
	return 0;
}

int main(int argc,char const *argv[])
{	
	
	if (argc < 2)
	{
		cout<<"silc:fatal error: no input files\ncompilation terminated."<<endl;
		exit(-1);
	}
	else if (argc>1)
	{
		fp=fopen(argv[1],"r");
		strcpy(input_file_name,argv[1]);
		strcpy(sim_code_filename,argv[1]);
		change_extension(sim_code_filename);
		sim_code_file=fopen(sim_code_filename,"w");
		fprintf(sim_code_file, "START\n");
		//fprintf(sim_code_file, "MOV BP,1535\n");
		//fprintf(sim_code_file, "MOV SP,1535\n");
		yyin=fp;
	}
	
	yyparse();
	fprintf(sim_code_file, "HALT\n");
	fclose(sim_code_file);
	
	if (no_of_error!=0)
	{
		remove(sim_code_filename);
	}
	return 0;
}	