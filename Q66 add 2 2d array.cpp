#include<stdio.h>
int main()
{
		
	int a[3][3],b[3][3],c[3][3];
	printf("enter the elements in 1st array\n");
	for (int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}	
	}
	printf("enter the elements in 2nd array\n");
	for (int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}	
	}
	for (int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			c[i][j]=b[i][j]+a[i][j];
		}	
	}
	printf("enter the elements in result array\n");
	for (int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");	
	}
	
}




