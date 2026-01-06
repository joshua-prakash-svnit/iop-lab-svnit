#include<stdio.h>
int main()
{
	printf("enter the numbers you want in array 1");
	int a[10],b[10],c[10],max=0,secmax=0,i;
	for (i=0;i<10;i++)
	{	
		scanf("%d",&a[i]);
	}
	printf("enter the numbers you want in array 2");
	for (i=0;i<10;i++)
	{	
		scanf("%d",&b[i]);
	}
	for (i=0;i<10;i++)
	{	
		c[i]=a[i]+b[i];
	}
	printf("the sum of those array is ");
	for (i=0;i<10;i++)
	{	
		printf("%d\t",c[i]);
	}
}
	
