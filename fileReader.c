#include "fileReader.h"






void fileReader(char* texto){
  FILE* arquivo = fopen(texto, "a");
  if(arquivo != NULL){
    char c;
    while((c = fgetc(arquivo)) != EOF)
        putchar(c);

    fclose(arquivo);    
    
  }else printf("Não foi lido!");

}

void fileWriter(char* string){
  FILE* arquivo = fopen("texto.txt", "a");
  
  if(arquivo == NULL){
    perror("File opening failed");
    return;
  }

  
  
  
  fprintf(arquivo, "Valor: %s", string);
  

  fclose(arquivo);
  
  

}