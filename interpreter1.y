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
%token BEGIN1 END MAIN INTEGER BOOLEAN RETURN
%token NOT OR AND
%token DECL ENDDECL
%token TRUE FALSE
%token DOT TYPEDEF	

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
PROGRAM: USER_DEFINED_DATATYPES GLOBAL_DEF_BLOCK FUNC_DEF_BLOCKS MAIN_BLOCK {		
														$$=Make_Node(Tlookup(VOID_NAME),Node_Type_DUMMY,'D',NULL,NULL,NULL,NULL,NULL);
														$$->ptr1=$4;
														$$->ptr2=$3;

														// while (!last_function_used_type_check.empty())
														// {
														// 	cout<<last_function_used_type_check.top()<<endl;
														// 	last_function_used_type_check.pop();
														// }
														cout<<"END"<<endl;
														if (no_of_error==0)
														{
															//type_check($$);
															/*evaluate($3);*/
															fprintf(sim_code_file, "START\n");
															fprintf(sim_code_file, "MOV BP,257\n");
															fprintf(sim_code_file, "MOV SP,257\n");
															fprintf(sim_code_file, "PUSH BP\n");
															fprintf(sim_code_file, "MOV R0,SP\n");
															fprintf(sim_code_file, "MOV R1,%d\n",get_global_var_no());
															fprintf(sim_code_file, "ADD R0,R1\n");
															fprintf(sim_code_file, "MOV SP,R0\n");
															fprintf(sim_code_file, "PUSH BP\n");
															fprintf(sim_code_file, "call main\n");
															fprintf(sim_code_file, "HALT\n");
															codegen($$);
														}
													}
USER_DEFINED_DATATYPES:TYPEDEF ID '{'GLOBAL_DEF_LISTS'}'		{}
						|										{}
						;
GLOBAL_DEF_BLOCK:DECL GLOBAL_DEF_LISTS ENDDECL {$$=$2;}
				|		{$$=NULL;}
				;


GLOBAL_DEF_LISTS:GLOBAL_DEF_LISTS GLOBAL_DECL 	{		
													$$=NULL;
												}
				|								{	
													$$=NULL;
												}
				;

GLOBAL_DECL:TYPE G_ID_LIST SEMICOLON 		{	
												struct tnode *temp = new tnode;
												temp=$2;
												while (temp!=NULL)
												{	
													//cout<<"NAME="<<temp->NAME<<" TYPE="<<$1->type<<endl;
													if (temp->value == 'f')
													{
														//cout<<"NAME = "<<temp->NAME<<endl;
														// cout<<"NAME="<<temp->Lentry->Next->NAME<<endl;
														Ginstall(temp->NAME,$1->type,evaluate(temp->ptr2),temp->value,temp);
														// struct Lsymbol *temp_2 = new Lsymbol;

														// temp_2 =Glookup(temp->NAME)->Lentry;

														// while(temp_2!=NULL)
														// {
														// 	cout<<"temp f = "<<temp_2->NAME<<" type = "<<temp_2->TYPE<<endl;
														// 	temp_2 = temp_2->Next;
														// }
														// cout<<"size = "<<sizeof(struct Gsymbol)<<endl;

													}
													else
													{
														Ginstall(temp->NAME,$1->type,evaluate(temp->ptr2),temp->value,NULL);
													}
													temp=temp->Arg_List;
												}
												delete temp;

											}

G_ID_LIST : G_ID_LIST ',' G_ID 				{	
												$$=$3;
												$$->Arg_List=$1;

											}
			|G_ID 							{	
												$$=$1;
												if ($$==NULL)
												{
													$$ = new tnode;
												}
												$$->Arg_List=NULL;
												
											}
			;
G_ID:IDS									{
												$$=$1;
											}
	 |ID'('ARGS')'							{
	 											// $$=$1;
												$$=Make_Node(get_type($1),Node_Type_ARRAY,'f',$1->NAME,$1,makeLeafNode(1),NULL,$3);
												// $$->Lentry = new Lsymbol;	
												$$->Lentry = $3->Lentry;
												//cout<<"NAME="<<$3->Lentry->NAME<<endl;
											}
	;

// PARAM:	PARAM ',' ARGS	{}
// 		|PARAM				{}
// 		|					{}
// 		;
ARGS:ARGS SEMICOLON ARG 	{
						//$$=$3;
						//$$->Arg_List=$1;
						$$->Lentry = Make_Arg_Node_List($1->Lentry,$3->Lentry,'A');
					}
	| ARG			{	
						//$$=$1;
						if ($$==NULL)
						{
							$$ = new tnode;
						}
						//$$->Arg_List=$1;
						$$->Lentry = Make_Arg_Node_List($1->Lentry,NULL,'A');

					}
	|				{$$->Lentry = NULL;}
	;

					
												
