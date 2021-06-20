#include <stdio.h>
#include <stdlib.h>


int main() {
	int x;
	int arr[5];
	printf("Enter your 5 digit value's digit one by one:");
	
	for(x=0 ; x<5 ; x++){
	
		scanf("%d", arr[x]);
	}
	
	if(arr[0]==arr[4] && arr[1]==arr[3])
	printf("Its a palindrome number");
	else
	printf("Its not a palindrome number");
	return 0;
}
