#include <stdint.h>

enum raridade{
    COMUM,
    RARO,
    EPICO,
    LENDARIO,
    MITICO
};

typedef struct{
    char descricao[200];
    uint8_t amount;
    enum raridade raridade;
    uint16_t currentLife;
}Item;
