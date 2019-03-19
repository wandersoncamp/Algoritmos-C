/*
	ORDENAÇÃO BUBBLE-SORT
	ARTUR ROBSON E WANDERSON PACHECO 
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define max 10000 

// Chamando as funções que foram criadas ao longo do código..
void preenche();
void ordena();
void exibe();


main() {       //Função principal
   int vetor[max];
   preenche(vetor);
}

void preenche(int vetor[]) //Função que preenche o Vetor  e chama o arquivo
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
      
   ordena(vetor); // Chama a proxima função
   
}

void ordena(int vetor[]) // Função que ordena o vetor com o metodo Bubble Sort
{
   int i, j;
   int auxiliar;
    
    for (i= 0; i < max; i++) {
        for (j= 0; j < max; j++)
        {
            if (vetor[i] < vetor[j])
            {
                auxiliar= vetor[i]; // auxiliar guarda valor da posição [i] do vetor
                vetor[i]= vetor[j]; // a posição [i] agora recebe o valor da posição [j]
                vetor[j]= auxiliar; // a posição [j] recebe o valor que está na auxiliar
            }
        }
    }
    
    exibe(vetor); // Chama a proxima função
}

void exibe(int vetor[]) // Função que printa os valores ordenados
{
   int i;
   
   printf("\n\n");
   
   printf("Vetor ordenado > ");   
   for (i= 0; i < max; i++)
      printf("%d ", vetor[i]);
      
}
