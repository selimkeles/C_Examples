#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node *nextptr;
};

typedef struct node	node;
typedef node * nodeptr;
void merge(nodeptr *firstptr,nodeptr *secondptr);
void print_list(nodeptr listptr);
void create_list(nodeptr *startptr,int x);
int main() {
	nodeptr root1=NULL;
	nodeptr root2=NULL;
	int usin;
	printf("Please enter a nodes to 1st linked list(Enter 66 to quit):\n");
	printf("->");
	scanf("%d",&usin);
	while(usin!=66){
		create_list(&root1,usin);
		printf("->");
		scanf("%d",&usin);
	}
	printf("NULL\n");
	printf("\nPlease enter a nodes to 2nd linked list(Enter 66 to quit):\n");
	printf("->");
	scanf("%d",&usin);
	while(usin!=66){
		create_list(&root2,usin);
		printf("->");
		scanf("%d",&usin);
	}
	printf("NULL\n");
	printf("\nNodes after merging:\n");
	merge(&root1,&root2);
	print_list(root1);
	return 0;
}
void print_list(nodeptr listptr){
	if(listptr==NULL)													//checks for empty list
		printf("This list is empty");
	else{
	while(listptr!=NULL){												//shifts list until equality to NULL
	printf("%d->",listptr->data);										//prints data inside node
	listptr=listptr->nextptr;
}																		//end of while
printf("NULL\n\n");
}																		//end of else
}																		//end of function
void create_list(nodeptr *startptr,int x){
	nodeptr prevptr=NULL;												
	nodeptr currentptr=*startptr;										//defines two consecutive pointer
	nodeptr newptr;
	newptr=(nodeptr)malloc(sizeof(node));
	newptr->data=x;													
	newptr->nextptr=NULL;
		while(currentptr!=NULL && x>currentptr->data){										//shifts until find a last node
		prevptr=currentptr;
		currentptr=currentptr->nextptr;
	}
	if(prevptr==NULL){													//if there is no node or we have to add node to start
		newptr->nextptr=*startptr;										
		*startptr=newptr;
	}
	else{																//puts new node between prevptr and currentptr
	prevptr->nextptr=newptr;
	newptr->nextptr=currentptr;
}
}
void merge(nodeptr *firstptr,nodeptr *secondptr){
	nodeptr prevptr=NULL;
	nodeptr currentptr=*firstptr;
	nodeptr tempptr;
	while((*secondptr)!=NULL){																//holds first list as constant and puts members of list 2 inside of list 1
	nodeptr prevptr=NULL;																	//we wrote it again because sometimes currentptr holds on null and it causes error
	nodeptr currentptr=*firstptr;
		while(currentptr!=NULL && ((*secondptr)->data)>(currentptr->data)){					//simply finds place to list2's nodes on list1
			prevptr=currentptr;
			currentptr=currentptr->nextptr;
		}
	
		if(prevptr==NULL){																	//do same as create_list function
		tempptr=(*secondptr)->nextptr;									//we use temporary pointer for list2's nodes(which comes after current node) because dont lose te rest of the list 2
		(*secondptr)->nextptr=*firstptr;
		*firstptr=*secondptr;
		*secondptr=tempptr;												//we have done with the list2's node now time to shift *secondptr via tempptr
		
	}
	else{
	tempptr=(*secondptr)->nextptr;										//does same thing which we perform on if uses temporary pointer to not lost second lists rest
	prevptr->nextptr=*secondptr;
	(*secondptr)->nextptr=currentptr;
	*secondptr=tempptr;
}
}
}
