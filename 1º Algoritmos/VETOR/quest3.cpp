#include<stdio.h>
int main(){
	int A[10],i,x,M[10];
	
	for(i=0;i<=9;i++){
	printf("Informe o valor do vetor para a posicao: ");
	scanf("%d", &A[i]);
	}
	printf("\n Infome um valor para multiplicar pelos anteriores: ");
	scanf("%d", &x);
	
	for(i=0;i<=9;i++){
		M[i] = A[i] * x;
		printf("%d\n", M[i]); 
	}
}
