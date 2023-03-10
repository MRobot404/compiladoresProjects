/** Oscar Escobar **/
#include <stdio.h>
#include "definitions.h"

extern int yylex();
extern int yylineno;
extern char* yytext;

char * names[]={NULL, "db_type","db_name", "db_table_prefix", "db_port"};

int main(void){
    int ntoken,vtoken;
    ntoken= yylex();

        if(ntoken != TYPE){
            printf("Error de sintaxis, se esperaba db_type pero no funciono %s\n", yytext);
            return 1;
        } 
        ntoken= yylex();
        if(ntoken != COLON){
            printf("Error de sintaxis, se esperaba : Pero no se encontro %s\n", yytext);
            return 1;
        }   
        ntoken= yylex();
        if(ntoken != IDENTIFIER){
        printf("Error de sintaxis, se esperaba iDENTIficador %s\n", yytext);
        return 1;
        }
        ntoken= yylex();
         if(ntoken != NAME){
        printf("Error de sintaxis, se esperaba un db_name pero no se encontro %s\n", yytext);
        return 1;
        }
        ntoken= yylex();
         if(ntoken != COLON){
        printf("Error de sintaxis, se esperaba : pero no se encontro %s\n", yytext);
        return 1;
        }
        ntoken= yylex();
         if(ntoken != IDENTIFIER){
        printf("Error de sintaxis, se esperaba iDENTIficador %s\n", yytext);
        return 1;
        }
        ntoken= yylex();
         if(ntoken != TABLE_PREFIX){
        printf("Error de sintaxis, se esperaba un table preflix %s\n", yytext);
        return 1;
        }
        ntoken= yylex();
         if(ntoken != COLON){
        printf("Error de sintaxis, se sespera : pero no se encontro %s\n", yytext);
        return 1;
        }
        ntoken= yylex();
         if(ntoken != IDENTIFIER){
        printf("Error de sintaxis, se sespera un identificador  %s\n", yytext);
        return 1;
        }
        ntoken= yylex();
        if(ntoken != PORT){
        printf("Error de sintaxis, se esperaba un puerto pero no se encontro  %s\n", yytext);
        return 1;
        }
        ntoken= yylex();
        if(ntoken != COLON){
        printf("Error de sintaxis, se sespera : pero no se encontro %s\n", yytext);
        return 1;
        }
        ntoken= yylex();
        if(ntoken != INTEGER){
        printf("Error de sintaxis, se esperaba un numero entero pero no se encontro %s\n", yytext);
        return 1;
        }
        printf("No existen errores de sintaxis \n");
        return 0;
}