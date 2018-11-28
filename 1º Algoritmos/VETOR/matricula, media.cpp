#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int matricula[10],i;
	float notaTrab[10],notaProva[10],media;
	
	for (i=0;i<=9;i++){
		printf("Informe a matricula: ");
		scanf("%d", &matricula[i]);
				
		printf("Informe a nota da Prova: ");
		scanf("%f", &notaTrab[i]);
			
		printf("Informe a nota do Trabalho: ");
		scanf("%f", &notaProva[i]);
		
		system("cls");
	}
		for(i=0;i<=9;i++){		
			media=(notaTrab[i] + notaProva[i])/2;
			
			if(media>=7){
				printf("Matricula: %d, Media %f, APROVADO!" , matricula[i], media);
				printf("\n");
			}
			else if(media<3){
				printf("Matricula: %d, Media: %f, REPROVADO!", matricula[i], media);
				printf("\n");				
			}
			else{
				printf("Matricula: %d, Media: %f, FINAL!", matricula[i], media);
				printf("\n");
			}
		}
}
