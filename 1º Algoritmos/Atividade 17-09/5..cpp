//WANDERSON PACHECO DE L. SILVA
//RESOLUÇÃO DA QUESTÃO 3. DA LISTA
//17/09/2018
#include <stdio.h>
#include<stdlib.h>

int main() {
	int vet[7],vet2[7],i,x,j;
	
	
	for(i=0;i<7; i++){
		printf("Informe um numero para o primeiro vetor: ");
		scanf("%d", &vet[i]);
	}
	printf("\n");
		for(x=0;x<7; x++){
			printf("Informe um numero para o segundo vetor: ");
			scanf("%d", &vet2[x]);
		}
			for(j=0;j<14;j++){
				printf("\n %d %d",vet[i], vet2[x]);
				
			}

}
