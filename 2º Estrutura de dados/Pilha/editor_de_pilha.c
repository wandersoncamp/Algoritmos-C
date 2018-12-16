#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define M 10

typedef struct Pilha {
	int topo,
		elementos[M];
};

Pilha pilha;

void iniciaPilha(Pilha *pilha){
	pilha -> topo = -1;
}

void empilhar(Pilha *pilha, char x){
	if (pilha->topo ==M-1){
		printf("Pilha Cheia");
	}else{
		 pilha->topo++;
		pilha->elementos[pilha->topo]=x;
	}
}

void desempilhar(Pilha *pilha){
	if (pilha->topo ==-1)
		printf("Pilha Vazia");
	else{
		 pilha->topo--;
	}
}

char topo(Pilha *pilha){
char x;
	if (pilha->topo ==-1)
		printf("Pilha Vazia");
	else{
		 x = pilha->elementos[pilha->topo];
	return(x);
	}
}

void exibir(Pilha *pilha){
	int x;
	
	if(pilha->topo ==-1){
		printf("PILHA VAZIA!");
	}
	else{
		printf("\n");
		for(x=0;x<=pilha->topo;x++){
			printf("%d \t", pilha->elementos[x]);
		printf("\n");
		}
	}
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
	int op = 0, valor;
	iniciaPilha(&pilha);
	
	while (op!=6){
		op=menu();
		
		if(op==1){
			printf("DIGITE O VALOR: \n\n");	
			scanf("%d", &valor);
			empilhar(&pilha,valor);
		}else if(op==2){
			desempilhar(&pilha);
		}
		else if (op==3){
			printf("\n\n TOPO = %d \n\n", topo(&pilha));
		}
		else if(op==4){
			printf("O Valor: ", PIlha);
			
		}
		else if(op==5){
			
		}
	}
}









