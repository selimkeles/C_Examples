#include <stdio.h>
#include <stdlib.h>


int main(){
	int person,product,i,j,k,arr[4][5];
	double totalsales;
	printf("Enter the salesperson, product and total sales\nEnter -1 for the salesperson to end input\n");
	do{
		scanf("%d %d %f", &person, &product , &totalsales);
		printf("\n");
		if(person>4){
			printf("ERROR");
			break;
		}
		arr[person][product]=totalsales;
	
	}
	while(!(person==-1));
	
	printf("\t\t1\t2\t3\t4\n");
	for(i=0; i<4 ; i++){
		printf("%d\t", i);
		for(j=0 ; j<5 ; j++){
			printf("%4.2d", arr[i][j]);
		}
		printf("\n");
	}
	
	
		return 0;
}
