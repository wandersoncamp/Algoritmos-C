#include <stdio.h>
#include <stdlib.h>
#define TAM 5
struct pessoa{
	int matricula;
	float nota1;
	float nota2;
	float nota3;
};
struct pessoa P[TAM];

void inserir(struct pessoa *P){
	int x;
	for (x=0;x<TAM;x++){
		printf("Digite a matricula da pessoa: ");
		scanf("%d",&P[x].matricula);
		printf("Digite a nota da primeira prova: ");
		scanf("%f",&P[x].nota1 );
		printf("Digite a nota da segunda prova: ");
		scanf("%f",&P[x].nota2 );
		printf("Digite a nota da terceira prova: ");
		scanf("%f",&P[x].nota3 );
		system("cls");
	}	
}

main (){
	int x,MaiorProva1=0,MatMaior, MatMenor;
	float media,MaiorMedia=0,MenorMedia=0;
	inserir(P);
	
	for (x=0;x<TAM;x++){
		if (P[x].nota1 > P[MaiorProva1].nota1)
			MaiorProva1=x;
			
		media = (P[x].nota1+P[x].nota2+P[x].nota3)/3;
		
		if (media > MaiorMedia){
			MaiorMedia = media;
			MatMaior = P[x].matricula;
		}
		
		if (x==0){
			MenorMedia = media;
			MatMenor = P[x].matricula;		
		}
		else if (media < MenorMedia){
			MenorMedia = media;
			MatMenor = P[x].matricula;
		}
		
		printf("\n%d\t%f\t%f\t%f\t",P[x].matricula,P[x].nota1,P[x].nota2,P[x].nota3);
		if (media>=6)
			printf("%.2f  APROVADO",media);
		else
			printf("%.2f  REPROVADO",media);
	}
	printf("\nMaior nota da primeira prova %d\t%f",P[MaiorProva1].matricula,P[MaiorProva1].nota1);
	printf("\nMaior media %d\t%f",MatMaior,MaiorMedia);
	printf("\nMenor media %d\t%f",MatMenor,MenorMedia);
	system("pause");
}
