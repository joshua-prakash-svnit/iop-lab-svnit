#include<stdio.h>
int main()
{
	int a[100],i,count=0;
	printf("enter th earray value\n");
	for (i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		count++;
	}
	//printf("\n%d",count);
	printf("\nafter reversing\n");
	for (i=count-1;i>=0;i--)
	{
		printf("%d\n",a[i]);
		
	}
	
	
}
