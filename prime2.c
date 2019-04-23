#include<stdio.h>
#include<conio.h>
#include<math.h>
void crossout(int*,int,int);
void main(){
	int a[30],n=30,k=1;
	for(k=1;k<=n;k++){
		a[k-1]=k;
	}
	for(k=1;(k+1)*(k+1)<n;k++){
		crossout(a,n,k);
	}
	for(k=1;k<=n;k++){
		if(a[k]!=1){
			printf("%d ",k);
		}
	}
}
void crossout(int *a,int n,int k){
	int l;
	if(a[k]==1)
		return;
	else{
		for(l=2*(k+1);l<n;l+=(k+1)){
		*(a+l)=1;
	}
	return;	
	}
	
}
