#include <stdio.h>
#include <stdlib.h>

// Program kullan�c�dan sat�r say�s� al�p o sat�r say�s�nda i�i bo� y�ld�z kaplamal� bir baklava yap�yor.

int main() {
	int a, b, i, j;
	
	printf("Please enter number of rows:	");
	scanf("%d", &a);
	
		for(i=1 ; i<=a/2 ; i++){			//�lk for d�ng�s�nde, baklavan�n �st taraf�n� yap�yoruz bu y�zden a/2 ifadesini kulland�k. Bu d�ng� her tekrarland���nda bir sat�r yaz�l�p alt sat�ra inilmi� oluyor. D�ng� �artlar� bitince �st taraf da bitiyor.
			
			for(b=a/2 ; b>=i ; b--){		//Sat�r�n solundaki y�ld�zlar� bas�yoruz 	1
				printf("*");
			}
			for(j=1 ; j<i ; j++ ){			//sat�r�n sol yar�s�ndaki bo�luklar   		2
				printf(" ");
			}
			for(j=1 ; j<i ; j++){			//sat�r�n sa� yar�s�ndaki bo�luklar			3
				printf(" ");
			}
			for(b=a/2 ; b>=i ; b-- ){		//sat�r�n sa� yar�s�ndaki y�ld�zlar			4
				printf("*");
			}			
			printf("\n");
		}
		
		for(i=1 ; i<=a/2 ; i++){			//�kinci for d�ng�s�, Baklavan�n alt taraf�n� bas�yoruz.
		
			for(j=1 ; j<=i ; j++){			//sat�r sol y�ld�zlar   3
				printf("*");
			}
			for(b=a/2 ; b>i ; b--){			//sat�r sol bo�luklar 	4
				printf(" ");
			}
			for(b=a/2 ; b>i ; b--){		//sat�r sa� bo�luklar 	1
				printf(" ");
			}
			for(j=1 ; j<=i ; j++){			//sat�r sa� y�ld�zlar
				printf("*");
			}
			
			printf("\n");
		}
		
		
		
		
		
		
		
	return 0;
}
