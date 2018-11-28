#include<stdio.h>

main(){
	int x, valores[10];
	
	for(x=0;x<=9;x++){
		printf("Informe um valor para a posicao d: ", x);
		scanf("%d",&valores[x]);
	}
	for(x=0;x<=9;x++){
		printf("\nO elemento da posicao %d vale: %d",x,valores[x]);
	}
}
