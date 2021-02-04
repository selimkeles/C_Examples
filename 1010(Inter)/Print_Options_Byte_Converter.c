#include <stdio.h>
#include <stdlib.h>

int main() {
	float mb,gb,tb,kb,byte;
	printf("Please enter a MB value:");
	scanf("%f",&mb);
	byte=mb*1048576;
	kb=mb*1024;
	gb=mb/1024;
	tb=mb/1048576;
	printf("\n\%.f\tMB is equal to:\n-------------------------",mb);
	printf("\n%.f\tMB=%12.4G BYTE",mb,byte);
	printf("\n%.f\tMB=%12.4G KB",mb,kb);
	printf("\n%.f\tMB=%12.4G MB",mb,mb);
	printf("\n%.f\tMB=%12.4G GB",mb,gb);
	printf("\n%.f\tMB=%12.3E TB",mb,tb);

	return 0;
}
