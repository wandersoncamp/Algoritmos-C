#include<stdio.h>

void ordena(int v[]){
}

main (){
int  v[10],x;

for(x=0;x<=10;x++){
	printf("Informe o valor do vetor: ");
	scanf("%d", &v[x]);
}

ordena(v);

for(x=0;x<=10;x++){
	printf("%d\n",v[x]);	
}
}
