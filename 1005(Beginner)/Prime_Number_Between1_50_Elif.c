#include <stdio.h>
#include <stdlib.h>



int main() {
	int a;
	
	printf("please enter a value between 0-50:		");		scanf("%d", &a);
	
	if(a<50 && a>0){

			if(!(a%=2))
			printf("Your value is not a prime number");
			
			else if(!(a%=3))
			printf("Your value is not a prime number");
			
			else if(!(a%=5))
			printf("Your value is not a prime number");
			
			else if(!(a%=7))
			printf("Your value is not a prime number");
			
			else if(!(a%=11))
			printf("Your value is not a prime number");

			else if(!(a%=13))
			printf("Your value is not a prime number");
			
			else if(!(a%=17))
			printf("Your value is not a prime number");
			
			else if(!(a%=19))
			printf("Your value is not a prime number");
			
			else if(!(a%=23))
			printf("Your value is not a prime number");
			
			else if(!(a%=29))
			printf("Your value is not a prime number");
			
			else if(!(a%=31))
			printf("Your value is not a prime number");
			
			else if(!(a%=37))
			printf("Your value is not a prime number");
			
			else if(!(a%=41))
			printf("Your value is not a prime number");
			
			else if(!(a%=43))
			printf("Your value is not a prime number");
			
			else if(!(a%=47))
			printf("Your value is not a prime number");
			
			else
			print("Your value is prime");
		
			
		}
			else
			printf("I said enter a value between 0-50");
	return 0;
}
