#include <stdio.h>
#include <stdlib.h>

enum months {
	January=1,February,March,April,May,June,July,August,September,October,November,December
};
enum seasons{Winter=1,Spring,Summer,Autumn
};

int main() {
	enum months month;
	enum seasons season;
	
	const char *monthName[]={"","January","February","March","April","May","June","July","August","September","October","November","December"};
	const char *seasonName[]={"","Winter","Spring","Summer","Autumn"};
	printf("%2s%15s%10s\n","No","Month","Season");
	for(month=January;month<=December;month++){
		season=1+month/3;
		if(season==5)
			season=Winter;
		printf("%2d%15s%10s\n",month,monthName[month],seasonName[season] );
}
	return 0;
}
