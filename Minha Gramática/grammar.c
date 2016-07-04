#include <stdio.h>
#include "tokens.h"

extern int yylex();
extern int nline;
extern char* yytext;

int main(){
	int ntoken, cline;
	cline = nline;
	ntoken = yylex();
	while(ntoken) {
		switch(ntoken){
			case ESCREVA:
				printf("<ESCREVA,%s>", yytext);
				break;
      case LEIA:
        printf("<LEIA>");
        break;
      case SOMA:
        printf("<SOMA>");
        break;
      case DIV:
        printf("<DIV>");
        break;
      case MULT:
        printf("<MULT>");
        break;
      case SUB:
        printf("<SUB>");
        break;
      case RESTO:
        printf("<RESTO>");
        break;
      case PA:
        printf("<PA>");
        break;
      case PF:
        printf("<PF>");
        break;
      case REC:
        printf("<REC>");
        break;
      case SEP:
        printf("<SEP>");
        break;
      case VAR:
        printf("<VAR,%s>", yytext);
        break;
      case NUM:
        printf("<NUM,%s>", yytext);
        break;
      case STR:
        printf("<STR,%s>", yytext);
        break;
		}
		ntoken = yylex();
	}
	printf("\n EOF - Lines: %d\n", nline);
	return 0;
}
