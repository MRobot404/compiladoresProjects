/** Oscar Escobar **/
#include <stdio.h>
#include "definitions.h"

extern int yylex();
extern int yylineno;
extern char* yytext;

int main(void){
    int ntoken,vtoken;
    ntoken= yylex();
    while (ntoken)
    {
        printf("%d \n", ntoken);
    }
    return 0;
}