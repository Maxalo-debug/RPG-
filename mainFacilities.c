 #include "mainFacilities.h"

char* getCommand(char* input){
    char buffer[BUFFER_SIZE];
    fgets(buffer, BUFFER_SIZE, stdin);
    int i = 0;
    while (isblank(buffer[i])){  i++; }
    int currentPosition = i;

    if(isdigit(buffer[currentPosition]) || isgraph(buffer[currentPosition])){i++;}

    return bu

}