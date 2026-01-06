//program to check whether the number is palindrome or not
//Joshua Prakash J

#include<stdio.h>
int main()

{
	int num,j,num1,pal=0;
	printf("enter the number");
	scanf("%d",&num);
	num1=num;
	for(;num!=0;)
	{
		j=num%10;
		pal=(pal*10)+j;
		num=num/10;
	}
	//printf("%d\n%d",pal,num1);
	if(pal==num1)
		printf("it is palindrome");
	else
		printf("it is not a palindrome");
}
