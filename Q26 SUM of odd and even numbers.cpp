//program to print the sum of all the odd and even numbers from 1 to n
//Joshua Prakash J
#include<stdio.h>
int main()
{
	int num,i,sumodd=0,sumeven=0;
	printf("enter the number you want to ");
	scanf("%d",&num);
	for(i=2;i<=num;i=i+2)
	{
		sumeven=sumeven+i;
	}
	for(i=1;i<=num;i=i+2)
	{
		sumodd=sumodd+i;
	}
	printf("%d is the odd sum %d is the even sum",sumodd,sumeven);
}
	
