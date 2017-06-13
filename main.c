#include <stdio.h>
#include <stdlib.h>

struct visita {
    char *url;
};

struct nodo {
    struct visita* data; /* la visita */
    struct nodo* next; /* el proximo */
};
struct nodo* head = NULL;

void agregar_visita(char url[]) {
     printf("\n");
     struct nodo* nuevo_nodo = malloc(sizeof(struct nodo));
     struct visita* nueva_visita = malloc(sizeof(struct visita));
     nueva_visita->url=url;
     nuevo_nodo->data=nueva_visita;
     
     if(head==NULL) {
         /* es el primer nodo de la lista enlazada, entonces se escribe head */
        printf(nueva_visita->url);
        head=nuevo_nodo;
     } else {
        /* recorre la lista enlazada para encontrar el ultimo nodo y agregarle el nuevo nodo */
        struct nodo *current = head;
        printf("AAAA");
        while(current->next!=NULL) {
            // printf(current->data->url);
            current=current->next;
        }
        current->next=nuevo_nodo;
     }
}
void imprimir_todas_las_visitas() {
            
        printf("sitios visitados: ");
        printf("\n");
        struct nodo* current = head;
        while(current!=NULL)
        {
            // do something

            current= current->next;
        }
        printf("\n");

}
int main()
{
         printf("\n");

    printf("Bievenid@");
         printf("\n");

    /* crea visitas de ejemplo para que haya algo cuando el programa parte */
    agregar_visita("http://cats.com");
    agregar_visita("http://dogs.com");
    agregar_visita("http://people.com");

    // imprimir_todas_las_visitas();
    return 0;
}

