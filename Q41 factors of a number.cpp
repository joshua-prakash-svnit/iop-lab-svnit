//program to read a number and tell its facor
//Joshua Prakash J

#include<stdio.h>
int main()
{
	int num,i=1;
	printf("enter a number ");
	scanf("%d",&num);
	for (i;i<=num;i++)
	{
		//printf("%d",i);
		if(num%i==0)
		{
			printf("%d\t",i);
		}
		
	}
	return 0;
}
