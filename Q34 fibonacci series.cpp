//program to print the fibonacci series
//Joshua Prakash J

#include<stdio.h>
int main()
{
	int j,i,sum;
	while(j<=10000)
	{
		sum=i+j;
		i=j;
		j=sum;
		printf("%d\n",i);
	}
}
