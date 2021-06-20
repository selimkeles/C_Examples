
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void){
	double midterm;
	double midterm2;
	double final;

	printf("input first midterm exam grade:		");
	scanf("%lf", &midterm);
	printf("\n");
	printf("input second midterm exam grade:	");
	scanf("%lf", &midterm2);
	printf("\n");
	printf("input final exam grade:		");
	scanf("%lf", &final);
	printf("\n");

	double grade;
	grade=(midterm/5.0)+(midterm2/5.0)+((6.0*final)/10.0);
	printf("%lf", grade);
	
	getch();
	return 0;
}