ARG:TYPE L_ID_LIST 	{

						struct Lsymbol *temp= new Lsymbol;
						temp = $2->Lentry;
						while (temp!=NULL)
						{
							temp->TYPE=$1->type;

							temp=temp->Next;
						}
						delete temp;

						$$=$2;
						$$->Lentry = $2->Lentry;

					}
	// |			{$$->Lentry = NULL;}

// FL_ID_LIST : FL_ID_LIST ',' FL_ID 				{	
// 												// $$->Lentry=$3->Lentry;
// 												// $$->Lentry->Next=$1->Lentry;
// 												$$->Lentry = Make_Arg_Node_List($1->Lentry,$3->Lentry,'V');

// 											}
// 			|FL_ID 							{	
// 												// $$->Lentry = $1->Lentry;
// 												// $$->Lentry->Next = NULL;
// 												$$->Lentry = Make_Arg_Node_List($1->Lentry,NULL,'V');
												
// 											}
// 			;

FUNC_DEF_BLOCKS: FUNC_DEF_BLOCKS FUNC_DEF_BLOCK 						{
																			//$$=$1;
																			$$=Make_Node(Tlookup(VOID_NAME),Node_Type_DUMMY,'D',NULL,NULL,NULL,NULL,NULL);
																			$$->ptr1=$1;
																			$$->ptr2=$2;
																		}
				|														{$$=NULL;}
				;
FUNC_DEF_BLOCK:	FUNC_NAME_ARG_LOCAL BODY'}' {	
												/**
													This makes the funtion node $$->Lentry points to the local symbol table 
													of the respective function.
												**/
												// $$->Arg_List->Arg_List->Lentry = $1->Arg_List->Lentry;
												Glookup($1->NAME)->BODY = $2; //For storing the fuction body
												$$=Make_Node($1->type,Node_Type_FUNCTION_DEF,'f',$1->NAME,$2,NULL,NULL,$1->Arg_List);
												// $$->Lentry = Make_Arg_Node_List($7->Lentry,$4->Lentry);
												// Glookup($2->NAME)->Arg_List->Lentry = $$->Lentry;
												// last_function_used_type_check.push(($2->NAME));

												// if ($7!=NULL)
												// {
												// 	$$->Lentry = $7->Lentry; 
												// }

												// struct Lsymbol *temp= new Lsymbol;
												// temp = $1->Arg_List->Lentry;
												// while (temp!=NULL)
												// {
												// 	cout<<"type=" <<temp->TYPE<<" NAME = "<<temp->NAME<<endl;
											
												// 	temp=temp->Next;
												// }
												// delete temp;
												// struct Lsymbol *temp = new Lsymbol;
												// temp = $1->Arg_List->Lentry;
												// while (temp != NULL)
												// {

												// 	// if (lookup_variable($1->NAME,temp->NAME)!=NULL)
												// 	// {
												// 	// 	cout<<"change"<<endl;
												// 	// 	temp->TYPE = lookup_variable($1->NAME,temp->NAME)->TYPE;
												// 	// cout<<"		type="<<temp->TYPE<<" NAME2="<<temp->NAME<<endl;
												// 	// }
												// 	cout<<"		type="<<temp->TYPE<<" NAME2="<<temp->NAME<<endl;
												// 	temp = temp->Next;
												// }
												// last_function_used_type_check.pop();

											}
				;

FUNC_NAME_ARG_LOCAL: TYPE ID '('ARGS ')' '{' LOCAL_DEF_BLOCK 	
											{	

	
												if ($$ == NULL)
												{
													$$ = new tnode;
												}
												$$->type = $1->type;
												$$->NAME = $2->NAME;
												$$->Arg_List = $4;

												$7->Lentry = Mark_Variables_local($7->Lentry);

												$$->Lentry = Make_Arg_Node_List($7->Lentry,$4->Lentry,'V');
												Glookup($2->NAME)->Local = $$->Lentry;
												// Glookup($2->NAME)->Arg_List->Lentry = $$->Lentry;									
												last_function_used_type_check.push(($2->NAME));
												
											}

