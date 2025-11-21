#pragma once
#include <stdint.h>

typedef struct{
    int8_t currentLevel;
    int64_t currentExp;

}LevelUP;

void level_UP(LevelUP person);