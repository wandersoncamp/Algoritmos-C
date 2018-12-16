#include<stdio.h>
#include<stdlib.h>
#define TAMANHO 3

typedef struct{
	char nome[20];
	int idade;
	float altura;
	float peso;
}DADOS; 

int main(){
	int i;
	DADOS pessoa[TAMANHO];
	
		for(i = 0; i < TAMANHO ; i++){
			printf("Digite seu nome: ");
			scanf("%s", &pessoa[i].nome);
			
			printf("Digite sua idade: ");
			scanf("%d", &pessoa[i].idade);
			
			printf("Digite sua altura: ");
			scanf("%f", &pessoa[i].altura);
			
			printf("Digite seu peso: ");
			scanf("%f", &pessoa[i].peso);
			
			printf("\n\n");
			system("cls");
		}
		
			printf("\n\n");
			
			for(i = 0; i < TAMANHO; i++){
			
			printf("O Nome eh: %s \n", pessoa[i].nome);
			printf("A Idade eh: %d \n", pessoa[i].idade);
			printf("A Altura eh: %.2f \n", pessoa[i].altura);
			printf("O Peso eh: %.2f \n", pessoa[i].peso);
						
			printf("\n\n");

			}
}