MAIN_BLOCK:MAIN_NAME_ARG_LOCAL BODY '}' 
											{	
												/**
													This makes the funtion node $$->Lentry points to the local symbol table 
													of the respective function.
													for main funtion there is no need to have the definiations in the global
													declaration.for that we need to install main function in the global symbol 
													table.
												**/

												Glookup($1->NAME)->BODY = $2; //For storing the fuction body
												$$=Make_Node(Tlookup(INTEGER_NAME),Node_Type_FUNCTION_DEF,'f',$1->NAME,$2,NULL,NULL,$1->Arg_List);
												// $$->Lentry = Make_Arg_Node_List($7->Lentry,$4->Lentry);
												// Glookup($2->NAME)->Arg_List->Lentry = $$->Lentry;
												// last_function_used_type_check.push(($2->NAME));

												// if ($7!=NULL)
												// {
												// 	$$->Lentry = $7->Lentry; 
												// }
												// last_function_used_type_check.pop();


											}
			|								{
												yyerror("‘main’ funtion is not defined in this scope.");
											}
			;

MAIN_NAME_ARG_LOCAL: INTEGER MAIN '(' ARGS')' 
					'{' LOCAL_DEF_BLOCK 	
											{	
												if ($4->Lentry!=NULL)
												{
													cout<<input_file_name<<":"<<$4->Lentry->line_no<<":"<<$4->Lentry->col_no<<":"<<"error:"<<"main funtion can not have any arguments"<<endl;
													no_of_error++;
												}

												//$$=$7;/*evaluate($$);*/
												// $2->NAME="main";
												
												if ($2->NAME ==  NULL)
												{
													$2->NAME = (char *)malloc(20*sizeof(char));
												}
												strcpy($2->NAME,"main");
												Ginstall($2->NAME,Tlookup(INTEGER_NAME),1,'f',$4);
												if ($$ == NULL)
												{
													$$ = new tnode;
												}
												$$->type = $1->type;

												$$->NAME = $2->NAME;
												$$->Arg_List = $4;

												$7->Lentry = Mark_Variables_local($7->Lentry);

												$$->Lentry = Make_Arg_Node_List($7->Lentry,$4->Lentry,'V');
												Glookup($2->NAME)->Local = $$->Lentry;
												// Glookup($2->NAME)->Arg_List->Lentry = $$->Lentry;
											//	Glookup($2->NAME)->Arg_List->Arg_List = new tnode;
												// Glookup($2->NAME)->Arg_List->Arg_List = $4;									
												last_function_used_type_check.push(($2->NAME));
												cout<<"After main Local"<<endl;
											}
LOCAL_DEF_BLOCK:DECL LOCAL_DEF_LISTS ENDDECL	{	
													// $$ = $2;
													if ($$ == NULL)
													{
														$$ = new tnode;
													}
													$$->Lentry = $2->Lentry;
													// Glookup(last_function_used_type_check.top())->Arg_List->Lentry->Next = $$->Lentry;

												}
				|								{	
													// $$ = NULL;
													$$->Lentry = NULL;
												}
				;


LOCAL_DEF_LISTS:LOCAL_DEF_LISTS  LOCAL_DECL 	{	
													//$1->Lentry->Next = $2->Lentry;
													//$$ = $1;
													$$->Lentry = Make_Arg_Node_List($2->Lentry,$1->Lentry,'V');
													// Glookup(last_function_used_type_check.top())->Arg_List->Lentry->Next = $$->Lentry;
												}

				|								{
													if ($$ == NULL)
													{
														$$ = new tnode;
													}
													// if ($$->Lentry == NULL)
													// {
													// 	$$->Lentry = new Lsymbol;
													// }
													$$->Lentry = NULL;
												}
				;

LOCAL_DECL:TYPE L_ID_LIST SEMICOLON	{	
												struct Lsymbol *temp= new Lsymbol;
												temp = $2->Lentry;
												while (temp!=NULL)
												{
													temp->TYPE=$1->type;
													// cout<<"evaluate="<<evaluate(temp->ptr2)<<endl;
													//cout<<"Value="<<char(temp->value)<<endl;
													// cout<<"NAME="<<temp->NAME<<endl;
													//cout<<"type=" <<temp->TYPE<<" NAME = "<<temp->NAME<<endl;
													//Ginstall(temp->NAME,$1->type,evaluate(temp->ptr2),temp->value,NULL);
													//if (temp->value!='A')
													{
														// /Linstall(temp->NAME,$1->type);
													}
													
													temp=temp->Next;
												}
												delete temp;

												$$=$2;
											}

