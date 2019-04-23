#include<stdio.h>
void main()
{
	int n,i;
	printf("Please enter number of element\n");
	scanf("%d",&n);
	int elements[n];
	printf("\nEnter the elements\n");
	for(i=0;i<n;i++){
		scanf("%d",&elements[i]);
	}
	int len[n],start[n],end[n],count=0,pos=0,flag=0;
	for(i=0;i<n;i++){
		
		if(elements[i]==1){
			flag=1;
			count++;
			if(i==n-1){
				len[pos]=count;
				end[pos]=i;
				start[pos]=end[pos]-count+1;
				
			}
		}
		if(elements[i]==0){
			if(flag==0){
				
			}
			if(flag==1)
			{
				
				len[pos]=count;
				end[pos]=i-1;
				start[pos]=end[pos]-count+1;
				count=0;
				pos++;
			}
			flag=0;
		}
	}
	printf("length	start	end\n");
	int max=0,key=0;
	for(i=0;i<pos;i++)
	{
		printf(" %d	 %d	 %d\n",len[i],start[i],end[i]);
		if(len[i]>max){
			max=len[i];
		}
	}
	
	for(i=0;i<pos;i++){
		if(max==len[i]){
			key=i;
		}
	}
	int adj[pos-1];
	for(i=0;i<=pos;i++){
		adj[i]=end[i]+2;
	}
	int flen[pos-1],lenlen=0;
	for(i=0;i<=pos;i++){
		if(adj[i]==start[i+1]){
			flen[lenlen]=len[i]+len[i+1];
			lenlen++;
		}
	}
	int maxinflen=0;
	for(i=0;i<=lenlen;i++){
		if(flen[i]>maxinflen){
			maxinflen=flen[i];
		}
	}
	if(max>maxinflen){
		if(pos==1)
		printf("maximum length is= %d",max-1);
		else
		printf("maximum length is= %d",max+1);
	}
	else{
		if(lenlen==2)
		printf("maximum length is= %d",maxinflen);
		else
		printf("maximum length is= %d",maxinflen);
	}
}
