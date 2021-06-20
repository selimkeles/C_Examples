#include <stdio.h>
#include <stdlib.h>
int isPrime(int num);
int main() {
	int arr1[10], arr2[10],i,x,c,j=0;
	
	printf("Array elements before removing prime number:\n");
	
	for(i=0 ; i<10 ; i++){
		scanf("%d", &arr1[i]);
		x=isPrime(arr1[i]);
		
		if(x==0){
		arr2[j]=arr1[i];
		j++;
		}
	}
	printf("Array elements after removing prime numbers:");
	for(c=0 ; c<j ; c++){
	printf("%d ", arr2[c]);
}
return 0;
}

int isPrime(int num){
	int i;
	int flag;
	
	if(num==1)
	return 0;
	
	else if(num)
	for(i=2 ; i<num ; i++){
		if(num%i==0)
		return 0;
	}
	else
	return 1;
}
