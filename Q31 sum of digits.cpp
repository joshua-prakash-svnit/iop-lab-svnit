//progarm to print the sum of the individual digits of a number
//Joshua Prakash J
#include<stdio.h>
int main()
{
	int j,num,sum;
	printf("enter the number");
	scanf("%d",&num);
	for (j;num!=0;)
	{
		
		j=num%10;
		num=num/10;
		sum=sum+j;			
	}
	printf("the sum of the digit of the number is %d",sum);
	
}
