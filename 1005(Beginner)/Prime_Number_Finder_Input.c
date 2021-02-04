#include <stdio.h>
#include <stdlib.h>


int main() {
	int fringe, i, j, mod;
	
	printf("please enter a value to calculate prime numbers: ");
	scanf("%d", &fringe);
	
	for(i=2 ; i<=fringe ; i++){
		
		for(j=1 ; j<=i ; j++){
				
			if(i%j==0)
			mod++;
	}
			if(mod==2){
				mod=i;
				printf("%d ", mod);
			}
			mod=0;
		}
		
	return 0;
}
