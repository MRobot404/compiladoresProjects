%{
        #include "definitions.h"
%}
IDENTIFIER          [a-zA-Z][_a-zA-Z0-9]*
INTEGER             [0-9][1-9]*
%%
:                   return COLON;
"db_type"           return TYPE;
"db_name"           return NAME;
"db_table_prefix"   return TABLE_PREFIX;
"db_port"           return PORT;

{IDENTIFIER}        return IDENTIFIER;
{INTEGER}           return INTEGER;
[ \t\n]             ;
.                   printf("Caracter invalido");
%%

int yywrap(void){
    return 1;
}