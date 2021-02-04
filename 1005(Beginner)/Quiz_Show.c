#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int falseAnswer();
int trueAnswer();
int Question();

int main() {
	int f1, f2, f3, k, l, m;
	srand(time(0));
	do{
		f1=Question();
		
		if(f1==1){
			f2=trueAnswer();
		}
		else if(f1==0){
			f3=falseAnswer();
		}
	}
	while(f1!=-1);
	return 0;
}

int Question(){
	int x,y,z;
	x=1+rand()%9;
	y=1+rand()%9;
	printf("\nHow much %d x %d <enter -1 to quit>	=	", x ,y);
	scanf("%d", &z);
	
	if(z==x*y){
		return 1;
	}
	else if(z==-1){
		return -1;
	}
	else{
		return 0;
	}
}

int falseAnswer(){
	int a;
	a=1+rand()%4;
	switch(a){
		case 1:
			printf("No. Please try again");
			break;
		case 2:
			printf("Wrong. Try once more");
			break;
		case 3:
			printf("Dont give up");
			break;
		case 4:
			printf("No. Keep trying!");
			break;
	}
	return 0;
}

int trueAnswer(){
	int a;
	a=1+rand()%4;
	switch(a){
		case 1:
			printf("Very good!");
			break;
		case 2:
			printf("Excellent!");
			break;
		case 3:
			printf("Nice Work");
			break;
		case 4:
			printf("Keep up the good work!");
			break;
	}
	return 0;
}
