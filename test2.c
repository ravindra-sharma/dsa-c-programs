#include<stdio.h>
float x=4.5;
float add(float);
void main(){
	float y;
	float add(float);
	x*=2.0;
	y=add(x);
	printf("%f  %f",x,y);
}
float add(float a){
	a+=1.3;
	x-=4.5;
	return(a+x);
}
