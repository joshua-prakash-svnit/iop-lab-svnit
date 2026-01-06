//a program to check whether it is a prime nos or not
//Joshua Prakash J

#include<stdio.h>
int main()
{
	int num,flag=0,i;
	printf("enter the number you want to check");
	scanf("%d",&num);
	for(i=2;i<=num/2;i++)
	{
		if (num%i==0)
		{
			flag=1;
			break;
		}
	}
	if (flag==1)
	{\
		printf("%d is not a prime number",num);
	}
	else 
	{
		printf("%d is a prime number",num);
	}
} 
