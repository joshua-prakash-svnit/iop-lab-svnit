//program that will work like a simple calculater using switch case
//Joshua Prakash J

#include<stdio.h>
int main()
{
	
	int num1,num2;
	char operater;
	
	printf("enter the number");
	scanf("%d",&num1);
	printf("enter the number");
	scanf("%d",&num2);
	printf("enter the operator");
	scanf("\n%c",&operater);
	switch (operater)
	{
		case '+':
			printf("sum %d",num1+num2);
			break ;
		
		case '-':
			printf("difference %d",num1-num2);
			break;
		
		case '*':
			printf("product %d",num1*num2);
			break;
			
		case '/':
			printf("quotient %d",num1/num2);
			break;			
		default:
			printf("invalid operator");
			
		
		
	}

	
	
		
}
