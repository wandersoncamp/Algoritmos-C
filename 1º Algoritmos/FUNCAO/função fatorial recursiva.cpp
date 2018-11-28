#include<stdio.h>

float fat (int n){	
	if(n==0)
		return 1;
	
	return (n * fat(n-1));
}

int main (){
int n, x;


printf("Informe um valor: ");
scanf("%d", &n);

x=fat(n);

printf("O fatorial eh: %d ", x);

return 0;
}

