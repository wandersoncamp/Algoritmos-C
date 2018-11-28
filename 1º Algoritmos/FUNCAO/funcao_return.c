#include<stdio.h>

int soma(int numero1, int numero2){
	return numero1 + numero2;
}

int subtracao(int numero1, int numero2){
	return numero1 - numero2;
}

int multiplicacao(int numero1, int numero2){
	return numero1 * numero2;
}

int divisao(int numero1, int numero2){
	return numero1 / numero2;
}


int main(){
	printf("\nValor da soma: %d", soma(2, 2));
	
	printf("\nValor da subtracao: %d", subtracao(10,2));
	
	printf("\nValor da multiplicacao: %d", multiplicacao(2,10));
	
	printf("\nValor da divisao: %d", divisao(15,3));
}
