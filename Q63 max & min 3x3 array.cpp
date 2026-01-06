#include<stdio.h>
int main()
{
	int a[3][3],max,min;
	printf("enter the elements in array\n");
	for (int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}	
	}
	max=a[1][1];
	min=a[1][1];
	printf("s");	
	for (int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if (a[i][j]>max)
			{
				max=a[i][j];
			}
			else if(a[i][j]<min)
			{
				min=a[i][j];
			}
		}	
	}
	printf("the smallest element is %d and the biggest element is %d",min,max);
}
