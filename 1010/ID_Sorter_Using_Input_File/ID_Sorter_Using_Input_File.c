#include <stdio.h>
#include <stdlib.h>
void showFile(FILE *cfptr);
void sortFile(FILE *cfptr);
struct{
	int idstorage;
	char namestorage[20];
	char surnamestorage[20];
}store[100],temp;
int main() {
	FILE *cfptr;
	
	cfptr=fopen("Input.dat","r+");
	if(cfptr==NULL)
		printf("Error");
	else{
		printf("the content of the file before sorting is:");
		showFile(cfptr);
		printf("\nthe content of the file after sorting is:");
		sortFile(cfptr);
	}
		
	fclose(cfptr);
	
	return 0;
}
void showFile(FILE *cfptr){
	int id;
	char name[20], surname[20];
	
	while(!(feof(cfptr))){
		fscanf(cfptr,"%d %s %s",&id,name,surname);
		printf("\n%-10d%10s%10s",id,name,surname);
		
	}
}
void sortFile(FILE *cfptr){
	FILE *fptr;
	long int id,id2;
	long int a,b,i=0;				//counters
	char name[20], surname[20];
	fptr=fopen("Output.dat","w+");
	rewind(cfptr);
	
	if(fptr==NULL)
	printf("ERROR");
	else{
	fscanf(cfptr,"%d%s%s",&store[i].idstorage,store[i].namestorage,store[i].surnamestorage);
	
	while(!(feof(cfptr))){
	i++;
	fscanf(cfptr,"%d%s%s",&store[i].idstorage,store[i].namestorage,store[i].surnamestorage);
	
}

	for(a=0;a<=i;a++){
		for(b=a+1;b<=i;b++)
		{
			if(store[a].idstorage>store[b].idstorage)
				{
				temp=store[a];
				store[a]=store[b];
				store[b]=temp;	
				}
		
		
		
		}}
		a=0;
		while(a<=i+1){
		fprintf(fptr,"%d %s %s\n",store[a].idstorage,store[a].namestorage,store[a].surnamestorage);	
		a++;
		}
		rewind(fptr);
		fscanf(fptr,"%d %s %s",&id,name,surname);
	while(!(feof(fptr))){
		printf("\n%-10d%10s%10s",id,name,surname);
		fscanf(fptr,"%d %s %s",&id,name,surname);
		
		
				
		}
}
fclose(fptr);
}
