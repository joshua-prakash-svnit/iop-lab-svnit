#include<stdio.h>
int main()
{
	printf("enter the numbers you want");
	int a[10],i;
	for (i=0;i<10;i++)
	{	
		scanf("%d",&a[i]);
	}
	int max=a[0],secmax=a[1];
	for (i=0;i<10;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
		else if(a[i]>secmax && a[i]<max)
		{
			secmax=a[i];
		}
		
	}
	printf("the max of the number is %d\n",max);
	printf("the second max of the number is %d\n ",secmax);
}
