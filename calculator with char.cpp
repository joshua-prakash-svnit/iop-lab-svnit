//calculator with char
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
	printf("enter the operator \n for addition a \n for subraction s \n for multiplication m \n for division d");
	scanf("\n%c",&operater);
	switch (operater)
	{
		case 'a':
			printf("sum %d",num1+num2);
			break ;
		
		case 's':
			printf("difference %d",num1-num2);
			break;
		
		case 'm':
			printf("product %d",num1*num2);
			break;
			
		case 'd':
			printf("quotient %d",num1/num2);
			break;			
		default:
			printf("invalid operator");
			
		
		
	}

	
	
		
}
