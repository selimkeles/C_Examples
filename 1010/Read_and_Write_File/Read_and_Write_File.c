#include <stdio.h>
#include <stdlib.h>


int main() {
	int account;
	char name[20];
	double balance;
	
	FILE *cfptr;
	cfptr=fopen("clients.dat","w+");
	
	if((cfptr==NULL))
		printf("ERROR");
	else{
		printf("%s\n%s\n%-10s%-10s%10s\n%s","Enter EOF to end input","Enter the accounts","Number","Name","Balance","=>>>");
	scanf("%d%s%lf",&account,name,&balance);
	
	while(!feof(stdin)){
		fprintf(cfptr,"%d %s %.2f\n", account,name,balance);
		printf("=>>>");
		scanf("%d%s%lf",&account,name,&balance);
	}
	
	
	rewind(cfptr);

	if((cfptr==NULL))
		printf("ERROR");
	else{
	printf("The content of the file is:\n");
		fscanf( cfptr,"%d%s%lf",&account,name,&balance);
		
	while(!feof(cfptr)){
	printf("%-10d%-10s%10lf\n",account,name,balance);	
		fscanf( cfptr,"%d%s%lf",&account,name,&balance);		
	}
	fclose(cfptr);
}
	
	

	
	return 0;
}}
