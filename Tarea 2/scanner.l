%{
        #include "definitions.h"
%}
IDENTIFIER          [a-zA-Z][_a-zA-Z0-9]*
INTEGER             [0-9][1-9]*
SIGNO               [+\-*/]
PARENTESIS          [()]
%%
:                   return COLON;
"operacion"         return NAME;

{PARENTESIS}        return PARENTESIS;
{SIGNO}             return SIGNO;
{IDENTIFIER}        return IDENTIFIER;
{INTEGER}           return INTEGER;
[ \t\n]             ;
.                   printf("Caracter invalido");
%%

int yywrap(void){
    return 1;
}