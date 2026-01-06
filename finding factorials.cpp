//program to calculate factorials of the number
//Joshua Prakash J
#include<stdio.h>
int main()
{
	int i,factorial;
	printf("enter your number");
	scanf("%d",&i);
	factorial=1;
	for(i;i>0;i--)
	{
		factorial=factorial*i;
	}
	printf("%d",factorial);
	
	
	
}


