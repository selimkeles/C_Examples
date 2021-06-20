#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct node{
 char data;
 struct node *next;
 };
 typedef struct node node;
int main(){
int i;
node * root= (node *) malloc(sizeof(node));
node * root2= (node *) malloc(sizeof(node));
node * temp = root;
node * temp2= root2;
for(i=65;i<78;i++){
 temp->data=i;
 temp->next=(node *) malloc(sizeof(node));
 temp=temp->next;
 }
printf("The first list:\n");
temp =root;
for(i=65;i<78;i++){
 printf("%c ",temp->data);
 temp=temp->next;
 
 }
for(i=78;i<91;i++){
 temp2->data=i;
 temp2->next=(node *) malloc(sizeof(node));
 temp2=temp2->next;
 }
printf("\n\nThe second list:\n");
temp2 =root2;
for(i=78;i<91;i++){
 printf("%c ",temp2->data);
 temp2=temp2->next;
 
 }
printf("\n\nList 2 concatenated to List 1:\n");
for(i=65;i<78;i++){
 printf("%c ",root->data);
 root=root->next;
}
for(i=65;i<78;i++){
 printf("%c ",root2->data);
 root2=root2->next;
}

 return 0;
}