L_ID_LIST : L_ID_LIST ',' L_ID 				{	
												// $$->Lentry=$3->Lentry;
												// $$->Lentry->Next=$1->Lentry;
												$$->Lentry = Make_Arg_Node_List($1->Lentry,$3->Lentry,'V');

											}
			|L_ID 							{	
												// $$->Lentry = $1->Lentry;
												// $$->Lentry->Next = NULL;
												$$->Lentry = Make_Arg_Node_List($1->Lentry,NULL,'V');
												
											}
			;
L_ID:ID									{
											if (Glookup($1->NAME)!=NULL)
											{	
												if (Glookup($1->NAME)->size > 1)
												{
													yyerror(string("‘") + $1->NAME + "’ was declared as array.");
												}	
											}
											$$=Make_Node(Tlookup(VOID_NAME),Node_Type_ARRAY,'a',$1->NAME,$1,makeLeafNode(1),NULL,NULL);
											$$->Lentry = Make_Arg_Node($1->NAME,Tlookup(VOID_NAME),1,PASS_BY_VALUE);
											$$->Lentry->Next = NULL;
										}
	| '&' ID							{
											if (Glookup($1->NAME)!=NULL)
											{	
												if (Glookup($1->NAME)->size > 1)
												{
													yyerror(string("‘") + $1->NAME + "’ was declared as array.");
												}	
											}
											$$=Make_Node(Tlookup(VOID_NAME),Node_Type_ARRAY,'a',$2->NAME,$2,makeLeafNode(1),NULL,NULL);
											$$->Lentry = Make_Arg_Node($2->NAME,Tlookup(VOID_NAME),1,PASS_BY_REFERENCE);
											$$->Lentry->Next = NULL;
										}
	|ID'['expr']'						{
											yyerror("Array" + string(" ‘") + $1->NAME + "’ should be declared as global.");
											$$=Make_Node(Tlookup(VOID_NAME),Node_Type_ARRAY,'A',$1->NAME,$1,$3,NULL,NULL);
											$$->Lentry = Make_Arg_Node($1->NAME,Tlookup(VOID_NAME),2,PASS_BY_VALUE);
											$$->Lentry->Next = NULL;
										}
	;		
// LOCAL_DEF_LISTS:LOCAL_DEF_LISTS LOCAL_DEF_LIST 	{		

// 													$$=Make_Node(TYPE_VOID,Node_Type_DUMMY,'D',NULL,NULL,NULL,NULL,NULL);
// 													$$->ptr1=$1;
// 													$$->ptr2=$2;

// 												}
// 				|LOCAL_DEF_LIST					{$$=$1;}
	
				;
// LOCAL_DEF_LIST:	TYPE IDS SEMICOLON {	
// 									  // $2->type=$1->type;	
// 										Ginstall($2->NAME,$1->type,evaluate($2->ptr2),$2->value,NULL);
										
										
// 									}

// LOCAL_DEF_LIST:LOCAL_DEF_LIST LOCAL_DECL {}
			 	
// LOCAL_DECL:TYPE LID_LIST						{}
// LID_LIST:	ID	SEMICOLON						{}
// 		|ID [expr] SEMICOLON					{}


BODY: BEGIN1 Slist RETURN_TYPE END 	{
										//$$=$2;
										$$=Make_Node(Tlookup(VOID_NAME),Node_Type_DUMMY,'D',NULL,NULL,NULL,NULL,NULL);
										$$->ptr1=$2;
										$$->ptr2=$3;
										// evaluate($$);
										cout<<"In body"<<endl;
										// 	<<"Memory"<<endl;
										// for (int i = 0; i < 20; i++)
										// {
										// 	cout<<i<<" "<<Memory[i]<<" "<<endl;
										// }
										// exit(0);
									}
RETURN_TYPE:RETURN expr SEMICOLON	{	
										cout<<"IN return"<<endl;
										//cout<<"Node_Type="<<$2->Node_Type<<endl;
										if ($2->Node_Type == Node_Type_ARRAY)
										{
											if (lookup_variable(last_function_used_type_check.top(),$2->NAME) != NULL)
											{
												$2->type = lookup_variable(last_function_used_type_check.top(),$2->NAME)->TYPE;
											}
											else if(Glookup($2->NAME) != NULL)
											{
												$2->type = Glookup($2->NAME)->TYPE;
											}
											// $2->type = get_type($2);
											// cout<<$2->type<<endl;
										}
										$$=Make_Node($2->type,Node_Type_RETURN,'R',NULL,$2,NULL,NULL,NULL);
									}

Slist: Stmts	{$$=$1; cout<<"IN Slist"<<endl;}
	 | 			{$$=NULL;}
