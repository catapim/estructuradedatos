#include <stdio.h>

struct visita {
    char url[64];
};

struct nodo {
    struct visita data; /* la visita */
    struct nodo* next; /* el proximo */
};

int main()
{
    printf("Hello World");
    return 0;
}
