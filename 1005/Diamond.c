#include <stdio.h>
#include <stdlib.h>

// Program kullanýcýdan satýr sayýsý alýp o satýr sayýsýnda içi boþ yýldýz kaplamalý bir baklava yapýyor.

int main() {
	int a, b, i, j;
	
	printf("Please enter number of rows:	");
	scanf("%d", &a);
	
		for(i=1 ; i<=a/2 ; i++){			//Ýlk for döngüsünde, baklavanýn üst tarafýný yapýyoruz bu yüzden a/2 ifadesini kullandýk. Bu döngü her tekrarlandýðýnda bir satýr yazýlýp alt satýra inilmiþ oluyor. Döngü þartlarý bitince üst taraf da bitiyor.
			
			for(b=a/2 ; b>=i ; b--){		//Satýrýn solundaki yýldýzlarý basýyoruz 	1
				printf("*");
			}
			for(j=1 ; j<i ; j++ ){			//satýrýn sol yarýsýndaki boþluklar   		2
				printf(" ");
			}
			for(j=1 ; j<i ; j++){			//satýrýn sað yarýsýndaki boþluklar			3
				printf(" ");
			}
			for(b=a/2 ; b>=i ; b-- ){		//satýrýn sað yarýsýndaki yýldýzlar			4
				printf("*");
			}			
			printf("\n");
		}
		
		for(i=1 ; i<=a/2 ; i++){			//Ýkinci for döngüsü, Baklavanýn alt tarafýný basýyoruz.
		
			for(j=1 ; j<=i ; j++){			//satýr sol yýldýzlar   3
				printf("*");
			}
			for(b=a/2 ; b>i ; b--){			//satýr sol boþluklar 	4
				printf(" ");
			}
			for(b=a/2 ; b>i ; b--){		//satýr sað boþluklar 	1
				printf(" ");
			}
			for(j=1 ; j<=i ; j++){			//satýr sað yýldýzlar
				printf("*");
			}
			
			printf("\n");
		}
		
		
		
		
		
		
		
	return 0;
}
