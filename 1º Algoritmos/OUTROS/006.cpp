#include<stdio.h>
int main(){
	int matricula,idade,sexo;
	
	printf("Informe a matricula: ");
	scanf("%d",&matricula);
	printf("Informe a idade: ");
	scanf("%d",&idade);
	printf("Iforme o Sexo:  1 para masculino e 2 para feminino: ");
	scanf("%d",&sexo);
	
	if (sexo == 1){
		printf("\n Sexo Masculino! \n");
	}
	else if(sexo == 2){
		printf("\n Sexo Feminino! \n");
	}
	else{
		printf("\n Sexo Invalido!! \n");
	}
	
	printf("\n Matricula %d \n", matricula);
	printf("\n Idade %d \n",idade);
	
}
