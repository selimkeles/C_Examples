#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *nextPtr;
};

typedef struct node node;
typedef node *nodeptr;

void instructions();
int pop(nodeptr *hptr);
void push(nodeptr *hptr, int value);
void printstack(nodeptr currentptr);
int isempty(nodeptr hptr);


int main() {
	nodeptr headptr= NULL;
	int choice;
	int item;
	instructions();
	printf("?	");
	scanf("%d",&choice);
		while(choice!=4)
		{
			switch(choice){
				case 1:
					printf("\nEnter a data:	");
					scanf("%d", &item);
					push(&headptr,item);
					printstack(headptr);
				break;
				case 2:
				if(!isempty(headptr)){
					item=pop(&headptr);
					printf("\n%d has pop\n", item);
					printstack(headptr);

				}	
				break;
				case 3:
					printf("\nYour stack is:\n	");
					printstack(headptr);
				break;
				default :
					printf("\nInvalid choice.\n\n");
					instructions();
					break;
			}
			printf("\n?	");
			scanf("%d", &choice);
		}
		printf("\nEnd of run");
	return 0;
}
void instructions(void){
	printf("Enter your choice:\n"
	"1 to add an item to the stack\n"
	"2 to remove an item from stack\n"
	"3 to print stack\n"
	"4 to exit\n");
}
void push(nodeptr *hptr, int value)
{
	nodeptr newptr;
	newptr=malloc(sizeof(node));
	
	if(newptr!=NULL){
		newptr->data=value;
		newptr->nextPtr=*hptr;
		*hptr=newptr;
	}
	else
	printf("%d not inserted.No memory available");
	
}
int pop(nodeptr *hptr)
{
	int value;
	nodeptr tempptr;
	value=(*hptr)->data;
	tempptr=*hptr;
	*hptr=(*hptr)->nextPtr;

	free(tempptr);
	return value;
}
int isempty(nodeptr hptr){
	return hptr==NULL;
}
void printstack(nodeptr currentptr)
{
	if(currentptr==NULL)
	printf("\nStack is empty\n");
	else{
	printf("\nThe stack in tabular format is:\n");
	printf("%-20s%-20s%-20s\n","AddressOfTheNode","StackValue(data)","AddressOfNextNode");
	while(currentptr!=NULL){
		printf("%-20d%-20d%-20d\n",currentptr,currentptr->data,currentptr->nextPtr);
		currentptr=currentptr->nextPtr;
	}
}
}
