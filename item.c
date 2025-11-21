#include "item.h"

struct item{
    char itemName[50];
    char type[50];
    int8_t durability;
    void (*sell)(char*, int8_t); 

}Item;