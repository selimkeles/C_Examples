#include <stdio.h>
#include <stdlib.h>


int main() {
	int x, y;
	int a, b, c, d, f;
	
	printf("Enter a five digit number:		");
	scanf("%d", &x);
	
	if(x<100000 && x>9999){
	
	y=x;					// y'yi x'e eþitledik çünkü en son printf fonksiyonuyla þunu girmiþtiniz diyeceðiz ve x deðiþmiþ olacak bu yüzden y deðerini kullanýcýdan aldýðýmýz x deðerine sabitliyoruz 
	
	f=x%10;
	x-=f;
	x/=10;					//ilk basamaðýn degerini buldurup f e yazdýrdýk diðer basamaklara devam edebilmek için f'i x'ten çýkardýk
	
	d=x%10;
	x-=d;
	x/=10;					//Her basamak için tekrarlýyoruz
	
	c=x%10;
	x-=c;
	x/=10;
	
	b=x%10;
	x-=b;
	x/=10;
	
	a=x%10;					//son basamakta çýkarmna ve bölme yapmamýza gerek yok çünkü sonraki basamaða gitmeyceðiz
	
	printf("%d=		%dx10^4+	%dx10^3+	%dx10^2+	%dx10+	%d", y,a,b,c,d,f);
	
	}
	else
	printf("Error please enter 5 digit number");
	
	
	
	
	return 0;
}
