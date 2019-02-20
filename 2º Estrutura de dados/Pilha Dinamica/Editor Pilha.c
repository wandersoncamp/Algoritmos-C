#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

typedef struct no {
	float info;
	struct no* anterior;
}No;

typedef struct {
	No* topo;
}Pilha;

Pilha* criar(void){
	Pilha *p;
	p = (Pilha*) malloc(sizeof(Pilha));
	p->topo = NULL;
	return p;
}

Pilha* push(Pilha *p, float v){
	No* aux;
	aux = (No*) malloc(sizeof(No));
	aux->info = v;
	aux->anterior = p->topo;
	p->topo = aux;
	return p; 
}

float pop(Pilha *p){
	float v;
	No* aux;
	if (vazia(p)){
		printf("Pilha Vazia!");
		exit(1);
	}
	v = p->topo->info;
	aux = p->topo;
	p->topo = aux->anterior;
	free(aux);
	return v;
}

int vazia(Pilha *p){
	return(p->topo == NULL);
}

void libera(Pilha *p){
	No* q = p->topo;
	while(q!=NULL){
		No *t = q->anterior;
		free(q);
		q=t;
	}
	free(p);
}

void imprime(Pilha *p){
	No* q;
	for(q=p->topo; q!=NULL;q=q->anterior)
	printf("%4.2f\n",q->info);
}

int menu(){
	int op;
	
printf("\n\n");
printf("-----------------------------------------------\n");
printf("              EDITOR DE PILHA \n\n");
printf("1 - EMPILHAR\n");
printf("2 - DESEMPILHAR\n");
printf("3 - EXIBIR ELEMENTOS DO TOPO\n");
printf("4 - EXIBIR A PILHA\n");
printf("5 - ESVAZIAR A PILHA\n");
printf("6 - SAIR \n");
printf("-----------------------------------------------\n");
printf("\n\n");

printf("DIGITE SUA OPCAO: \n\n");
scanf("%d", &op);
fflush(stdin);

return op;

}

int main(){
	Pilha* p = criar();
	push(p,20.0);
	push(p,20.8);
	push(p,20.3);
	push(p,44.5);
	push(p,33.3);
	push(p,20.9);
	imprime(p);
	printf("Retirado: %4.2f\n", pop(p));
	printf("Retirado: %4.2f\n", pop(p));
	printf("Configuracao da fila: \n");
	imprime(p);
	libera(p);
	system("pause");
}
