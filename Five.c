#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,i=2;
	char s[15];
	scanf("%s",&s);
	printf("\n hello  %u",&s);
	 
	 
	/*for(i=2;i<=24;i++){
		fs[i]=fs[i-1]+fs[i-2];
	}*/
	/*for(i=0;i<=24;i++)
	printf("%d   ",fs[i]);
	*/
/*	//static int a[]={1,2,3,4};
	//int *p[]={a,a+1,a+2,a+3};
	//printf("%u %u %d \n",p,*p,*(*p));
	*/
	
	
	/*if(i==j){
		printf("both are equal");
	}
	else
	{
		printf("not equal");
	}*/
}
/*void display(int *n){
	n+=9;
	printf("%d \n",n);
	*n=15;
}*/
void fibonaci(int i,int j,int k){
	int c=0;
	c=i+j;
	printf("%d ",c);
	k++;
	
	if(k==25)
	return;
	fibonaci(j,c,k);
}
