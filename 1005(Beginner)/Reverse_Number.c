#include <stdio.h>
#include <stdlib.h>

int cevir(int sayi);
int sayi, a, newsum=0;


int main() {
	printf("Please enter a value which you want to make reverse:	");
	scanf("%d", &sayi);
	
	a=cevir(sayi);
	printf("\nReverse version of your number is :%d", a);
	
	return 0;
}

int cevir(int sayi){
	
		while(sayi!=0){
			newsum*=10;
			newsum+=sayi%10;
			sayi/=10;
		}
		
		return newsum;
}
