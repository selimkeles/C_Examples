#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void reversebits(unsigned a){
	unsigned c;
	int counter=0;
	unsigned displaymask=1;
	unsigned b;											
	printf("%15u= ",b);
	
	for(c=1 ;c <=32 ; c++){
	//	putchar(a & displaymask ? '1' : '0');
	if((a&displaymask)==1){
		putchar('1');
		b+=pow(2,counter);
		counter++;
		a>>=1;
	}
	else{
		putchar('0');
		counter++;
				a>>=1;
	}
		if(c%8==0)
			putchar(' ');
	}
		printf("%15u= ",b);

}
void normalbits(unsigned b){
	unsigned c;
	
	unsigned displaymask=1<<31;

	printf("%15u= ",b);
	
	for(c=1 ;c <=32 ; c++){
		putchar(b & displaymask ? '1' : '0');
		b<<=1;
		if(c%8==0)
			putchar(' ');
	}
}
int main() {
	unsigned x;
	
	printf("Enter an integer:"); scanf("%u",&x);
	normalbits(x);
	printf("\n");
	reversebits(x);
	
	return 0;
}

