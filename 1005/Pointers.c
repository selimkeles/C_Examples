#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int y=5, A[]={0,7,3,1,4};
	int *yptr;
	int *p;
	p=A;
	yptr=&y;
	

	printf("\nA=	%d", A);
	printf("\n&A=	%d", &A);
	printf("\nA+3=	%d", A+3);
	printf("\n&A+3=	%d", &A+3);
	printf("\n&A[0]=	%d", &A[0]);
	printf("\n&A[1]=	%d", &A[1]);
	printf("\n&A[2]=	%d", &A[2]);
	printf("\n&A[3]=	%d", &A[3]);
	printf("\n&A[4]=	%d", &A[4]);
	printf("\n&A[0]+3=%d", &A[0]+3);
	printf("\n&A[0]+4=%d\n", &A[0]+4);
	printf("\np=	%d", p);
	printf("\n&p=	%d", &p);
	printf("\n&p+1=	%d", &p+1);
	printf("\np+1=	%d", p+1);
	printf("\n*p=	%d", *p);
	printf("\n*p+1=	%d", *p+1);
	printf("\n*(p+1)=	%d", *(p+1));	
	
	











	return 0;
}
