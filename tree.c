#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *left;
	struct node *right;
};
struct node *root=NULL;
struct node* get_node(){
	struct node *temp1;
	temp1=(struct node*)malloc(sizeof(struct node));
	
	temp1->left=NULL;
	temp1->right=NULL;
	return temp1;
}
void insert(struct node *roottemp,struct node *temp){
	char ch;
	printf("Where you want to store your data l or r");
	ch=getch();
	if(ch=='l'){
		if(roottemp->left==NULL){
			roottemp->left=temp;
		}
		else{
			insert(roottemp->left,temp);
		}
	}
	if(ch=='r'){
		if(roottemp->right==NULL){
			roottemp->right=temp;
		}
		else{
			insert(roottemp->right,temp);
		}
	}
}
void inorder(struct node *temp){
	if(temp!=NULL){
		inorder(temp->left);
		printf("  %d  ",temp->data);
		inorder(temp->right);
	}
}
void main(){
	int c;
	char ch;
	struct node *temp;
	do{
		printf("Simple binary tree program...\n");
		printf("1.for create\n2.for inorder\n3.for post order\n4.for pre order\n5.exit");
		scanf("%d",&c);
		switch(c){
			case 1:
				root=NULL;
				do{
				temp=get_node();
				printf("Enter the value");
	            scanf("%d",&temp->data);
				if(root==NULL){
					root=temp;
				}
				else{
					insert(root,temp);
				}
				printf("\ndo u want to add more item?(y/n)");
				ch=getch();
				}while(ch=='y');
				break;
			case 2:
				if(root==NULL){
					printf("Tree is not create d yet");
				}
				else{
					printf("traverse strat0");
					inorder(root);
				}
				break;
		}
	}while(c!=5);
}

