%{
	#include <stdio.h>
	int global_variable;
%}
/*Auxiliary declarations end & Regular definitions start here*/

	number [0-9]+ 		//Regular definition
	op [-|+|*|/|^|=]	//Regular definition

/*Declarations section ends here*/
/* Declarations*/
%%
	{number} {printf(" number");}
	{op} {printf(" operator");}

%%
/* Auxiliary functions */
