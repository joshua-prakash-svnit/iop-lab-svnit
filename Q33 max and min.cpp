//progarm to print th emax and min digit in a number  
//Joshua Prakash J
#include<stdio.h>
int main()
{
	int j,num,max=0,min=9;
	printf("enter the number");
	scanf("%d",&num);
	for (j;num!=0;)
	{
		
		j=num%10;
		num=num/10;
		
		if(j>max)
		{
			max=j;
		
		}
		if(j<min)
		{
			min=j;
		}
	
					
	}
	printf("the max of the digit of the number is %d\n",max);
	printf("the min of the digit of the number is %d\n",min);		
}
