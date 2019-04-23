#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node *link;
}node1;
node1 *adj[30];
void main(){
	void create(int);
	void insertg(int);
	void show(int);
	create(4);	
	insertg(4);
	show(4);
}
void show(int n){
	node1 *temp;
	int i;
	for(i=0;i<n;i++){
		temp=adj[i];
		printf("%d",i);
		while(temp->link!=NULL){
			printf("->%d",temp->data);
			temp=temp->link;
		}
		printf("->%d \\0 \n",temp->data);
			
			
	}
}
void create(int num){
	int i;
	for(i=0;i<num;i++){
		adj[i]=NULL;
	}
}
void insertg(int n){
	node1 *last,*temp;
	int i,j,k;
	for(i=0;i<n;i++){
		last=NULL;
		printf("Enter the number of node adjacent to node %d",i);
		scanf("%d",&k);
		for(j=0;j<k;j++){
			temp=(node1*)malloc(sizeof(node1));
			printf("Enter the vale");
			scanf("%d",&temp->data);
			temp->link=NULL;
			if(adj[i]==NULL){
				adj[i]=last=temp;
				adj[i]=last;			}
				else{
					last->link=temp;
					last=temp;
				}
		}
	}
}

