#include <stdio.h>
#include <stdlib.h>
int saniyedonusturucu(int a, int b, int c);
int main() {
	int h1, h2, m1, m2, s1, s2, a, b, c;
	printf("Enter the first time as three integers<hour, minute, second>:	");
	scanf("%d %d %d", &h1, &m1, &s1);
	printf("Enter the second time as three integers<hour, minute, second>:	");
	scanf("%d %d %d", &h2, &m2, &s2);
	
	a=saniyedonusturucu(h1,m1,s1);
	b=saniyedonusturucu(h2,m2,s2);
	
	if(a<b)
	c=b-a;
	else
	c=a-b;
	
	printf("The differce between the times is %d seconds",c);
	
	return 0;
	}
	
	int saniyedonusturucu(int a, int b, int c){
		int result;
		a=a*3600;
		b=b*60;
		result=a+b+c;
		
		return result;
	}
