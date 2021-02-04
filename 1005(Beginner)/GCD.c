#include <stdio.h>
#include <stdlib.h>

int ebob(int x,int y);
int x,y,gcd,i,a;
int main() {
	printf("Please enter first number:");
	scanf("%d", &x);
	printf("\nPlease enter second number:");
	scanf("%d", &y);
	
	gcd=ebob(x,y);
	printf("\ngcd is:%d", gcd);
	return 0;
}

int ebob(int x, int y){
	for(i=1; i<=x && i<=y ; i++){
		if(x%i==y%i){
		a=i;
	}
	}
	return a;
}

