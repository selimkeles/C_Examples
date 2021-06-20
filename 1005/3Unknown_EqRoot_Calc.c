#include <stdio.h>
#include <stdlib.h>
int pow(int a, int b);
int main() {
	int a, b, c, d;
	int delta;
	
	printf("Enter the coefficients a,b,c,d of a third degree polynomial:");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	delta= (18*a*b*c*d) - 4*pow(b, 3)*d + pow(b, 2)*pow(c, 2) - 4*a*pow(c, 3) - 27*pow(a, 2)*pow(d, 2);
	
	if(delta>0)
	printf("Delta:%d  This equation has all real roots", delta);
	
	else if(delta<0)
	printf("Delta:%d  This equation has 1 real root and 2 complex conjugate roots", delta);
	
	else
	printf("Delta:%d  This equation has 3 root with all of them equal to 0");
	
	return 0;
}

int pow(int a, int b){
	int i;
	int c=1;
	for(i=1; i<=b; i++)
		c*=a;
		
		
	return c;
}
