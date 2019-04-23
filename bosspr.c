#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){
	int n,i,j;
	printf("enter number of rows");
	scanf("%d",&n);
	int a[n][n];
	for(i=0;i<n;i++){
            for(j=n;j>i;j--)
            printf(" ");
		for(j=0;j<=i;j++){
			if(j==0||i==j){
				a[i][j]=1;
				printf("  %d ",a[i][j]);
			}
			else{
				a[i][j]=a[i-1][j]+a[i-1][j-1];
				printf("  %d ",a[i][j]);
			}
		}
		printf("\n");
	}
}
