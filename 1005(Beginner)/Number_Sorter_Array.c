#include <stdio.h>
#include <stdlib.h>


int main() {
	int a, difference, i, k;
	printf("Please enter how many values you will enter:		");
	scanf("%d", &a);
	int arr(1);
	
	for(i=0 ; i<a ; i++){
		printf("\nValue %d is:	", i+1);
		scanf("%d", &arr[i]);
	}
	
	int temppositive=arr[0];
	int tempnegative=arr[0];
	for(k=0 ; k<a ; k++){
		
		if(arr[k]>temppositive){
		temppositive=arr[k];
		}
		else if(arr[k]<tempnegative){
		tempnegative=arr[k];
		}
	}
	difference=temppositive-tempnegative;
	
	printf("\nDifference between your highest value and lowest value is %d", difference);
	
return 0;
}
