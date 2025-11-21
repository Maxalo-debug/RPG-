#include <stdio.h>
#include "game.h"
#include "menu.h"

int main(void){
    int numero = 0;
    char palavra[50];
    fgets(palavra, 50, stdin);
    parse_int(palavra, &numero);
    printf("Numero: %d", numero);

    return 0;
}