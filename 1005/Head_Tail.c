#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int heads=0, tails=0, a, b, storage;
	srand(time(0));
	printf("Enter number of coin toss:");
	scanf("%d", &b);
	
	for(a=0 ; a<b ; a++){

	storage=rand()%2;
			if(storage==1){
				heads++;
							}
			else{
				tails++;
							}
	
}
	
	printf("Number of heads\t\t\t\tNumber of tails\n%d\t\t\t\t\t%d", heads, tails);
	
	return 0;
}