Stmts:Stmts Stmt 	{		

							$$=Make_Node(Tlookup(VOID_NAME),Node_Type_DUMMY,'D',NULL,NULL,NULL,NULL,NULL);
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

										// if ($3->value == 'c')
										// {
										// 	struct Lsymbol *temp = new Lsymbol;
										// 	temp = $3->Arg_List->Lentry;
										// 	while (temp != NULL)
										// 	{

										// 		// if (lookup_variable($1->NAME,temp->NAME)!=NULL)
										// 		// {
										// 		// 	cout<<"change"<<endl;
										// 		// 	temp->TYPE = lookup_variable($1->NAME,temp->NAME)->TYPE;
										// 		// cout<<"		type="<<temp->TYPE<<" NAME2="<<temp->NAME<<endl;
										// 		// }
										// 		cout<<"		type="<<temp->TYPE<<" NAME2="<<temp->NAME<<endl;
										// 		temp = temp->Next;
										// 	}
										// }
									}
	// |TYPE IDS SEMICOLON {

	// 									//$$=Make_Node(TYPE_VOID,Node_Type_ASSIGNMENT,'=',$1->NAME,$1,$2,NULL,NULL);
	// 									Ginstall($2->NAME,$1->Node_Type,evaluate($2->ptr2),NULL);
	// 									//cout<<"size="<<evaluate($2->ptr2)<<endl;
	// 								}
	|READ'('IDS')'	SEMICOLON  		{
										
										$$=Make_Node(Tlookup(VOID_NAME),Node_Type_READ,'r',NULL,$3,NULL,NULL,NULL);
									}
	|WRITE'('expr')' SEMICOLON		{	
										cout<<"In write"<<endl;
										$$=Make_Node(Tlookup(VOID_NAME),Node_Type_WRITE,'W',NULL,$3,NULL,NULL,NULL);
									}
	|IF '('expr')'THEN Slist ENDIF SEMICOLON{
												
												$$=Make_Node(Tlookup(VOID_NAME),Node_Type_IF,'i',NULL,$3,$6,NULL,NULL);
											}
	|IF '('expr')'THEN Slist ELSE Slist ENDIF SEMICOLON{	
														
														$$=Make_Node(Tlookup(VOID_NAME),Node_Type_IF,'I',NULL,$3,$6,$8,NULL);
													}
	|WHILE '('expr')'DO Slist ENDWHILE SEMICOLON{
													
													$$=Make_Node(Tlookup(VOID_NAME),Node_Type_WHILE,'w',NULL,$3,$6,NULL,NULL);
	
												}
	|ID '('ID_LIST')' SEMICOLON		{
										// $$=NULL;
										// if (Glookup($1->NAME) != NULL)
										// {
										// 	if (Glookup($1->NAME)->Local == NULL)
										// 	{
										// 		yyerror(string("Definiation of function named ‘") + $1->NAME + "’ does not exist in this scope.");
										// 	}
										// }
										// if ((strcmp($3->Arg_List->NAME ,last_function_used_type_check.top())) != 0)
										// {
										// 	cout<<"NULL"<<endl;
										// }

										$$=Make_Node(get_type($1),Node_Type_FUNCTION_CALL,'c',$1->NAME,$3,NULL,NULL,$3);

									}
	;
	

