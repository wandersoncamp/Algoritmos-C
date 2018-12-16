#include<stdio.h>
#define DIM 5

int main(void){

typedef struct{
		int matricula;
		float media;
	} Alunos;
	
	Alunos alunos[DIM];
	int i ;
	
	for(i=0;i<DIM;i++){
		
		printf("\nMatricula do aluno: ");
		scanf("%d", &alunos[i].matricula);
		
		printf("Media do aluno: ");
		scanf("%f", &alunos[i].media);
		
	}
	
	for(i=0;i<DIM;i++){
	printf("\nAluno %d\n", alunos[i].matricula);
	printf("\nMedia: %f\n", alunos[i].media);
	}
	 return 0;
}
