#include <stdio.h>
#include <stdlib.h>

unsigned long int catalan(unsigned int n);
int main() {
	int i;
	int arr[10];
	for(i=0 ; i<10 ; i++){
		arr[i]=catalan(i);
		printf("%d\t", arr[i]);
	}
	return 0;
}

unsigned long int catalan(unsigned int n){
	int j;
	int c=0;
	if(n<=1){
		return 1;
	}

	for(j=1 ; j<n ; j++){
	c+=catalan(j)*catalan(n-j);
	
	}
	return c;
}