expr:expr PLUS expr		{	
							// //if ($1->type==TYPE_VOID)
							// {
							// 	cout<<"Glookup(ptr1->NAME)="<<Glookup($3->NAME)->TYPE<<endl;
							// 	//$$=Make_Node(Glookup($1->NAME)->TYPE,Node_Type_ASSIGNMENT,'=',$1->NAME,$1,$3,NULL,NULL);
							// }
							//cout<<"ptr1->type="<<$1->type<<" ptr2->type="<<$3->type<<endl;
							$$=Make_Node(Tlookup(INTEGER_NAME),Node_Type_PLUS,'+',NULL,$1,$3,NULL,NULL);
						}
	|expr MINUS expr	{
							
							$$=Make_Node(Tlookup(INTEGER_NAME),Node_Type_MINUS,'-',NULL,$1,$3,NULL,NULL);
						}

	|expr DIV expr		{
							
							$$=Make_Node(Tlookup(INTEGER_NAME),Node_Type_DIV,'/',NULL,$1,$3,NULL,NULL);
						}
	|expr MUL expr		{
							
							$$=Make_Node(Tlookup(INTEGER_NAME),Node_Type_MUL,'*',NULL,$1,$3,NULL,NULL);
						}
	|expr POWER expr	{	
							
							$$=Make_Node(Tlookup(INTEGER_NAME),Node_Type_POWER,'^',NULL,$1,$3,NULL,NULL);
						}
	|expr MODULUS expr	{
							
							$$=Make_Node(Tlookup(INTEGER_NAME),Node_Type_MODULUS,'%',NULL,$1,$3,NULL,NULL);
						}
	|'('expr')'			{$$=$2;$$->type=$2->type;}
	|NUM				{cout<<"IN NUM"<<endl;$$=$1;$$->type=$1->type;}
	|IDS				{$$=$1; $$->type=$1->type;/*cout<<"IDS="<<evaluate($1->ptr2)<<endl;*/}
	|MINUS expr 		{
							
							$$=Make_Node(Tlookup(INTEGER_NAME),Node_Type_MINUS,'-',NULL,makeLeafNode(0),$2,NULL,NULL);
						}
	|PLUS expr 			{
							
							$$=Make_Node(Tlookup(INTEGER_NAME),Node_Type_PLUS,'+',NULL,makeLeafNode(0),$2,NULL,NULL);
						}
	|expr LESS expr		{
							
							$$=Make_Node(Tlookup(BOOLEAN_NAME),Node_Type_LT,'<',NULL,$1,$3,NULL,NULL);
						}
	|expr LTEQUAL expr {
							
							$$=Make_Node(Tlookup(BOOLEAN_NAME),Node_Type_LE,'L',NULL,$1,$3,NULL,NULL);
						}
	|expr GREATER expr {
							
							$$=Make_Node(Tlookup(BOOLEAN_NAME),Node_Type_GT,'>',NULL,$1,$3,NULL,NULL);
						}
	|expr GTEQUAL expr {
							
							$$=Make_Node(Tlookup(BOOLEAN_NAME),Node_Type_GE,'G',NULL,$1,$3,NULL,NULL);
						}
	|expr NOTEQUAL expr {
							
							$$=Make_Node(Tlookup(BOOLEAN_NAME),Node_Type_NE,'N',NULL,$1,$3,NULL,NULL);
						}
	|expr ISEQUAL expr  {
							
							$$=Make_Node(Tlookup(BOOLEAN_NAME),Node_Type_EQ,'E',NULL,$1,$3,NULL,NULL);
						}						
	|NOT expr 		{
							
							$$=Make_Node(Tlookup(BOOLEAN_NAME),Node_Type_NOT,'L',NULL,$2,NULL,NULL,NULL);
						}						
	|expr OR expr 		{
							
							$$=Make_Node(Tlookup(BOOLEAN_NAME),Node_Type_OR,'L',NULL,$1,$3,NULL,NULL);
						}
	|expr AND expr		{
							
							$$=Make_Node(Tlookup(BOOLEAN_NAME),Node_Type_AND,'L',NULL,$1,$3,NULL,NULL);
						}
	|TRUE				{
							$$=Make_Node(Tlookup(BOOLEAN_NAME),Node_Type_BOOLEAN_CONSTANT,1,NULL,$1,NULL,NULL,NULL);

						}
	|FALSE				{
							$$=Make_Node(Tlookup(BOOLEAN_NAME),Node_Type_BOOLEAN_CONSTANT,0,NULL,$1,NULL,NULL,NULL);

						}
	|ID '('ID_LIST')'	{	
							// cout<<"Arg_List = "<<$3->Arg_List<<endl;
							$$=Make_Node(get_type($1),Node_Type_FUNCTION_CALL,'c',$1->NAME,$3,NULL,NULL,$3);
							// cout<<"Arg_List = "<<$3->Lentry->TYPE<<endl;
							// cout<<"ptr1 = "<<$$->Arg_List<<endl;
							// lookup_variable("hello","w");
							// cout<<"$1->NAME = "<<$1->NAME<<endl;
							// cout<<"last_function_used_type_check = "<<last_function_used_type_check.top()<<endl;
							


							// struct tnode *temp = new tnode;
							// temp = $$->Arg_List;
							// // temp = Glookup(last_function_used_type_check.top())->Local;
							// while (temp != NULL)
							// {

							// 	if (lookup_variable(last_function_used_type_check.top(),temp->NAME)!=NULL)
							// 	{
							// 		// cout<<"change"<<endl;
							// 		temp->TYPE = lookup_variable(last_function_used_type_check.top(),temp->NAME)->TYPE;
							// 		cout<<"		type="<<temp->type<<" NAME2="<<temp->Node_Type<<endl;
							// 	}
							// 	else
							// 	{
							// 		// cout<<"change2"<<endl;
							// 		temp->TYPE = Glookup(temp->NAME)->TYPE;
							// 		// cout<<"		type="<<temp->TYPE<<" NAME2="<<temp->NAME<<endl;
							// 	}
							// 	cout<<"		type="<<temp->TYPE<<" NAME2="<<temp->NAME<<endl;
							// 	temp = temp->Arg_List;
							// }


						}
	;

