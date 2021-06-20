#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct treeNode{
	struct treeNode* leftNode;
	int data;
	struct treeNode* rightNode;
};
typedef struct treeNode TreeNode;
typedef TreeNode* TreeNodePtr;

void insertNode(TreeNodePtr *treePtr,int value);

int main() {
	int i;
	int item;
	TreeNodePtr rootptr= NULL;
	srand(time(NULL));
	printf("the numbers placed:\n");
	
	for(i=1;i<=10;i++){
		item=rand()%15;
		printf("%3d",item);
		insertNode(&rootptr,item);
	}
	return 0;
}
void insertNode(TreeNodePtr *treePtr,int value)
{

if(*treePtr == NULL){
*treePtr=malloc(sizeof(TreeNode));

	if(*treePtr!=NULL){
		(*treePtr)->data=value;
		(*treePtr)->leftNode=NULL;
		(*treePtr)->rightNode=NULL;
	}
	else
	printf("%d not inserted. No memory available.\n");
}
else{
	if(value<(*treePtr)->data){
		insertNode(&((*treePtr)->leftNode),value);
	}
	else if(value>(*treePtr)->data){
		insertNode(&((*treePtr)->rightNode),value);
	}
	else
	printf("dap");
}

}
