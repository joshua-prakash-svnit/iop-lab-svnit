#include<stdio.h>
int main()
{
	int a[10],element,b=1,occur=0;
	printf("enter the elements");
	for(int i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the element you want to find the occurence");
	scanf("%d",&element);
	for(int i=0;i<10;i++)
	{
		if (a[i]==element)
		{
			occur++;
		}
		
	}
	printf("the number of occurence of the element is %d",occur);
}
