#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a,b;
	printf("Enter two number, please.>>");
	scanf("%X %X", &a,&b);
	a*=b;
	printf("\n\nOctal Form\t\t\t=%o",a);
	printf("\nDecimal Form\t\t\t=%d",a);
	printf("\nHexadecimal Form\t\t=%X",a);
	return 0;
}
