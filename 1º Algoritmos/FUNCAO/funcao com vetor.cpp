#include<stdio.h>
#include<stdlib.h>

main (){
	
}
void ordena(int v[]){
	int i,x,aux;

		for(i=0;i<=9;i++){
			for(x=i;x<=9;x++){
				if(v[x]>v[i]){
					aux=v[i];
					v[i]=v[x];
					v[x]=aux;
				}
			}
		}
	}
