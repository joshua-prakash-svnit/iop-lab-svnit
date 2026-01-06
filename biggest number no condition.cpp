//program to read three numbers and print max using conditional operater
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
	(a>b && a>c) ? printf(" %d is the biggest number",a):
	(b>c && b>c) ? printf("%d is the biggest number",b) : printf("%d is the biggest number",c);
}
