//program to print a tables of any number
//Joshua Prakash J
#include<stdio.h>
int main()
{
	int num,i;
	printf("enter the number you want to ");
	scanf("%d",&num);
	for (i=1;i<=10;i++)
	{
		printf("%dx%d=%d\n",num,i,num*i);
	}

}
