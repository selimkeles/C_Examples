#include <stdio.h>
#include <stdlib.h>


int main() {
	int x, y;
	int a, b, c, d, f;
	
	printf("Enter a five digit number:		");
	scanf("%d", &x);
	
	if(x<100000 && x>9999){
	
	y=x;					// y'yi x'e e�itledik ��nk� en son printf fonksiyonuyla �unu girmi�tiniz diyece�iz ve x de�i�mi� olacak bu y�zden y de�erini kullan�c�dan ald���m�z x de�erine sabitliyoruz 
	
	f=x%10;
	x-=f;
	x/=10;					//ilk basama��n degerini buldurup f e yazd�rd�k di�er basamaklara devam edebilmek i�in f'i x'ten ��kard�k
	
	d=x%10;
	x-=d;
	x/=10;					//Her basamak i�in tekrarl�yoruz
	
	c=x%10;
	x-=c;
	x/=10;
	
	b=x%10;
	x-=b;
	x/=10;
	
	a=x%10;					//son basamakta ��karmna ve b�lme yapmam�za gerek yok ��nk� sonraki basama�a gitmeyce�iz
	
	printf("%d=		%dx10^4+	%dx10^3+	%dx10^2+	%dx10+	%d", y,a,b,c,d,f);
	
	}
	else
	printf("Error please enter 5 digit number");
	
	
	
	
	return 0;
}
