#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
struct member{
	int data1;
	char data2[32];
};

int main() {
	struct member s, *sp;
	sp=&s;
	
	printf("Please input DATA1 and DATA2 :\n");
	scanf("%d%*c", &(sp->data1));
	
	fgets(sp->data2,sizeof(sp->data2),stdin);
	sp->data2[strlen(s.data2)]='\0';
	
	printf("output 1 = %d \n", sp->data1);
	printf("output 2 = %s \n", sp->data2);
	return 0;
}
