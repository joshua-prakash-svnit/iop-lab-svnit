#include<stdio.h>
int main()
{
	printf("enter the numbers you want in array 1");
	int a[10],b[10],temp,i;
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
		temp=a[i];
    	a[i]=b[i];
    	b[i]=temp;
	}
		printf("after swapping array 1 ");
	for (i=0;i<10;i++)
	{	
		printf("%d\t",a[i]);
	}
		printf("after swapping array 2 ");
	for (i=0;i<10;i++)
	{	
		printf("%d\t",b[i]);
	}
}
	
