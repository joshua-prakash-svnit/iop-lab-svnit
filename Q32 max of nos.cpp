//progarm to print the max and second max nos
//Joshua Prakash J
#include<stdio.h>
int main()
{
	int j,num,max=0,secmax=0;
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
		else if(j>secmax && j<max)
		{
			
			secmax=j;
		}
					
	}
	printf("the max of the digit of the number is %d\n",max);
	printf("the second max of the digit of the number is %d\n ",secmax);	
}
