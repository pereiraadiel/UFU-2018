typedef struct no *Lista_din;
int lista_vazia(Lista_din L);
Lista_din cria_lista_din(void);
int insere_elem_final(Lista_din *A, int elem);
int insere_elem_inicio(Lista_din *A, int elem);
int remove_inicio(Lista_din *A,int *a);
void imprimi_lista(Lista_din l);
Lista_din ordenacao_radix(Lista_din A);
int tamanho(Lista_din L);
void imprimi_tamanho(Lista_din L);
