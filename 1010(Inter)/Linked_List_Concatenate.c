#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*This programme creates two random linked list and after that concatenate them*/
struct node{
	int data;
	struct node *nextptr;
};

typedef struct node	node;
typedef node * nodeptr;

void concatenate_list(nodeptr *firstptr, nodeptr *secondptr);
void print_list(nodeptr listptr);
void create_list(nodeptr *startptr);

int main() {
	srand(time(NULL));														//for random numbers
	int i;																	//counter
	nodeptr root1=NULL;														//root for first list
	nodeptr root2=NULL;														//root for second list
	for(i=0;i<10;i++)
	create_list(&root1);
	
	print_list(root1);
	for(i=0;i<10;i++)
	create_list(&root2);
	
	print_list(root2);
	printf("\n\nThe lists after concatenating is:\n\n");
	concatenate_list(&root1,&root2);
	print_list(root1);
	return 0;
}
void create_list(nodeptr *startptr){
	int x=rand()%101;													//assigns random x
	nodeptr prevptr=NULL;												
	nodeptr currentptr=*startptr;										//defines two consecutive pointer
	nodeptr newptr;
	newptr=(nodeptr)malloc(sizeof(node));
	newptr->data=x;													
	newptr->nextptr=NULL;
	
	while(currentptr!=NULL){											//shifts until find a last node
		prevptr=currentptr;
		currentptr=currentptr->nextptr;
	}
	if(prevptr==NULL){													//if there is no node makes newptr the start node
		newptr->nextptr=*startptr;
		*startptr=newptr;
	}
	else{																//puts new node between prevptr and currentptr
	prevptr->nextptr=newptr;
	newptr->nextptr=currentptr;
}}
void print_list(nodeptr listptr){
	if(listptr==NULL)													//checks for empty list
		printf("This list is empty");
	else{
	while(listptr!=NULL){												//shifts list until equality to NULL
	printf("%d-->",listptr->data);										//prints data inside node
	listptr=listptr->nextptr;
}																		//end of while
printf("NULL\n\n");
}																		//end of else
}																		//end of function
void concatenate_list(nodeptr *firstptr, nodeptr *secondptr){
	nodeptr tempptr;
	nodeptr iter=*firstptr;												
	
	while((iter->nextptr)!=NULL)										//uses iterator to find last node of first linked list
		iter=iter->nextptr;
		
	iter->nextptr=*secondptr;											//connects lastnode of firstptr and first node of the lastptr
}

