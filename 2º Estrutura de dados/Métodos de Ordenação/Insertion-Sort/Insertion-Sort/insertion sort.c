/*
	ORDENAÇÃO INSERTION SORT
	ARTUR ROBSON E WANDERSON PACHECO 
*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define max 10000


int main(){
	
	int  i, j, key;
	int vetor[max];
	
	FILE *myFile;
    myFile = fopen("numero.txt", "r");
   
    
    if(myFile == NULL){
		printf("Arquivo nao encontrado! \n");
		system("pause");
		return 0;
	}

    for (i = 0; i < max; i++)
    {
        fscanf(myFile, "%d", &vetor[i]);
    }
    
    printf("\n Vetor sem ordenar:{ ");
   for (i= 0; i < max; i++){
     printf("%d, ", vetor[i]);
    
	}  
	 printf("%d }");
	
	//insertion sort:
	for(j=1; j<max; j++){
		i = j-1;
		key = vetor[j];
		
		while( i>=0 && vetor[i] > key ){
			vetor[i+1] = vetor[i];
			i--;
		}
		vetor[i+1] = key;
	}
	
	
	//imprimindo o conjunto
	printf("\n\n Vetor Ordenado: { ");
	for(i=0; i<max - 1; i++){
		printf("%d, ", vetor[i]);
	}
	 printf("%d }", vetor[max-1]);

}
