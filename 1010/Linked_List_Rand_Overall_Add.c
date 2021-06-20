#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct listNode{
	int data;
	struct listNode *nextPtr;
};
typedef struct listNode ListNode;
typedef ListNode * ListNodePtr;

void delete(ListNodePtr *sptr,int value);
int isEmpty(ListNodePtr sptr);
void insert(ListNodePtr *sptr);
void printList(ListNodePtr currentPtr);

int main() {
	int i;
	srand(time(NULL));
	ListNodePtr startptr = NULL;
	for(i=0; i<20;i++)
	insert(&startptr);
	
	printList(startptr);
	while(i!=0){
		printf("Please enter a number which you want to delete or input 0 to exit\n\n");
	scanf("%d",&i);
	if(i!=0)
	delete(&startptr,i);
	
	printList(startptr);
	}
	return 0;
}
void insert(ListNodePtr *sptr){
	ListNodePtr newPtr;
	ListNodePtr prevPtr;
	ListNodePtr currentPtr;
	
	newPtr = malloc(sizeof(ListNode));
	
	if(newPtr!=NULL){
		newPtr->data=rand()%101;
		newPtr->nextPtr=NULL;
		prevPtr=NULL;
		currentPtr=*sptr;
		while(currentPtr != NULL && newPtr->data>currentPtr->data){
			prevPtr=currentPtr;
			currentPtr=currentPtr->nextPtr;
		}
		if(prevPtr==NULL){
			newPtr->nextPtr=*sptr;
			*sptr=newPtr;
		}
		else{
			prevPtr->nextPtr=newPtr;
			newPtr->nextPtr=currentPtr;
		}
	}
	else{
		puts("No memory available");
	}
}
void printList(ListNodePtr currentPtr){
	int i=0, sum=0,a;
	if(currentPtr==NULL)
		puts("List is empty");
	else{
		printf("The list is:\n");
		
		while(currentPtr != NULL){
			printf("%d->", currentPtr->data);
			a=currentPtr->data;
			sum=sum+a;
			i++;
			currentPtr=currentPtr->nextPtr;
		}
		printf("NULL\n\n");
	}
	printf("The sum of numbers is %d\tThe avarage of numbers is\t%d\n\n",sum,sum/i);	
}
void delete(ListNodePtr *sptr,int value){
	ListNodePtr prevPtr;
	ListNodePtr currentPtr;
	ListNodePtr tempPtr;
	
	if(value==(*sptr)->data){
		tempPtr=*sptr;
		*sptr=(*sptr)->nextPtr;
		free(tempPtr);
	}
	else{
		prevPtr=*sptr;
		currentPtr=(*sptr)->nextPtr;
		
		while(currentPtr!=NULL&&currentPtr->data!=value){
			prevPtr=currentPtr;
			currentPtr=currentPtr->nextPtr;
	
		}
		if(currentPtr!=NULL){
			tempPtr=currentPtr;
			prevPtr->nextPtr=currentPtr->nextPtr;
			free(tempPtr);
		}
	}
}
