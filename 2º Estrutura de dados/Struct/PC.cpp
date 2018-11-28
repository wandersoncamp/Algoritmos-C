#include<stdio.h>
#include<stdlib.h>
#define TAMANHO 4

typedef struct{
	float preco[TAMANHO];
	char placa[20];
	char hd[50];
	char processador[50];
	char memoria[50];
}CPU; 

int main(){
	
	CPU pc;
	
	int i=0;
	float precoTotal=0;
	
		printf("BEM VINDO A BLACK FRAUDE\n");
		printf("Primeiro voce ira inserir os itens\n");
		printf("Depois ira inserir os valores\n");
		printf("\n\n");

			printf("Processador: ");
			scanf(" %[^\n]%*c", pc.processador);
			
			printf("Digite o preco do processador: ");
			scanf("%f", &pc.preco[i++]);
			
			printf("Placa: ");
			scanf(" %[^\n]%*c", pc.placa);
			
			printf("Digite o preco da placa: ");
			scanf("%f", &pc.preco[i++]);
			
			printf("HD: ");
			scanf(" %[^\n]%*c", pc.hd);
			
			printf("Digite o preco do HD: ");
			scanf("%f", &pc.preco[i++]);
			
			printf("Memoria RAM: ");
			scanf(" %[^\n]%*c", pc.memoria);
			
			printf("Digite o preco da Memoria RAM: ");
			scanf("%f", &pc.preco[i++]);
			
			
			printf("\n\n");
			//system("cls");
		
			
			for(i = 0; i < TAMANHO; i++){
				precoTotal += pc.preco[i];
			}
			
			printf("%.2f", precoTotal);
			
}
