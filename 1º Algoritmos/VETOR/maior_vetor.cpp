#include<stdio.h>
#include <conio.h>

main(){
	int maior,i,c[5];
	
	for(i=0;i<=4;i++){
		printf("Informe um valor para a posicao : ", i);
		scanf("%d",&c[i]);
	}
	 
    for(i=0;i<=4;i++){
    	if(c[i]>maior)
	maior = c[i];
	}
   
    printf("\n\n Maior: %d\n", maior);
    
     
}
