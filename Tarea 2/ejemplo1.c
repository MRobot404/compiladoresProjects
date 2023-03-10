/** Oscar Escobar **/
#include <stdio.h>
#include "definitions.h"

extern int yylex();
extern int yylineno;
extern char* yytext;

int main(void){
    int ntoken,vtoken;
    ntoken= yylex();
    if(ntoken != NAME){
        printf("Error de sintaxis, se esperaba una operacion pero no funciono %s\n", yytext);
        return 1;
    } 
    ntoken=yylex();  
    if(ntoken != COLON){
        printf("Error de sintaxis, se esperaba : pero no funciono %s\n", yytext);
        return 1;
    }
    ntoken=yylex(); 
    if(ntoken != PARENTESIS){
        printf("Error de sintaxis, se esperaba ( pero no funciono %s\n", yytext);
        return 1;
    } 
     ntoken=yylex(); 
    if(ntoken != IDENTIFIER){
        printf("Error de sintaxis, se esperaba 'a' pero no funciono %s\n", yytext);
        return 1;
    } 
     ntoken=yylex(); 
    if(ntoken != SIGNO){
        printf("Error de sintaxis, se esperaba + pero no funciono %s\n", yytext);
        return 1;
    } 
     ntoken=yylex(); 
    if(ntoken != IDENTIFIER){
        printf("Error de sintaxis, se esperaba 'b' pero no funciono %s\n", yytext);
        return 1;
    } 
     ntoken=yylex(); 
    if(ntoken != PARENTESIS){
        printf("Error de sintaxis, se esperaba ) pero no funciono %s\n", yytext);
        return 1;
    } 
    ntoken=yylex(); 
    if(ntoken != SIGNO){
        printf("Error de sintaxis, se esperaba * pero no funciono %s\n", yytext);
        return 1;
    } 
     ntoken=yylex(); 
    if(ntoken != PARENTESIS){
        printf("Error de sintaxis, se esperaba ( pero no funciono %s\n", yytext);
        return 1;
    } 
     ntoken=yylex(); 
    if(ntoken != IDENTIFIER){
        printf("Error de sintaxis, se esperaba 'a' pero no funciono %s\n", yytext);
        return 1;
    } 
     ntoken=yylex(); 
    if(ntoken != SIGNO){
        printf("Error de sintaxis, se esperaba + pero no funciono %s\n", yytext);
        return 1;
    } 
    ntoken=yylex(); 
    if(ntoken != IDENTIFIER){
        printf("Error de sintaxis, se esperaba 'c' pero no funciono %s\n", yytext);
        return 1;
    } 
     ntoken=yylex(); 
    if(ntoken != PARENTESIS){
        printf("Error de sintaxis, se esperaba ) pero no funciono %s\n", yytext);
        return 1;
    }
    ntoken=yylex(); 
    if(ntoken != SIGNO){
        printf("Error de sintaxis, se esperaba - pero no funciono %s\n", yytext);
        return 1;
    } 
     ntoken=yylex(); 
    if(ntoken != PARENTESIS){
        printf("Error de sintaxis, se esperaba ( pero no funciono %s\n", yytext);
        return 1;
    } 
    ntoken=yylex(); 
    if(ntoken != IDENTIFIER){
        printf("Error de sintaxis, se esperaba 'd' pero no funciono %s\n", yytext);
        return 1;
    } 
    ntoken=yylex(); 
    if(ntoken != SIGNO){
        printf("Error de sintaxis, se esperaba - pero no funciono %s\n", yytext);
        return 1;
    } 
    ntoken=yylex(); 
    if(ntoken != IDENTIFIER){
        printf("Error de sintaxis, se esperaba 'x' pero no funciono %s\n", yytext);
        return 1;
    } 
    ntoken=yylex(); 
     if(ntoken != PARENTESIS){
        printf("Error de sintaxis, se esperaba ) pero no funciono %s\n", yytext);
        return 1;
    } 

        printf("No existen errores de sintaxis \n");
        return 0;
}