#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <conio.h>
#include <math.h>
#include <time.h>
typedef struct{
	int seatNum;
	char name[15];
	char surname[15];
	char gender;
}bus;

int Menu();
void textFile(FILE *textptr,FILE *fptr);
void updateSeat(FILE *fptr);
void newReservation(FILE *fptr);
void deleteReservation(FILE *fptr);

bus blankreserve={0,"","",' '};		//blank reserve for defining file

FILE *textptr,*fptr; 					//pointer for random and sequential file
int main() {
	
	fptr=fopen("cokoturgacligoturgec.dat","rb+");			//opens random access file
	if(fptr==NULL)
		printf("ERROR FILE COULD NOT BE OPEN");			//Error message

	else{
	int x;									//choice
	
	while((x=Menu())!=5){					//Loop for menu
	
	switch(x){
		case 1:
		textFile(textptr,fptr);				//Turns random access file to text file
		break;
		case 2:
		updateSeat(fptr);
		break;
		case 3:
		newReservation(fptr);
		break;
		case 4:
		deleteReservation(fptr);
		break;
		default:
		printf("\nInvalid choose");			//Error messages for invalid chooses
		break;
	}										//end of switch
		
	}    									//end of while
	printf("\n\nGoodbye");
}											//end of else
	fclose(fptr);
	fclose(textptr);
	return 0;
}											// end of main
int Menu(void){
	int choose;
	printf("\n1: Print reserves to the text file\n");
	printf("2: Update a reservation\n");
	printf("3: New reservation\n");
	printf("4: Delete reservation\n");
	printf("5: Exit\n");
	printf("-----Please choose the number of the process you want to realize-----\n=>");
	
	scanf("%d",&choose);
	return choose;
}
void textFile(FILE *textptr,FILE *fptr){
	bus temp;
	
	textptr=fopen("seats.dat","w");
	
	if(textptr==NULL)
	printf("ERROR TEXT FILE COULD NOT BE OPEN");
	else{
	rewind(fptr);													//returns random access files pointer to the beginning
	fread(&temp,sizeof(bus),1,fptr);								//reads first argument from random access file
	while(!feof(fptr))
	{
	fprintf(textptr,"%-5d%20s%20s%5c\n",temp.seatNum,temp.name,temp.surname,temp.gender);		//writes to text file
	fread(&temp,sizeof(bus),1,fptr);															//takes other	argument
	}																							//end of while

	}																							//end of else
	printf("\nWriting to text file is done, check the file\n");
}																								//end of function
void updateSeat(FILE *fptr){
	int seat; 																					//seat number
	bus temp2;																					//temporary struct
	printf("\nPlease choose the seat between 0-101 you want to update:	");	
	scanf("%d",&seat);
	fseek(fptr,(seat-1)*sizeof(bus),SEEK_SET);													//positioning the file pointer
	fread(&temp2,sizeof(bus),1,fptr);															//reading data from file
	if(temp2.seatNum==0)																		//check for emptiness and range
		printf("\nERROR THIS SEAT IS ALREADY EMPTY\n");
	else{
	printf("\n%-5d%20s%20s%5c\n",temp2.seatNum,temp2.name,temp2.surname,temp2.gender);
	printf("Please enter a Name, Surname and Gender of passanger:\n");
	scanf("%s %s %c",temp2.name,temp2.surname,&temp2.gender);									//gets passengers data from user
	fseek(fptr,(seat-1)*sizeof(bus),SEEK_SET);													//pointer has shifted, positioning again
	fwrite(&temp2,sizeof(bus),1,fptr);															//Writes on to older data
	printf("\nUpdating the reservation is done\n");

	}																							//end of else
}																								//end of function
void newReservation(FILE *fptr){
	int seat;																					//seat number
	bus data;																					//temporary data structure
	printf("\nPlease choose the seat between 0-101 you want to reserve:	");
	scanf("%d",&seat);
	fseek(fptr,(seat-1)*sizeof(bus),SEEK_SET);													//positioning the file pointer
	fread(&data,sizeof(bus),1,fptr);															//reading data from file
	if(data.seatNum!=0)																			//checks for emptiness and range
	printf("\nERROR THIS SEAT IS RESERVED TRY ANOTHER SEAT\n");
	else{
	printf("Please enter a Name, Surname and Gender of passanger:\n");
	scanf("%s %s %c",data.name,data.surname,&data.gender);										//gets passengers data from user
	data.seatNum=seat;																			//corrects data.seatnum, because its 0 now
	fseek(fptr,(seat-1)*sizeof(bus),SEEK_SET);													//pointer has shifted, positioning again
	fwrite(&data,sizeof(bus),1,fptr);															//writes data on to empty record
	printf("\nAdding reservation has done succesfully\n");
	}																							//end of else
}																								//end of function
void deleteReservation(FILE *fptr){
	int seat;																					//seat number
	bus deltemp;																				//temporary data structure
	printf("\nPlease choose the seat you want to delete:	");
	scanf("%d",&seat);
	fseek(fptr,(seat-1)*sizeof(bus),SEEK_SET);													//positioning the file pointer
	fread(&deltemp,sizeof(bus),1,fptr);															//reading data from file
	if(deltemp.seatNum==0)																		//check for emptiness and range
		printf("\nERROR THIS SEAT IS ALREADY EMPTY\n");
	else{
	fseek(fptr,(seat-1)*sizeof(bus),SEEK_SET);													//pointer has shifted, positioning again
	fwrite(&blankreserve,sizeof(bus),1,fptr);													//Writes on to older data
	printf("\nDeleting the reservation is done\n");

	}
}
