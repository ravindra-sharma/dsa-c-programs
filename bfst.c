#include<stdio.h>
#include<conio.h>
int visited[5],adj[5][5],que[5],start=-1,end=-1;
void make_graph();
void add_in_queue(int);
int delete_queue();
void set_flag();
void set_startNode(int);
void tarverse(int);
int is_emptyQueue();
void main()
{
    int start_node=0;
	make_graph();
	set_flag();
	printf("Enter  start node\n");
	scanf("%d",&start_node);
	set_startNode(start_node);
}
int is_emptyQueue()
{
    if(start==-1 && end>start)
    {
        return 1;
    }
    else
        return 0;
}
int delete_queue()
{
    int d=que[start];
    if(start==end)
    {
        start=-1;
        end=-1;
    }
    else{
        start++;
    }

    return d;
}
void add_in_queue(int v)
{
    if(start==-1 && end==-1)
    {
        start=0;
        que[start]=v;
        end++;
    }
    else
    {
        end++;
        que[end]=v;
    }
}
void set_startNode(int v)
{
    int data=0,j;
    add_in_queue(v);
    visited[v]=1;
    while(!is_emptyQueue())
    {
        data=delete_queue();
        printf("%d\t",data);
        for(j=0;j<5;j++)
          {
             if(adj[v][j]==1&&visited[j]!=1)
                {
                    add_in_queue(j);
                    visited[j]=1;
                }
          }
    }
}
void make_graph()
{
    int i,j;
    printf("enter the adjancy matrix of graph");
    for(i=0;i<5;i++)
        for(j=0;j<5;j++)
            scanf("%d",&adj[i][j]);
    printf("Your Adjancy matrix is completed and processing is start....\n");
}
void set_flag()
{
    int i=0;
    for(i=0;i<5;i++)
        visited[i]=0;
}
