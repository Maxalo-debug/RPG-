#pragma once
#include <stdbool.h>
#include "types.h"
#include "menu.h"

void run_game();
void user_input();
bool parse_int(char*, int*);
void process_user_input();
void menu_user_process(int*, char*, enum jogo_estado*);