#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* link;
};
struct node *head;
void main(){
	void create();
	void traverse();
	void insertatbegin();
	void insertatend();
	void deletedata();
	create();
	traverse();
	insertatbegin();
	traverse();
	insertatend();
	traverse();
	deletedata();
	traverse();
	deletedata();
	traverse();
	getch();
}
void create(){
	struct node *temp,*temp1;
	char ch;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("Insert first node element");
	scanf("%d",&temp->data);
	head=temp;
	do{
		temp1=(struct node*)malloc(sizeof(struct node));
		printf("Enter next element");
		scanf("%d",&temp1->data);
		temp->link=temp1;
		temp=temp1;
		printf("Press y or n for more element");
		ch=getch();
	}while(ch=='y'||ch=='Y');
	temp->link=NULL;
	return;
}
void traverse(){
	struct node *temp;
	temp=head;
	printf("your list is as follw:-\n");
	while(temp->link!=NULL){
		printf("%d	",temp->data);
		temp=temp->link;
	}
	printf("%d",temp->data);
	return;
}
void insertatbegin(){
	struct node *temp,*temp1;
	temp=head;
	temp1=(struct node*)malloc(sizeof(struct node));
	printf("Enter data u want to store at begninig\n");
	scanf("%d",&temp1->data);
	temp1->link=head;
	head=temp1;
	return;
}
void insertatend(){
	struct node *temp,*temp1;
	temp=head;
	temp1=(struct node*)malloc(sizeof(struct node));
	printf("Enter data u want to store at end\n");
	scanf("%d",&temp1->data);
	temp1->link=NULL;
	while(temp->link!=NULL){
		temp=temp->link;
	}
	temp->link=temp1;
	return;
}
void deletedata(){
	struct node *temp;
	temp=head;
	if(temp->data==3){
		head=temp->link;
	}
	else{
	
	while(temp->link!=NULL){
		if(temp->link->data==3 && temp->link->link!=NULL){
			temp->link=temp->link->link;
		}
		if(temp->link->data==3 && temp->link->link==NULL){
			temp->link=NULL;
			break;
		}
		temp=temp->link;
	}
}
return;
}