ID_LIST: ID_LIST ',' expr		{
								$$=new tnode;
									
								if ($3->Node_Type == Node_Type_ARRAY)
								{	
									if (lookup_variable(last_function_used_type_check.top(),$3->NAME) != NULL)
									{
										// $3->Lentry->TYPE = lookup_variable(last_function_used_type_check.top(),$3->NAME)->TYPE;
										$3->type = lookup_variable(last_function_used_type_check.top(),$3->NAME)->TYPE;
										// $3->type = lookup_variable(last_function_used_type_check.top(),$3->NAME)->TYPE;
										// cout<<lookup_variable(last_function_used_type_check.top(),$1->NAME)->TYPE<<endl;
									}
									else if (Glookup($3->NAME)->size > 1)
									{
										// yyerror("Array" + string(" ‘") + $3->NAME + "’ can not be passed to the function.");
									}
								}
								// $$->Lentry = Make_Arg_Node_List($3->Lentry,$1->Lentry,'c');
								// cout<<"Node_Type2 = "<<$3->type<<endl;
								$$ = $1;
								// $1->Arg_List = $3;
								struct tnode *temp = new tnode;
								temp = $1;
								// cout<<$3->NAME<<endl;
								while (temp->Arg_List != NULL)
								{
									// cout<<"temp = "<<temp->Node_Type<<endl;
									temp = temp->Arg_List;
								}
								// temp->Arg_List = new tnode;
								temp->Arg_List = $3;
								// $3->Arg_List = $1;
								// $$->Arg_List = $3;
								// $3->Arg_List = NULL;
								// cout<<$3->NAME<<endl;
							}
		| expr				{
								$$=new tnode;
								if ($1->Node_Type == Node_Type_ARRAY)
								{
									if (lookup_variable(last_function_used_type_check.top(),$1->NAME) != NULL)
									{
									// cout<<"In FUNC_ARG"<<endl;
									// cout<<"Node_Type = "<<char($1->value)<<endl;
										// $1->Lentry->TYPE = lookup_variable(last_function_used_type_check.top(),$1->NAME)->TYPE;
										$1->type = lookup_variable(last_function_used_type_check.top(),$1->NAME)->TYPE;
									// $1->type = lookup_variable(last_function_used_type_check.top(),$1->NAME)->TYPE;
									// cout<<lookup_variable(last_function_used_type_check.top(),$1->NAME)->TYPE<<endl;
									}
									else if ($1->Node_Type == Node_Type_ARRAY && Glookup($1->NAME)->size > 1)
									{
										// yyerror("Array" + string(" ‘") + $1->NAME + "’ can not be passed to the function.");
									}
								}
								//$$=NULL;
								// $$->Lentry = Make_Arg_Node_List($1->Lentry,NULL,'c');
								// $$->Lentry = Make_Arg_Node($1->NAME,get_type($1),1,LOCAL_VARIABLE);
								// cout<<"Node_Type = "<<$1->type<<endl;
								// cout<<$1->NAME<<endl;
								// $$ = $1;
								// $1->Arg_List = NULL;
								$$ = $1;

							}
		|					{	
								// $$->Lentry = NULL;
								$$->Arg_List = NULL;
							}

		;
// FUNC_ARG: IDS 				{
// 								$$=new tnode;
// 								//$$=NULL;										
// 								// $1->type =get_type($1);		
// 								if (lookup_variable(last_function_used_type_check.top(),$1->NAME) != NULL)
// 								{
// 									$1->Lentry->TYPE = lookup_variable(last_function_used_type_check.top(),$1->NAME)->TYPE;
// 								}
// 								// cout<<"NAME_Arg = "<<$1->Lentry->TYPE<<endl;
// 								$$->Lentry = Make_Arg_Node_List($1->Lentry,NULL,'c');
// 								// cout<<"NAME = "<< $1->Lentry<<endl;

// 							}

