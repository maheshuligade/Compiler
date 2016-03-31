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
[0-9]+		{column_no+=yyleng; number=atoi(yytext); yylval=makeLeafNode(number);yylval->type=TYPE_VOID; yylval->type=TYPE_INT;return NUM;}
"+"			{column_no+=yyleng; return PLUS;}
"-"			{column_no+=yyleng; return MINUS;}
"/"			{column_no+=yyleng; return DIV;}
"*"			{column_no+=yyleng; return MUL;}
"="			{column_no+=yyleng; return EQUAL;}
"\n"		{yylineno++;column_no=0;}
"\t"		{column_no+=yyleng; }
"read" 		{column_no+=yyleng; return READ;}
"write"		{column_no+=yyleng; return WRITE;}
";"			{column_no+=yyleng; return SEMICOLON;}
"("			{column_no+=yyleng; return *yytext;}
")"			{column_no+=yyleng; return *yytext;}
"{"			{column_no+=yyleng; return *yytext;}
"}"			{column_no+=yyleng; return *yytext;}
"["			{column_no+=yyleng; return *yytext;}
"]"			{column_no+=yyleng; return *yytext;}
","			{column_no+=yyleng; return *yytext;}
"if"		{column_no+=yyleng; return IF;}
"then"		{column_no+=yyleng; return THEN;}
"else"		{column_no+=yyleng; return ELSE;}
"endif"		{column_no+=yyleng; return ENDIF;}
"while"		{column_no+=yyleng; return WHILE;}
"do"		{column_no+=yyleng; return DO;}
"endwhile"	{column_no+=yyleng; return ENDWHILE;}
"begin"		{column_no+=yyleng; return BEGIN1;}
"end"		{column_no+=yyleng; return END;}
"main"		{column_no+=yyleng; return MAIN;}
"integer"	{column_no+=yyleng; return INTEGER;}
"boolean"	{column_no+=yyleng; return BOOLEAN;}
"NOT"		{column_no+=yyleng; return NOT;}
"OR"		{column_no+=yyleng; return OR;}
"AND"		{column_no+=yyleng; return AND;}
"FALSE"		{column_no+=yyleng; return FALSE;}
"TRUE"		{column_no+=yyleng; return TRUE;}
"decl"		{column_no+=yyleng; return DECL;}
"enddecl"	{column_no+=yyleng; return ENDDECL;}
"<"			{column_no+=yyleng; return LESS;}
"<="		{column_no+=yyleng; return LTEQUAL;}
">"			{column_no+=yyleng; return GREATER;}
">="		{column_no+=yyleng; return GTEQUAL;}
"!="		{column_no+=yyleng; return NOTEQUAL;}
"=="		{column_no+=yyleng; return ISEQUAL; }
"%"			{column_no+=yyleng; return MODULUS;}
"^"			{column_no+=yyleng; return POWER;}
" "			{column_no+=yyleng;}
"return"	{column_no+=yyleng; return RETURN;}
[a-zA-Z]+[a-zA-Z0-9]*	{a=Make_Node(ID,ID,*yytext - 'a',yytext,NULL,NULL,NULL,NULL);;yylval=a;return ID;}	
.			{yyerror("Unknown Character\n");exit(1);}
%%

int yywrap()
{
	return 1;
}