#include<stdio.h>
#include <stdlib.h>

int main (){
int matriz [3] [3];
int i,x,soma=0,num;

for(i=0;i<3;i++){
    printf("preenchendo a linha %d da matriz ",i);	

for(x=0;x<3;x++){
	printf("\n entre com os valores da linha %d coluna %d da matriz: ",i,x);
	scanf("%d",&num);
	matriz[i] [x]=num;
	soma=soma+matriz [i] [x];
}
}

printf("A soma e %d",soma);
}
