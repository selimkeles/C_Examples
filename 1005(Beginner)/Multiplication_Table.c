#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int i, j;
	
	for(i=1 ; i<=10 ; i++){
		for(j=1 ; j<=10 ; j++){
			printf("%2.d x %2.d = %2.d |", i, j, i*j);
		}
		printf("\n");
	}
	return 0;
}
