#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int deger;
	int sayac;
	int faktoriyel = 1;
	
	scanf("%d", &deger);
	
	for(sayac=1 ; sayac<=deger ; sayac++)
	{
		faktoriyel*=sayac;
	}
	
	printf("%d", faktoriyel);
	return 0;
}
