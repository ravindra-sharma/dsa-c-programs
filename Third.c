#include<stdio.h>
#include<conio.h>
#include"area.h"
#define TEST 
void main()
{
	#undef TEST
	#ifdef TEST
		printf("Its ravi.....");
	#else
		
		printf("%f",CIR(10));
	#endif
}
