%{
	#include <iostream>
	#include <stdio.h>
	#include "exptree.hpp"
	#include "y.tab.hpp"
	using namespace std;
	int yyerror(char const *s);
	int number;
	struct tnode *a;

%}

%%
[0-9]+		{number=atoi(yytext); yylval=makeLeafNode(number);return NUM;}
"+"			return PLUS;
"-"			return MINUS;
"/"			return DIV;
"*"			return MUL;
"="			return EQUAL;
"\n"		{}
"\t"		{}
"read" 		return READ;
"write"		return WRITE;
";"			return SEMICOLON;
"("			return *yytext;
")"			return *yytext;
"if"		return IF;
"then"		return THEN;
"else"		return ELSE;
"endif"		return ENDIF;
"while"		return WHILE;
"do"		return DO;
"endwhile"	return ENDWHILE;
"begin"		return BEGIN1;
"end"		return END;
"<"			return LESS;
"<="		return LTEQUAL;
">"			return GREATER;
">="		return GTEQUAL;
"!="		return NOTEQUAL;
"=="		return ISEQUAL; 
"%"			return MODULUS;
"^"			return POWER;
" "			{}
[a-zA-Z]+[a-zA-Z0-9]*	{a=Make_Node(ID,ID,*yytext - 'a',yytext,NULL,NULL,NULL,NULL);;yylval=a;return ID;}	
.			{yyerror("Unknown Character\n");exit(1);}
%%

int yywrap()
{
	return 1;
}