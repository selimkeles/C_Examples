#include <stdio.h>
#include <math.h>

int main(void){
	double x;
	double y;
	double z;
	
	printf("please enter the x value:	");
	scanf("%lf", &x);
	printf("\n");
	printf("please enter the y value:	");
	scanf("%lf", &y);
	printf("\n");
	
	z=5*x*x*x+3*y*y+x/y+2;
	printf("Calculated z=	%lf", z);
	
	return 0;
	}
