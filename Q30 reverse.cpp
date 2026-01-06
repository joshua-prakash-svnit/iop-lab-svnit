//program to reverse a given nos
//Joshua Prakash J

#include<stdio.h>
int main()
{
	int num,j,rev=0;
	printf("enter the number");
	scanf("%d",&num);
	for(;num!=0;)
	{
		j=num%10;
		rev=(rev*10)+j;
		num=num/10;
	}
	printf("%d is the reversed number",rev);
}
