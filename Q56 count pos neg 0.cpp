#include<stdio.h>
int main()
{
	printf("enter the numbers you want");
	int a[10],i,neg=0,pos=0,zero=0;
	for (i=0;i<10;i++)
	{	
		scanf("%d",&a[i]);
	}
	for (i=0;i<10;i++)
	{
		if (a[i]<0)
		neg++;
		else if (a[i]>0)
		pos++;
		else 
		zero++;
	}
	printf("the total of positive numbers is %d and the no of negative numbers are %d  and the total no of zero is %d ",pos,neg,zero);
}
