//program to print all odd nos till n
//Joshua Prakash J

#include<stdio.h>
int main()
{
	int n,i;
	printf("enter the number you want to ");
	scanf("%d",&n);
	for(i=1;i<=n;i=i+2)
	{
		printf("%d\t",i);
	}
}
