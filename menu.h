#pragma once
#include <stdint.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

struct character_details{

    char name[50];
    char race[50]; 
   

};

struct historyBlocks{
    struct character_details perfil;
    

};

void dataDisplay(char** dataList);
char** dateParser(int*);
void show_text_menu();
void load();
void start();
void loadScreen();
void profileScreen(struct character_details*);
char* getInput(char*);
char* getCurrentDate();
void dataDisplay(char** dataList);
struct character_details* getCharacter_profile( char*,char*);