// 		| FUNC_ARG ',' IDS	{
// 								$$=new tnode;
// 								//$$=NULL;
// 								// $3->type =get_type($3);	
// 								// cout<<"last_function_used_type_check = "<<last_function_used_type_check.top()<<endl;
// 								if (lookup_variable(last_function_used_type_check.top(),$3->NAME) != NULL)
// 								{
// 									$3->Lentry->TYPE = lookup_variable(last_function_used_type_check.top(),$3->NAME)->TYPE;
// 								}
// 								// cout<<"NAME_Arg = "<<$3->Lentry->TYPE<<endl;
// 								$$->Lentry = Make_Arg_Node_List($1->Lentry,$3->Lentry,'c');
// 								// cout<<"NAME = "<< $1->Lentry<<endl;
// 								// if ($1 == NULL)
// 								// {
// 								// 	cout<<"NULL"<<endl;
// 								// }

// 							}
		// |FUNC_ARG ',' NUM	{
		// 						// cout<<"IN NUM"<<endl;
		// 						$$=new tnode;
		// 						$$=$1;$$->type=$1->type;
		// 						//$$=NULL;
		// 						// $3->type =get_type($3);	
		// 						// cout<<"last_function_used_type_check = "<<last_function_used_type_check.top()<<endl;
		// 						// if (lookup_variable(last_function_used_type_check.top(),$3->NAME) != NULL)
		// 						// {
		// 						// 	$3->Lentry->TYPE = lookup_variable(last_function_used_type_check.top(),$3->NAME)->TYPE;
		// 						// }
		// 						// cout<<"NAME_Arg = "<<$3->Lentry->TYPE<<endl;
		// 						$$->Lentry = Make_Arg_Node_List($1->Lentry,$3->Lentry,'c');
		// 					}
		// |NUM				{
		// 						$$=new tnode;
		// 						//$$=NULL;										
		// 						// $1->type =get_type($1);		
		// 						// if (lookup_variable(last_function_used_type_check.top(),$1->NAME) != NULL)
		// 						// {
		// 						// 	$1->Lentry->TYPE = lookup_variable(last_function_used_type_check.top(),$1->NAME)->TYPE;
		// 						// }
		// 						// cout<<"NAME_Arg = "<<$1->Lentry->TYPE<<endl;
		// 						$$->Lentry = Make_Arg_Node_List($1->Lentry,NULL,'c');
		// 					}

IDS:ID 					{	
							if (Glookup($1->NAME)!=NULL)
							{	
								if (Glookup($1->NAME)->size > 1)
								{
									yyerror(string("‘") + $1->NAME + "’ was declared as array.");
								}	
							}
							$$=Make_Node(get_type($1),Node_Type_ARRAY,'a',$1->NAME,$1,makeLeafNode(1),NULL,NULL);
							$$->Lentry = Make_Arg_Node($1->NAME,get_type($1),1,LOCAL_VARIABLE);
							$$->Lentry->Next = NULL;
						}
	|ID'['expr']'		{
							if (Glookup($1->NAME)!=NULL)
							{	
								if (Glookup($1->NAME)->value=='a')
								{
									yyerror(string("‘") + $1->NAME + "’ is not a array.");
								}	
							}
							$$=Make_Node(get_type($1),Node_Type_ARRAY,'A',$1->NAME,$1,$3,NULL,NULL);
							$$->Lentry = Make_Arg_Node($1->NAME,get_type($1),1,LOCAL_VARIABLE);
							$$->Lentry->Next = NULL;
						}
	|ID DOT ID 			{}
	
	;
TYPE:INTEGER	{$$=Make_Node(Tlookup(INTEGER_NAME),TYPE_INT,'T',NULL,NULL,NULL,NULL,NULL); }
	|BOOLEAN	{$$=Make_Node(Tlookup(BOOLEAN_NAME),TYPE_BOOLEAN,'T',NULL,NULL,NULL,NULL,NULL);}
	|ID			{}
	;

%%

int yyerror(string s)
{
	cout<<input_file_name<<":"<<yylineno<<":"<<column_no<<":"<<"error:"<<s<<endl;
	no_of_error++;
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
		


		//fprintf(sim_code_file, "MOV BP,1535\n");
		//fprintf(sim_code_file, "MOV SP,1535\n");
		yyin=fp;
	}
	

	/**Main function name is pushed into the last_function_used_type_check stack for type_check**/

	Typetable_Crate();
	char *main = (char *)malloc(20*sizeof(char));
	strcpy(main,"main");
	last_function_used_type_check.push(main);
	
	// Tlookup(INTEGER_NAME);
	cout<<"IN"<<endl;
	// cout<<"Tlookup = "<<Tlookup(INTEGER_NAME)<<endl;
	yyparse();
	// cout<<"OUT"<<endl;
	fclose(sim_code_file);
	
	if (no_of_error!=0)
	{
		remove(sim_code_filename);
	}
	return 0;
}	