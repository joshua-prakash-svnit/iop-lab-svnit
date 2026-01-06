//program to read three numbers and print max using logical operater
//Joshua Prakash J

#include<stdio.h>
int main()

{
	
	int a,b,c;
	printf("enter the first number");
	scanf("%d",&a);
	printf("enter the second  number");
	scanf("%d",&b);
	printf("enter the thrid number");
	scanf("%d",&c);
	
	if (a>b && a>c)
	{
		printf("%d is the biggest number",a);
	}
	else if (b>c && b>a)
	{
		printf("%d is the biggest number",b);
	}
	else
	{
		printf("%d is the biggest number",c);
	}
	
}
