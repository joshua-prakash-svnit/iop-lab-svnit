#include<stdio.h>
int main()
{
	printf("enter the numbers you want");
	int a[10],i,oddsum=0,sum=0,count=0;
	for (i=0;i<10;i++)
	{	
		

		scanf("%d",&a[i]);
	}
	for (i=0;i<10;i++)
	{
		if(a[i]%2 != 0)
			{
				oddsum=oddsum+a[i];
				count++;
			}
		sum=sum+a[i];
	}
	printf("the total of odd numbers is %d and the no of odd numbers are %d  and the total is %d ",oddsum,count,sum);
}
