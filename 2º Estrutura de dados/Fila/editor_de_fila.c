#include<stdio.h>
#include<stdlib.h>
#define M 10

typedef struct{
	int comeco,fim;
	int elemento[M];
}FILA;

FILA fila;

void inicio (FILA *fila) {
	fila->comeco = 0;
	fila->fim = -1;
}

void inserir(FILA *fila, char x){
	if(fila->fim == M-1){
		printf("Fila Cheia");
	}
	else{
		fila->fim++;
		fila->elemento[fila->fim]=x;
	}
}

void remover(FILA*fila){
	if(fila->fim<fila->comeco)
	printf("Fila Vazia");
	else{
		fila->comeco++;
	}
}

int primeiro(FILA*fila){
	char x;
	if(fila->fim<fila->comeco)
	printf("Fila Vazia");
	else{
		x = fila->elemento[fila->comeco];
		return(x);
	}
}	


int menu(){
	int op;
	
printf("\n\n");
printf("-----------------------------------------------\n");
printf("              EDITOR DE FILA \n\n");
printf("1 - INSERIR\n");
printf("2 - REMOVER\n");
printf("3 - EXIBIR ELEMENTOS DO INCIO\n");
printf("4 - EXIBIR A FILA\n");
printf("5 - ESVAZIAR A FILA\n");
printf("6 - SAIR \n");
printf("-----------------------------------------------\n");
printf("\n\n");

printf("DIGITE SUA OPCAO: \n\n");
scanf("%d", &op);
fflush(stdin);

return op;

}


int main(){
	int i, op = 0, valor;
	inicio(&fila);
	
	while (op!=6){
		op=menu();
		
		if(op==1){
			printf("Insira o elemento na Fila: \n\n");	
			scanf("%d", &valor);
			inserir(&fila,valor);
		       printf("Inserido!");

		}else if(op==2){
			remover(&fila);
		}
		else if (op==3){
			printf("\n\n ELEMENTOS DO INICIO = %d \n\n", primeiro(&fila));
		}
		else if(op==4){
			if(fila.fim<fila.comeco)
				printf("Insira um elemento, pois a fila esta vazia!");
			else{
				for(i=0;i<fila.fim;i++){
					printf("\nO valor %d", fila.elemento[i]);
				}
			}
		}
		else if(op==5){
			inicio(&fila);
			printf("Fila Vazia!");
			
		}
	}
}


