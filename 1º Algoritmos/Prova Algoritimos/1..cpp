#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese_Brazil");
	int x,i,j,mat[2][7], vet[14],cont=0;
	
	for(x=0;x<14;x++){
		printf("Informe um valor: ");
		scanf("%d",&vet[x]);
	}
	
	printf("\nMatriz\n");
	
	for(i=0;i<2;i++){
		for(j=0;j<7;j++){
			
		mat[i][j] = vet[cont];
		cont++;
			printf("\n %d", mat[i][j]);
		}
		printf("\n");
	}
}
