#include<stdio.h>

void fat (int n){
	printf("%d", &n);
}

int main (){
int fat, n;


printf("Informe um valor: ");
scanf("%d", &n);

for(fat = 1; n > 1; n = n - 1)
fat = fat * n;

	printf("\nO Fatorial eh: %d", fat);	

return 0;
}

