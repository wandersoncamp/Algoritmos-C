#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int menu(){
	setlocale(LC_ALL,"portuguese_Brazil");
	int op;

printf("\n\n");	
printf("-------------------MENU-------------------\n");
printf("1 - MOSTRAR A MATRIZ\n");
printf("2 - MOSTRAR DIAGONAL PRINCIPAL\n");
printf("3 - MOSTRAR DIAGONAL SECUNDARIA\n");
printf("4 - MOSTRAR ELEMENTOS ABAIXO DA DP\n");
printf("5 - MOSTRAR ELEMENTOS ABAIXO DA SECUNDARIA\n");
printf("6 - MOSTRAR ELEMENTOS ACIMA DA DP\n");
printf("7 - MOSTRAR ELEMENTOS ACIMA DA SECUNDARIA\n");
printf("-------------------------------------------\n");
printf("\n\n");
scanf("%d",&op);
return op;
}

int mostraMatriz(int mat[4][4]){
	int i,j;
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("%3d ", mat[i][j]);
		}
		printf("\n");
	}
	
}

int DP(int mat[4][4]){
	int i,j;
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			if(i==j){
			printf("%3d ", mat[i][j]);
		}else{
			printf("   ");
		}
			}
		printf("\n");
	}
	
}

int DS(int mat[4][4]){
	int i,j;
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
		if(i+j==3){
			printf("%3d ", mat[i][j]);
		}else{
			printf("   ");
		}
			}
			printf("\n");		
	}
		
	}
	


int abaixoDP(int mat[4][4]){
	int i,j;
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
		if(i>j){
			printf("%3d ", mat[i][j]);
		}else{
			printf("   ");
		}
			}
			printf("\n");
	}
	
}

int abaixoDS(int mat[4][4]){
	int i,j;
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
		if(i>=j){
			printf("%3d ", mat[i][j]);
		}else{
			printf("    ");
		}
			}
			printf("\n");
	}
	
}

int acimaDP(int mat[4][4]){
	int i,j;
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			if(i<j){
			printf("%3d ", mat[i][j]);
		}else{
			printf("    ");
		}
			}
			printf("\n");
	}
	
}

int acimaDS(int mat[4][4]){
	int i,j;
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			if(i+j<3){
			printf("%3d ", mat[i][j]);
			}else{
			printf("    ");
			}
		}
		printf("\n");
	}
	
}

int main(){
	setlocale(LC_ALL,"portuguese_Brazil");
	int op,i,j,matriz[4][4];
	
	//printf("Entre com vários números:\n");
    
    for (i=0;i<4;i++){
        for (j=0;j<4;j++)
        {
            //printf("Linha [%d] Coluna [%d]: ",i+1,j+1);
            //scanf("%d",&matriz[i][j]);
            
            matriz[i][j]=rand()%10-1;
		}
	}
	
	op=menu();
	system("cls");
	
	switch (op)
		{
		case 1:
			printf("\nMatriz Completa\n\n");
			mostraMatriz(matriz);     
		break;
		
		case 2:
			printf("\nMatriz Completa\n\n");
			mostraMatriz(matriz);     
			printf("\n\n");
			printf("\nDiagonal Principal\n\n");
			DP(matriz);		      
		break;
		
		case 3:
			printf("\nMatriz Completa!\n\n");
			mostraMatriz(matriz);     
			printf("\n\n");
			printf("\nDiagonal Secundária\n\n");
			DS(matriz);     
		break;
		
		case 4:
			printf("\nMatriz Completa!\n\n");
			mostraMatriz(matriz);     
			printf("\n\n");
			printf("\nElementos Abaixo da Diagonal Pincipal\n\n");
			abaixoDP(matriz);
		break;
		
		case 5:	
			printf("\nMatriz Completa!\n\n");
			mostraMatriz(matriz);     
			printf("\n\n");
			printf("\nElementos Abaixo da Secundária\n\n");
			abaixoDS(matriz);
		break;
	
		case 6:
			printf("\nMatriz Completa!\n\n");
			mostraMatriz(matriz);     
			printf("\n\n");
			printf("\nElementos Acima da Diagonal Principal\n\n");
			acimaDP(matriz);      
		break;
		
		case 7:
			printf("\nMatriz Completa!\n\n");
			mostraMatriz(matriz);     
			printf("\n\n");
			printf("\nElementos Acima da Secundária\n\n");
			acimaDS(matriz);      
		break;
		
		default:
			printf("\nOPERACAO INVALIDA!");
	}

}
