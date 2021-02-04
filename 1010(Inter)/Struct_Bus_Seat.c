#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

struct bus{
	char name[20];
	char surname[20];
	int seat;
}person[26];
int z=0;

int main(){
	int x,y,i,d,c=0;
	for(i=0;i<26;i++){
		person[i].seat=0;
	}
	while(c==0){
	printf("\n0: Exit\n");
	printf("1: Add new reservation\n");
	printf("2: Delete available seats\n");
	printf("3: Show available seats\n");
	printf("4: Show reserved seats\n");
	printf("Please choose the number of the process you want to realize:");
	scanf("%d",&x);
	
	switch(x){
		case 0:
			c=1;
			break;
		case 1:
			printf("----------Add new reservation----------\n");
			printf("Enter seat number");
			scanf("%d",&y);
			if(y<26 && y>0){
					if(person[y].seat!=0){
						printf("This seat is reserved.");
					}
					else{
						person[y].seat=y;
						printf("Enter person name:");
						scanf("%s", person[y].name);
						printf("Enter person surname:");
						scanf("%s", person[y].surname);
						printf("\n-------------------------------------------\n Seat number %d is successfully reserved \n------------------------------------------",y);
						i=26;
					}
				
			}
		break;
		case 2:
			printf("Please enter seat which will be cancelled> ");
			scanf("%d",&d);
			for(i=1;i<26;i++){
				if(person[i].seat==d){
					person[i].seat=0;
					strcpy(person[i].name,"");
					strcpy(person[i].surname,"");
					i=26;
					printf("\n-------------------------------------------\n Your reservation is succesfully deleted \n------------------------------------------");	
				}
				else{
					printf("This seat is already empty.\n");
					i=26;
				}
			}
		break;
		case 3:
			
			printf("Available seats are;\n");
			for(i=1;i<26;i++){
				if(person[i].seat==0){
					printf("%d\n",i);
				}
			}
		break;
		case 4:
			printf("Reserved seats are;\n");
			for(i=1;i<26;i++){
				if(person[i].seat!=0){
					printf("%d\n",i);
				}
			}
		break;
	}
}
	

	return 0;
}
