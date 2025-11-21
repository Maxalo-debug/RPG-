#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define BUFFER_SIZE 4096
int main(void){
    char** lista = malloc(1 * sizeof(char*));
    char buffer[BUFFER_SIZE];
    int i = 0;
    char* palavra;

    
    while(i < 4){
        printf("Digite uma palavra:");
        fgets(buffer, BUFFER_SIZE, stdin);
        buffer[strcspn(buffer, "\n")] = '\0';

        lista[i] = strdup(buffer);
        
        
        i++;
        lista = realloc(lista, sizeof(char*) * (i+1));
    }
    

    for (int i = 0; i < 4; i++)
    {
        printf("Palavra: %s tamanho: %ld\n", lista[i], strlen(lista[i]));
    }
    

    for (int i = 0; i < 4; i++)
    {
        free(lista[i]); 
    }

    free(lista);
    lista = NULL;
    
  

    return 0;
}

