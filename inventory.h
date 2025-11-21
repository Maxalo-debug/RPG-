#include <stdint.h>
#include "item.h"
#define MAXCAPACITY 100
struct inventory
{
    Item invetory[10];
    uint8_t maxCapacity;
    bool isFull = false;
};
