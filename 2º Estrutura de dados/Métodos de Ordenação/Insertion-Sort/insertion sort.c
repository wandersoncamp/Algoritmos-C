/*	
	Algoritmo de ordenaçao Insertion Sort
 */ 
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main(){
	
	int tamanho, i, j, key;
	
	printf("Insira o Tamanho do Vetor: ");
	scanf("%d", &tamanho);	//tamanho do conjunto
	system("cls");
	
	int A[tamanho];
	
	//lendo o conjunto:
	for(i=0; i<tamanho; i++){
		scanf("%d", &A[i]);
	}
	
	//insertion sort:
	for(j=1; j<tamanho; j++){
		i = j-1;
		key = A[j];
		
		while( i>=0 && A[i] > key ){
			A[i+1] = A[i];
			i--;
		}
		
		A[i+1] = key;
	}
	
	//imprimindo o conjunto
	printf("A: { ");
	for(i=0; i<tamanho - 1; i++){
		printf("%d, ", A[i]);
	}
	printf("%d }", A[tamanho-1]);

}
