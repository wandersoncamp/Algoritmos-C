#include<stdio.h>

int main(){
	int q[10],i,maior;
	
	for(i=0;i<=9;i++){
	printf("Informe o valor para a posicao %d: ", i);
	scanf("%d", &q[i]);
	
	while(q[i]<=0){
	printf("Informe um valor POSITIVO para a posicao %d: ",i);
	scanf("%d", &q[i]);
	}	
	
		
	}
	for(i=1;i<10;i++){
		if(q[i]>q[maior]){
			maior=i;
		}
	}
	printf("O maior valor = %d, na posicao %d", q[maior],maior);
}
