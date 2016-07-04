%{
#include "tokens.h"
int nline = 1;
%}

%%

escreva			             return ESCREVA;
leia			               return LEIA;
\+                       return SOMA;
\-                       return SUB;
\/                       return DIV;
\*                       return MULT;
\%                       return RESTO;
[a-zA-Z][a-zA-Z0-9]* 	   return VAR;
\"(.?)*\"		             return STR;
[0-9]+(\.[0-9]+)?  	     return NUM;
\,                       return SEP;
\(                       return PA;
\)                       return PF;
\=                       return REC;
[ \t]                    ;
[\n]			               nline++;
.                        printf("Caracter inesperado na linha %d\n",nline);

%%

int yywrap(void)
{
	return 1;
}
