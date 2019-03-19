/*
	ORDENA��O BUBBLE-SORT
	ARTUR ROBSON E WANDERSON PACHECO 
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define max 10000 

// Chamando as fun��es que foram criadas ao longo do c�digo..
void preenche();
void ordena();
void exibe();


main() {       //Fun��o principal
   int vetor[max];
   preenche(vetor);
}

void preenche(int vetor[]) //Fun��o que preenche o Vetor  e chama o arquivo
{
   FILE *myFile;
    myFile = fopen("numero.txt", "r");
    int i;
    
    if(myFile == NULL){
		printf("Arquivo nao encontrado! \n");
		system("pause");
		return 0;
	}

    for (i = 0; i < max; i++)
    {
        fscanf(myFile, "%d", &vetor[i]);
    }
    
         
   printf("Vetor sem ordenar -> ");
   for (i= 0; i < max; i++)
      printf("%d ", vetor[i]);
      
   ordena(vetor); // Chama a proxima fun��o
   
}

void ordena(int vetor[]) // Fun��o que ordena o vetor com o metodo Bubble Sort
{
   int i, j;
   int auxiliar;
    
    for (i= 0; i < max; i++) {
        for (j= 0; j < max; j++)
        {
            if (vetor[i] < vetor[j])
            {
                auxiliar= vetor[i]; // auxiliar guarda valor da posi��o [i] do vetor
                vetor[i]= vetor[j]; // a posi��o [i] agora recebe o valor da posi��o [j]
                vetor[j]= auxiliar; // a posi��o [j] recebe o valor que est� na auxiliar
            }
        }
    }
    
    exibe(vetor); // Chama a proxima fun��o
}

void exibe(int vetor[]) // Fun��o que printa os valores ordenados
{
   int i;
   
   printf("\n\n");
   
   printf("Vetor ordenado > ");   
   for (i= 0; i < max; i++)
      printf("%d ", vetor[i]);
      
}
