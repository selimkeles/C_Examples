#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void){
	double a, b, c;

	scanf("%lf",&a);
	b=((9*(a+273.15))/5);
	c=(((9*a)/5)+32);
	printf("\n");
	printf("The temperature in Rankine:		%lf",b); 
	printf("\n");
	printf("The temperature in fahrenheit:		%lf",c);
	
	getch();
	return 0;
}
