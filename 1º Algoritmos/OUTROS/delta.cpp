#include<stdio.h>
#include<math.h>

int main(){
	int a,b,c,d;
	
printf("a = ");
scanf("%d", &a);
printf("b = ");
scanf("%d", &b);
printf("c = : ");
scanf("%d", &c);

d=pow(b,2)-4*a*c;

printf("Delta é igual a = %d", d);

}
