#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

/*int menu(){	
	int r;
	
	scanf("%d",&r);
	return r;
}*/

void exibeMatriz(int mat[3][3]){ //  FUNÇÃO QUE EXIBE A MATRIZ
	int i,j;
	
	for(i=0;i<3;i++){ 
		for(j=0;j<3;j++){
			printf("%3d ", mat[i][j]);
		}
		printf("\n");
	}	
}

void maiorDP(int mat[3][3]){ // FUNÇÃO QUE RECEBE E EXIBE O MAIOR VALOR DA DIAGONAL PRINCIPAL
	int opcao,i,j,maior,linha,coluna;	
	
    for(i=0;i<3;i++) {
    	for(j=0;j<3;j++){
	
		    if(mat[i][j] > maior){
	        	maior = mat[i][j];
	        	linha=i;
				coluna=j;
	    	}	
		}
	}
    	printf("\nO maior valor da Diagonal Principal é: %2d ", maior);	
		printf("\nE está na linha [%d] coluna [%d] ",linha+1,coluna+1);	
		printf("\n");
	
}

void exit(){ // FUNÇÃO QUE ENCERRA O PROGRAMA
}

int main(){
	setlocale(LC_ALL,"portuguese_Brazil");
	int op,i,j,matriz[3][3];

printf("\n\n");
printf("-----------------------------------------------\n");
printf("              SISTEMA DE MATRIZ \n\n");
printf("DIGITE SUA OPÇÃO: \n\n");	
printf("1 - PREENCHA A MATRIZ 3X3\n");
printf("2 - EXIBIR A MATRIZ\n");
printf("3 - EXIBIR MAIOR VALOR DA DIAGONAL PRINCIPAL\n");
printf("4 - SAIR \n");
printf("-----------------------------------------------\n");
printf("\n\n");
scanf("%d",&op);

	system("cls");
		
		switch (op)
		{
		case 1:				   
		printf("\n ENTRE COM VÁRIOS NÚMEROS. \n\n");
	
	    for (i=0;i<3;i++){ //PREENCHE AS LINHAS
	        for (j=0;j<3;j++) //PREENCHE AS COLUNAS
	        {
	            printf("Linha [%d] Coluna [%d]: ",i+1,j+1);
	            scanf("%d",&matriz[i][j]);
	            
	            //matriz[i][j]=rand()%10-1;
			}
	}    
		break;
		
		case 2:
			printf("\nMatriz Completa\n\n");
			exibeMatriz(matriz); 
		break;
		
		case 3:
			printf("\nMatriz Completa\n\n");
			exibeMatriz(matriz); 
			maiorDP(matriz);
		break;
		
		case 4:
			exit(0);
		break;
		
		default:
			printf("\n NENHUMA OPÇÃO FOI ESCOLHIDA!");
	}
}
