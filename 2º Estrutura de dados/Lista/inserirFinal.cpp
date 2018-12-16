#include<stdio.h>
#define m 10

int menu(){
	int op;

printf("\n\n");
printf("-----------------------------------------------\n");
printf("              EDITOR DE LISTA \n\n");
printf("DIGITE SUA OPÇÃO: \n\n");	
printf("1 - INSERIR NO FINAL\n");
printf("2 - REMOVER NO FINAL\n");
printf("3 - EXIBIR TODOS OS ELEMENTOS\n");
printf("4 - ESVAZIAR LISTA");
printf("4 - SAIR \n");
printf("-----------------------------------------------\n");
printf("\n\n");

scanf("%d",&op);
}

struct Lista {
	int n;
	char elem[m]; 
};


struct Lista L;

void inicialista(struct Lista *L){
	L-> n = 0;
}

void inserirFinal(struct Lista *L, char dado){
	int i;
	
if (L -> n > m-1)
	printf("\n erro – elemento fora dos limites\n");
else{
	L->elem[L->n] = dado;
	L->n++;
	}
}

void removerFinal(struct Lista *L, char dado){
	int i;
	
if (L->n ==0)
	printf("\n erro – elemento fora dos limites\n");
else{
	L->n--;
	}
}
 			
	
int main(){
	int op;
	
	inicialista(&L);
	op=menu();
	
	while(op!=5){
		if(op==1){
		char dado[1];
		printf("Digite a informacao para inserir: ");
		scanf("%s", &dado); 
		inserirFinal(&L, dado[1]);
	}
		}
		else if (op==2){

		}
		else if(op==3){
			
		}
}

