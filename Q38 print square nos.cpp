//program to print all square nos till n
//Joshua Prakash J

#include<stdio.h>
int main()
{
	int n,i;
	printf("enter the terms you want to ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d\t",i*i);
	}
}
