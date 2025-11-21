#include <stdio.h>
#include <stdlib.h>
#include "parser.h"
#include <ctype.h>

// Usar mais tarde boas praticas, falta utilizar lista
// temporaria
char** parser(char* string, int* size){
    char* original = strndup(string, 50);
    char* token, *rest;
    char** wordsUser = malloc(sizeof(char*)*1);
   
    int i = 0;



    token = strtok_r(rest, " ", &rest);
    while(token != NULL){
        wordsUser[i] = strdup(token);
        i++;
        wordsUser = realloc(wordsUser, sizeof(char*) * (i+1));
        
    }

    *size = i;
    

    return wordsUser;
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         


char* trim(char* string){
    char* newString;
    int i = 0;
    int j = strlen(string)-1, sizeString = strlen(string)-1;
    while(isspace(string[i])){i++;}
    while(isspace(string[strlen(string)-1])){j--;}

    for (int c = 0; i != j; c++, i++)
    {
        newString[c] = string[i]; 
    }
    
    
    return newString;
}