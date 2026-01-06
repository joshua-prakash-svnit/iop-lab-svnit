//program to print a number and add it digits and add till it results in single digit
//Joshua Prakash J
#include<stdio.h>
int main()
{
	int j,num,sum;
	printf("enter the number");
	scanf("%d",&num);
	do
	{
		sum=0;
		for(;num!=0;)
		{
			j=num%10;
			num=num/10;
			sum=sum+j;
		}
		num = sum;
		
	}while(sum>9);
	printf("%d is the sum of the digit till single digit remains as a single digit",sum);
}
