#include <stdio.h>
#include<stdlib.h>
#include<locale.h>

	void preencheVetor(int vet[]){
		setlocale(LC_ALL,"portuguese_Brazil");
		
		system("cls");
		
		printf(" \n PREENCHENDO O VETOR...\n");
		
		int  i;
		for (i=0; i<12; i++) {
		
			printf("\n informe um numero: ");
			scanf("%d",&vet[i]);		
			 
		}
	}
  void menu(int s){	
		
		printf("\n\n");	
printf("-----------MENU-----------\n");
printf("1 - PREENCHER VETROR\n");
printf("2 - EXIBIR VETOR\n");
printf("3 - EXIBIR VALORES PARES\n");
printf("4 - EXIBIR VALORES IMPARES\n");
printf("5 - SAIR\n");
printf("--------------------------\n");
printf("\n\n");
		
}
  
  	void mostra(int vet[]){
		int  x;
		printf("\nExibir Vetor \n");
		for (x=0; x<12; x++) {
			printf(" %d ",vet[x]);
			printf("\n\n");
		}
	}		
	void exibePar(int vet[]){
		
		int x;
		printf("\nExibir Pares:\n");
		
			for (x=1;x<=12;x=x+2){ 
			printf("\n %d:", vet[x]);	
}
	}
	void exibeImpar(int vet[]){
		int x;
		printf("\nExibir Impares:\n");
		for (x=0; x<12; x++) {
			if(vet[x] % 2 == 1){
			printf("\n %d", vet[x]);
}
}
}
	void sair(int d){
		int rest;
		scanf("%d",&rest);
	}
	
  int main( ){ 
  setlocale(LC_ALL,"portuguese_Brazil");
		int  x,d,s,op,rest=1; 
		int vet[12];
		
		
		while(rest ==1 ){
			
			menu(s);
			printf(" \n DIGITE A OPÇÃO DE ACORDO COM O MENU: ");
			scanf("%d", &op);
		
		switch(op){
			
			case 1: 
				preencheVetor(vet);
			break;
			
			case 2 :
			mostra(vet);
			break;
			
			case 3:
				exibePar(vet);
			break;
			
			case 4:
				exibeImpar(vet);
			break;
			case 5:
				sair(d);
			break;
			
			default:
			printf("ERRO, OPERAÇÃO INVALIDA!!! ");		
			break;	
			}
		
		}
			
}		
		

