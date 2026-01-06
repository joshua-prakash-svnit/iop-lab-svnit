#include<stdio.h>
int main()
{
	printf("enter the numbers you want");
	
	int a[10],i;
	for (i=0;i<10;i++)
	{	
		scanf("%d",&a[i]);
	}
	int max=a[0],*secmax;
	for (i=0;i<10;i++)
	{
		secmax=&max;
		if(a[i]>*secmax)
		{
			*secmax=a[i];
		}
	
		
	}
	printf("the max of the number is %d\n ",*secmax);
}
