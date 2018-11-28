//WANDERSON PACHECO DE L. SILVA
//RESOLUÇÃO DA QUESTÃO 3. DA LISTA
//17/09/2018
#include <stdio.h>
#include<stdlib.h>

int main() {
	int vet[8], aux, i=0, x=7;

	for(i=0; i<8; i++){
		printf("Informe um numero para a linha %d : ", i+1);
		scanf("%d", &vet[i]);
	}
printf("\n");
		for(i=0; i<10; i++){
			aux=vet[i];
			vet[i]=vet[x];
			vet[x]=aux;
			x--;
		}
		printf("Ordem inversa do vetor! \n");
			for(i=0; i<8; i++){
				printf("%d\n",vet[i]);
			}
}
