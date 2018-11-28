//WANDERSON PACHECO DE L. SILVA
//RESOLUÇÃO DA QUESTÃO 3. DA LISTA
//17/09/2018
#include<stdio.h>
#include<stdlib.h>

int main(){
    int vet[20],n1=0,n2=0,x=0;
    for(n1=0; n1<20; n1++){
        printf("Informe um numero: ", n1+1);
        scanf("%d", &vet[n1]);
    } 
    
    printf("\n\n Informe um numero da lista acima: ");
    scanf("%d",&n2);
    
	    for(n1=0;n1<20;n1++){
	        if(vet[n1]==n2) {
	            x++;
	        }
	    }
		    if(x!=0){
				printf("\nO numero %d aparece %d vezes.", n2, x);
			}
}
