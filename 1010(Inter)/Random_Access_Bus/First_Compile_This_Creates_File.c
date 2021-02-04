#include <stdio.h>
#include <stdlib.h>
typedef struct{
	int seatNum;
	char name[15];
	char surname[15];
	char gender;
}bus;

int main(){
	bus blankreserve={0,"","",' '};									//blank reserve for defining file
	FILE *busptr,*fptr; 											//pointer for random and sequential file
	fptr=fopen("Cokoturgacligoturgec.dat","wb+");					//opens random access file
	busptr=fopen("bus.dat","r");
	if(fptr==NULL)
	printf("ERROR FILE COULD NOT BE OPEN");							//Error message

	else{
		int i;  													//counter
	for(i=0;i<100;i++)
		fwrite(&blankreserve,sizeof(bus),1,fptr);					//Fills random access file with blank records

				}													//end of else
	if(busptr==NULL)
	printf("ERROR FILE COULD NOT BE OPEN");							//Error message
	else{
	bus temp;														//temporary struct for update null file
	fread(&temp,sizeof(bus),1,busptr);								//reads first argument from random access file
	while(!feof(busptr))
	{
	if(temp.seatNum!=0){
		fseek(fptr,(temp.seatNum-1)*sizeof(bus),SEEK_SET);			//sets pointer to the correct record
		fwrite(&temp,sizeof(bus),1,fptr);							//updates choosen record
}
	fread(&temp,sizeof(bus),1,busptr);								//takes other	argument
	}																//end of while

	}																//end of else
	return 0;
}																	//end of function
