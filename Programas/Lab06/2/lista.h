#include <stdio.h>
#include <stdlib.h>
#define MAX 100
typedef struct encadeada Lista;
Lista *cria_lista();
int insere_elem(Lista **l, int n);
int remove_elem(Lista **l, int n);
int insere_elem_ord(Lista **l, int n);
int remove_elem_ord(Lista **l, int n);
int lista_vazia(Lista *l);
void print_lista(Lista *l);
void apaga_lista(Lista *l);
void delay(int n);
void pause();