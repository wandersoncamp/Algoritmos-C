#include<stdio.h>
#include<stdlib.h>
	
	void soma(int a,int b){
		printf("%d", a + b);
	}
	
	void sub(int a,int b){
		printf("%d", a - b );
	}
	
	void mult(int a,int b){
		printf("%d", a * b);
	}
	
	void divi(float a,float b){
		printf("%f", a / b);
	}		 

int main(){

int op, a,b;

printf("----------------\n");
printf("MENU CALCULADORA\n");
printf("1 - SOMA\n");
printf("2 - SUBTRACAO\n");
printf("3 - MULTILICACAO\n");
printf("4 - DIVISAO\n");
printf("5 - SAIR\n");
printf("----------------\n");
printf("\n\n");

printf("Informe a operacao de acordo com o menu: ");
scanf("%d", &op);
	
	if(op==5){
		return 0;
	}

printf("Informe um valor: ");
scanf("%d", &a);

printf("Informe outro valor: ");
scanf("%d", &b);

switch (op)
		{
		case 1:
			soma(a,b);     
		break;
		
		case 2:
			sub(a,b);		      
		break;
		
		case 3:
			mult(a,b);     
		break;
		
		case 4:
			divi(a,b);      
		break;
		
		case 5:	
		break;
		
		default:
			printf("OPERACAO INVALIDA!");
	}
}
