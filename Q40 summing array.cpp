//a program to read a number till negative number is given and calculate the sum of the numbers
//

#include<stdio.h>
int main()
{
	int array[10],len=0;
	int j,sum=0,i;
	for(i=0;i<10;i++)
	{
		printf("enter the number");
		scanf("%d",&j);
		if (j>0)
		{
			array[i]=j;
			len++;
		}
		else
		{
			break;
		}
		
	}
	for(i=0;i<len;i++)
	{
		//printf("%d\n",sum);
		sum=sum+array[i];
		//printf("%d\n",array[i]);
		//printf("%d\n",sum);
	}
	printf("%d\n",sum);
	
	
}
