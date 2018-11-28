#include<stdio.h>

int main(){

int km_inicial,km_final,qtd_litros,media;

printf("Informe a quilometragem inicial: ");
scanf("%d",&km_inicial);
printf("Informe a quilometragem final: ");
scanf("%d",&km_final);
printf("Informe a quantidade de litros consumida: ");
scanf("%d",&qtd_litros);

media = (km_final - km_inicial) / qtd_litros;

printf("A media de consumo eh %d", media);

	
}
