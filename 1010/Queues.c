#include <stdio.h>
#include <stdlib.h>

struct queueNode{
	int data;
	struct queueNode *nextPtr;
};

typedef struct queueNode QueueNode;
typedef QueueNode *QueueNodePtr;

void instructions();
int dequeue(QueueNodePtr *hptr,QueueNodePtr *tptr,int *counter);
void enqueue(QueueNodePtr *hptr,QueueNodePtr *tptr, int value,int *counter);
void printqueue(QueueNodePtr currentptr);
int isempty(QueueNodePtr hptr);


int main() {
	QueueNodePtr headptr= NULL;
	QueueNodePtr tailptr= NULL;
	int counter=0;
	int choice;
	int item;
	instructions();
	printf("?	");
	scanf("%d",&choice);
		while(choice!=4)
		{
			switch(choice){
				case 1:
					printf("Enter a data:	");
					scanf("%d", &item);
					if(counter<4)
					enqueue(&headptr,&tailptr,item,&counter);
					else
					printf("There is already 4 element on queue please delete some of them");
				break;
				case 2:
				if(!isempty(headptr)){
					item=dequeue(&headptr,&tailptr,&counter);
					printf("\n%d has been dequeued\n", item);
				}	
				break;
				case 3:
					printf("\nYour queue is:	");
					printqueue(headptr);
				break;
				default :
					printf("Invalid choice.\n\n");
					instructions;
					break;
			}
			printf("?	");
			scanf("%d", &choice);
		}
		printf("End of run");
	return 0;
}
void instructions(void){
	printf("Enter your choice:\n"
	"1 to add an item to the queue\n"
	"2 to remove an item from queue\n"
	"3 to print queue\n"
	"4 to exit");
}
void enqueue(QueueNodePtr *hptr,QueueNodePtr *tptr, int value,int *counter)
{
	QueueNodePtr newptr;
	newptr=malloc(sizeof(QueueNode));
	
	if(newptr!=NULL){
		newptr->data=value;
		newptr->nextPtr=NULL;
			if(isempty(*hptr))
			*hptr=newptr;
			else
			(*tptr)->nextPtr=newptr;
			
		*tptr=newptr;
		(*counter)++;
	}
	else
	printf("%d not inserted.No memory available");
	
}
int dequeue(QueueNodePtr *hptr,QueueNodePtr *tptr,int *counter)
{
	int value;
	QueueNodePtr tempptr;
	value=(*hptr)->data;
	tempptr=*hptr;
	*hptr=(*hptr)->nextPtr;
	if(*hptr==NULL)
		tptr=NULL;
	
	(*counter)--;
	free(tempptr);
	return value;
}
int isempty(QueueNodePtr hptr){
	return hptr==NULL;
}
void printqueue(QueueNodePtr currentptr)
{
	if(currentptr==NULL)
	printf("Queue is empty");
	else{
	printf("The queue is:\n");
	
	while(currentptr!=NULL){
		printf("%d -->",currentptr->data);
		currentptr=currentptr->nextPtr;
	}
	printf("NULL\n");
}
}
