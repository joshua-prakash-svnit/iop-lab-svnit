#include<stdio.h>
int main()
{
		
	int a[3][3],b[3][3],row1,row2,row3;
	printf("enter the elements in array\n");
	for (int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}	
	}
	for (int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			b[j][i]=a[i][j];
		}	
	}
	for (int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");	
	}
	
}




