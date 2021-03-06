#ifndef LISTA_H
#define LISTA_H
	typedef struct no Lista;
	Lista * cria_lista();
	int lista_vazia(Lista *l);
	int insere_elem(Lista **l, int elem);
	int insere_final(Lista *l, int elem);
	int remove_elem(Lista **l, int elem);
	int remove_todos(Lista **l, int elem);
	void imprimi_lista(Lista *l);
	Lista * concatenar(Lista **A, Lista **B);
	int tamanho(Lista *L);
	int remove_pares(Lista **A);
	int maior(Lista *A);
	void pause();
#endif