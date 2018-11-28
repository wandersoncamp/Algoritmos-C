#include <stdio.h>
 
int main()
{
    float a, b, x;
 
    printf("f(x) = ax + b \n");
    printf("a = "); 
	scanf("%f", &a);
    printf("b = "); 
	scanf("%f", &b);
 
    x = - b / a;
 
    printf("x = %i ", x);
 
    return 0;
}
