#include<stdio.h>

int main(){
	int tempo,seg,hr,min;
	
	seg=3600;
	
	printf("Informe a duracao do evento em segundos: ");
	scanf("%d",&tempo);
	
	hr = (tempo/seg);
	min = (tempo-(seg*hr))/60;
	seg = (tempo-(seg*hr)-(min*60));
	printf("%dh : %dm :%ds \n",hr,min,seg); 
	
	
}
