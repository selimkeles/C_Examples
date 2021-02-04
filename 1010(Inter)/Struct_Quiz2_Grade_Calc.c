#include <stdio.h>
#include <stdlib.h>
struct student{
	int id;
	char name[20];
	int grade;
}storage[10];
int main() {
	printf("Please enter a how many student you will enter to the system:");
	int student_number;
	scanf("%d", &student_number);
	printf("\n");
	int i=0;
	printf("Please enter with respect to order id grade name\n");
	while(i<student_number){
		scanf("%d",&storage[i].id);
		scanf("%d",&storage[i].grade);
		scanf("%s",storage[i].name);
		i++;
	}
	
	printf("The sort of students grades are highest to lowest:");
	printf("\n-----------------------------------------------------------------\n");
	int a,b;
	i=0;
	int j=0;
	struct student temp;
	for(i=0;i<student_number;i++){
		for(j=i+1;j<student_number;j++){
		a= storage[i].grade;
		b= storage[j].grade;
		if(a<b){
			temp=storage[i];
			storage[i]=storage[j];
			storage[j]=temp;
		}
		}
	}
	i=0;
	while(i<student_number){
		printf("%-20d%-20s%-20d\n",storage[i].id,storage[i].name,storage[i].grade);
		i++;
	}
	return 0;
}
