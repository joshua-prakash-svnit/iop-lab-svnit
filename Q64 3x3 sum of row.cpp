#include<stdio.h>
int sum_row_array(int k,int a[3][3]);
int main()
{
	int a[3][3],row1,row2,row3;
	printf("enter the elements in array\n");
	for (int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}	
	}
	int sum=0;
	for (int i=0;i<3;i++)
	{
		sum=0;
		for(int j =0;j<3;j++)
		{
			sum= sum + a[i][j];
		}
		printf("this is the sum of a row %d\n",sum);	
	}
	/*row1=sum_row_array(0,a[3][3]);
	row2=sum_row_array(1,a[3][3]);
	row3=sum_row_array(2,a[3][3]);
	printf("%d%d%d",row1,row2,row3);
	
}
int sum_row_array(int k,a[])
{

	return sum;*/
	
}
