/*
	Sorts given ages by user input
*/

#include <stdio.h>
#include <stdlib.h>


int main() {
	int age1, age2, age3;
	
	printf("1.yasi gir:		");
	scanf("%d", &age1);
	printf("2.yasi gir:		");
	scanf("%d", &age2);
	printf("3.yasi gir:		");
	scanf("%d", &age3);
	
	if(age1==age2 && age1==age3)
		printf("equal");
		
		else if(age1>age2)
			if(age1>age3)
			printf("age1");
			else
			printf("age3");
		else if(age2>age3)
			printf("age2");
		else
			printf("age3");
			
	return 0;
}
