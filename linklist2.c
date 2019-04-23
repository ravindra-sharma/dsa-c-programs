#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;
};
struct node *start;
struct node *startc;
void main(){
	void createsingly();
	void traverse();
	void createcircle();
	void checkcircleornot(struct node*);
	createsingly();
	traverse();
	createcircle();
	checkcircleornot(start);
	checkcircleornot(startc);
}
void createsingly(){
	struct node *temp,*temp1;
	char ch;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter the value for linked list");
	scanf("%d",&temp->data);
	start=temp;
	do{
		temp1=(struct node*)malloc(sizeof(struct node));
		printf("Enter the value for linked list    ");
		scanf("%d",&temp1->data);
		temp->link=temp1;
		temp=temp1;
		printf("Enter the y if u want to add more number\n");
		ch=getch();
	}while(ch=='y');
	temp->link=NULL;
	return;
}
void traverse(){
	struct node *temp;
	temp=start;
	while(temp->link!=NULL){
		printf("%d   ",temp->data);
		temp=temp->link;
	}
		printf("%d   ",temp->data);
	return;
}
void createcircle(){
	struct node *temp,*temp1;
	char ch;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter the value for linked list    ");
	scanf("%d",&temp->data);
	startc=temp;
	do{
		temp1=(struct node*)malloc(sizeof(struct node));
		printf("Enter the value for linked list    ");
		scanf("%d",&temp1->data);
		temp->link=temp1;
		temp=temp1;
		printf("Enter the y if u want to add more number\n");
		ch=getch();
	}while(ch=='y');
	temp->link=startc;
	return;
}
void checkcircleornot(struct node *temp){
	struct node *temp1;
	int i=0;
	temp1=temp->link;
	while(temp1->link!=NULL){
		if(temp1->link==temp){
			i=1;
			break;
		}
		temp1=temp1->link;
	}
	if(i==0){
		printf("\nNot circuleer\n");
	}
	if(i==1){
		printf("\ncirculeer\n");
	}
}
