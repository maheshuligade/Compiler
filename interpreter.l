%{
	#include <iostream>
	#include <stdio.h>
	#include "exptree.hpp"
	#include "y.tab.hpp"
	using namespace std;
	int yyerror(string s);
	int number;
	int column_no=0;
	struct tnode *a;

%}

%%
[0-9]+			{column_no+=yyleng;  number=atoi(yytext); yylval=makeLeafNode(number);yylval->type=Tlookup(VOID_NAME); yylval->type=Tlookup(INTEGER_NAME); yylval->NAME = yytext; return NUM;}
"+"				{column_no+=yyleng; return PLUS;}
"-"				{column_no+=yyleng; return MINUS;}
"/"				{column_no+=yyleng; return DIV;}
"*"				{column_no+=yyleng; return MUL;}
"="				{column_no+=yyleng; return EQUAL;}
"\n"			{yylineno++;column_no=0;}
"\t"			{column_no+=yyleng; }
"read" 			{column_no+=yyleng; a=Make_Node(Tlookup(ID_NAME),ID,*yytext - 'a',yytext,NULL,NULL,NULL,NULL);;yylval=a; return READ;}
"write"			{column_no+=yyleng; a=Make_Node(Tlookup(ID_NAME),ID,*yytext - 'a',yytext,NULL,NULL,NULL,NULL);;yylval=a;  return WRITE;}
";"				{column_no+=yyleng; a=Make_Node(Tlookup(ID_NAME),ID,*yytext - 'a',yytext,NULL,NULL,NULL,NULL);;yylval=a; return SEMICOLON;}
"("				{column_no+=yyleng; a=Make_Node(Tlookup(ID_NAME),ID,*yytext - 'a',yytext,NULL,NULL,NULL,NULL);;yylval=a; return *yytext;}
")"				{column_no+=yyleng; a=Make_Node(Tlookup(ID_NAME),ID,*yytext - 'a',yytext,NULL,NULL,NULL,NULL);;yylval=a; return *yytext;}
"{"				{column_no+=yyleng; a=Make_Node(Tlookup(ID_NAME),ID,*yytext - 'a',yytext,NULL,NULL,NULL,NULL);;yylval=a; return *yytext;}
"}"				{column_no+=yyleng; a=Make_Node(Tlookup(ID_NAME),ID,*yytext - 'a',yytext,NULL,NULL,NULL,NULL);;yylval=a; return *yytext;}
"["				{column_no+=yyleng; a=Make_Node(Tlookup(ID_NAME),ID,*yytext - 'a',yytext,NULL,NULL,NULL,NULL);;yylval=a; return *yytext;}
"]"				{column_no+=yyleng; a=Make_Node(Tlookup(ID_NAME),ID,*yytext - 'a',yytext,NULL,NULL,NULL,NULL);;yylval=a; return *yytext;}
","				{column_no+=yyleng; a=Make_Node(Tlookup(ID_NAME),ID,*yytext - 'a',yytext,NULL,NULL,NULL,NULL);;yylval=a; return *yytext;}
"&"				{column_no+=yyleng; a=Make_Node(Tlookup(ID_NAME),ID,*yytext - 'a',yytext,NULL,NULL,NULL,NULL);;yylval=a; return *yytext;}
"if"			{column_no+=yyleng; a=Make_Node(Tlookup(ID_NAME),ID,*yytext - 'a',yytext,NULL,NULL,NULL,NULL);;yylval=a; return IF;}
"then"			{column_no+=yyleng; a=Make_Node(Tlookup(ID_NAME),ID,*yytext - 'a',yytext,NULL,NULL,NULL,NULL);;yylval=a; return THEN;}
"else"			{column_no+=yyleng; a=Make_Node(Tlookup(ID_NAME),ID,*yytext - 'a',yytext,NULL,NULL,NULL,NULL);;yylval=a; return ELSE;}
"endif"			{column_no+=yyleng; a=Make_Node(Tlookup(ID_NAME),ID,*yytext - 'a',yytext,NULL,NULL,NULL,NULL);;yylval=a; return ENDIF;}
"while"			{column_no+=yyleng; a=Make_Node(Tlookup(ID_NAME),ID,*yytext - 'a',yytext,NULL,NULL,NULL,NULL);;yylval=a; return WHILE;}
"do"			{column_no+=yyleng; a=Make_Node(Tlookup(ID_NAME),ID,*yytext - 'a',yytext,NULL,NULL,NULL,NULL);;yylval=a; return DO;}
"endwhile"		{column_no+=yyleng; a=Make_Node(Tlookup(ID_NAME),ID,*yytext - 'a',yytext,NULL,NULL,NULL,NULL);;yylval=a; return ENDWHILE;}
"begin"			{column_no+=yyleng; a=Make_Node(Tlookup(ID_NAME),ID,*yytext - 'a',yytext,NULL,NULL,NULL,NULL);;yylval=a; return BEGIN1;}
"end"			{column_no+=yyleng; a=Make_Node(Tlookup(ID_NAME),ID,*yytext - 'a',yytext,NULL,NULL,NULL,NULL);;yylval=a; return END;}
"main"			{column_no+=yyleng; a=Make_Node(Tlookup(ID_NAME),ID,*yytext - 'a',yytext,NULL,NULL,NULL,NULL);;yylval=a; return MAIN;}
"integer"		{column_no+=yyleng; a=Make_Node(Tlookup(ID_NAME),ID,*yytext - 'a',yytext,NULL,NULL,NULL,NULL);;yylval=a; return INTEGER;}
"boolean"		{column_no+=yyleng; a=Make_Node(Tlookup(ID_NAME),ID,*yytext - 'a',yytext,NULL,NULL,NULL,NULL);;yylval=a; return BOOLEAN;}
"NOT"			{column_no+=yyleng; a=Make_Node(Tlookup(ID_NAME),ID,*yytext - 'a',yytext,NULL,NULL,NULL,NULL);;yylval=a; return NOT;}
"OR"			{column_no+=yyleng; a=Make_Node(Tlookup(ID_NAME),ID,*yytext - 'a',yytext,NULL,NULL,NULL,NULL);;yylval=a; return OR;}
"AND"			{column_no+=yyleng; a=Make_Node(Tlookup(ID_NAME),ID,*yytext - 'a',yytext,NULL,NULL,NULL,NULL);;yylval=a; return AND;}
"FALSE"			{column_no+=yyleng; a=Make_Node(Tlookup(ID_NAME),ID,*yytext - 'a',yytext,NULL,NULL,NULL,NULL);;yylval=a; return FALSE;}
"TRUE"			{column_no+=yyleng; a=Make_Node(Tlookup(ID_NAME),ID,*yytext - 'a',yytext,NULL,NULL,NULL,NULL);;yylval=a; return TRUE;}
"decl"			{column_no+=yyleng; a=Make_Node(Tlookup(ID_NAME),ID,*yytext - 'a',yytext,NULL,NULL,NULL,NULL);;yylval=a; return DECL;}
"enddecl"		{column_no+=yyleng; a=Make_Node(Tlookup(ID_NAME),ID,*yytext - 'a',yytext,NULL,NULL,NULL,NULL);;yylval=a; return ENDDECL;}
"<"				{column_no+=yyleng; a=Make_Node(Tlookup(ID_NAME),ID,*yytext - 'a',yytext,NULL,NULL,NULL,NULL);;yylval=a; return LESS;}
"<="			{column_no+=yyleng; a=Make_Node(Tlookup(ID_NAME),ID,*yytext - 'a',yytext,NULL,NULL,NULL,NULL);;yylval=a; return LTEQUAL;}
">"				{column_no+=yyleng; a=Make_Node(Tlookup(ID_NAME),ID,*yytext - 'a',yytext,NULL,NULL,NULL,NULL);;yylval=a; return GREATER;}
">="			{column_no+=yyleng; a=Make_Node(Tlookup(ID_NAME),ID,*yytext - 'a',yytext,NULL,NULL,NULL,NULL);;yylval=a; return GTEQUAL;}
"!="			{column_no+=yyleng; a=Make_Node(Tlookup(ID_NAME),ID,*yytext - 'a',yytext,NULL,NULL,NULL,NULL);;yylval=a; return NOTEQUAL;}
"=="			{column_no+=yyleng; a=Make_Node(Tlookup(ID_NAME),ID,*yytext - 'a',yytext,NULL,NULL,NULL,NULL);;yylval=a; return ISEQUAL; }
"%"				{column_no+=yyleng; a=Make_Node(Tlookup(ID_NAME),ID,*yytext - 'a',yytext,NULL,NULL,NULL,NULL);;yylval=a; return MODULUS;}
"^"				{column_no+=yyleng; a=Make_Node(Tlookup(ID_NAME),ID,*yytext - 'a',yytext,NULL,NULL,NULL,NULL);;yylval=a; return POWER;}
"."				{column_no+=yyleng; a=Make_Node(Tlookup(ID_NAME),ID,*yytext - 'a',yytext,NULL,NULL,NULL,NULL);;yylval=a; return DOT;}
"typedef"		{column_no+=yyleng; a=Make_Node(Tlookup(ID_NAME),ID,*yytext - 'a',yytext,NULL,NULL,NULL,NULL);;yylval=a; return TYPEDEF;}
" "				{column_no+=yyleng;}
"return"		{column_no+=yyleng; a=Make_Node(Tlookup(ID_NAME),ID,*yytext - 'a',yytext,NULL,NULL,NULL,NULL);;yylval=a; return RETURN;}
[a-zA-Z]+[a-zA-Z0-9]*	{a=Make_Node(Tlookup(ID_NAME),ID,*yytext - 'a',yytext,NULL,NULL,NULL,NULL);;yylval=a; return ID;}	
.			{yyerror("Unknown Character\n");exit(1);}
%%

int yywrap()
{
	return 1;
}