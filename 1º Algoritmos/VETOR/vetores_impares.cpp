#include<stdio.h>

main(){
	int x, valores[10];
	
	for(x=0;x<=9;x++){
		printf("Informe um valor para a posicao D: ", x);
		scanf("%d",&valores[x]);
	}
	for(x=1;x<=9;x=x+2){
		printf("\nO elemento da posicao %d vale: %d",x,valores[x]);
		}
}
