#include<stdio.h>
int main()
{
	int a[10],k,b=1;
	printf("enter the elements");
	for(int i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the element you want to find");
	scanf("%d",&k);
	for(int i=0;i<10;i++)
	{
		if (a[i]==k)
		{
			b=0;
			break;
		}
		
		else
		b=1;
		
	}
	if(b==1)
	printf(" the element was not found");
	else
	printf(" the element was  found");
	
	
}
