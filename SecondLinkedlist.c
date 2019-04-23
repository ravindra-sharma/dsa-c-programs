#include<stdio.h>
#include<stdlib.h>
void main(){
	struct node{
		int v;
		struct node* l;
	};
	struct node* head;
	struct node* temp;
	struct node* temp1;
	int i=0,j;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->v=10;
	temp->l=NULL;
	head=temp;
	for(j=0;j<=4;j++){
		temp=(struct node*)malloc(sizeof(struct node));
		temp->v=j;
		temp->l=NULL;
		temp1=head;
		while(temp1->l!=NULL){
			temp1=temp1->l;
		}
		temp1->l=temp;
	}
		temp1=head;
		while(temp1->l!=NULL){
			
			printf("%d    ",temp1->v);
			temp1=temp1->l;
		}
		
}
