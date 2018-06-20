#include "lista.c"
#include "lista.h"
int main(int argc, char const *argv[])
{
	lista *l,*m;
	l = cria_lista();
	int op,n;
	inicio:
	system("clear");
	printf("------------------------\n");
	printf("        Escolha\n");
	printf("------------------------\n");
	printf("[1] Inserir elemento.\n");
	printf("[2] Remover elemento.\n");
	printf("[3] Mostrar lista.\n");
	printf("[4] Limpar lista.\n");
	printf("[5] Remover tds ocorrencias.\n");
	printf("[6] Intercalar duas listas.\n");
	printf("[0] Sair\n");
	printf(": ");
	scanf("%d",&op);
	switch(op){
		case 0: apaga_lista(&l);break;
		case 1: 
			printf("Elemento: ");
			scanf("%d",&n);
			if(insere_elem(l,n)) printf("Sucesso!!\n");
			else printf("Falha!\n");
			delay(1);
			goto inicio;
		break;
		case 2: 
			printf("Elemento: ");
			scanf("%d",&n);
			if(remove_elem(l,n)) printf("Sucesso!!\n");
			else printf("Falha!\n");
			delay(1);
			goto inicio;
		break;
		case 3:
			print_lista(l);
			delay(8);
			goto inicio;
		break;
		case 4:
			l=cria_lista();
			goto inicio;
		break;
		case 5: 
			printf("Elemento: ");
			scanf("%d",&n);
			if(remove_todos(l,n)) printf("Sucesso!!\n");
			else printf("Falha!\n");
			delay(1);
			goto inicio;
		break;
		case 6:
			m = cria_lista();
			m=menu_intercala(l);
			if(m==NULL) printf("Erro!!\n");
			else{
				l = m;
				apaga_lista(&m);
				printf("Sucesso!\n");
			}
			goto inicio;
		break;
		default: goto inicio; break;
	}
	return 0;
}