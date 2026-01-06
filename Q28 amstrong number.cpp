//program to check if the number is amstrong number
//Joshua Prakash J
#include<stdio.h>
int main()
{
	int num,numog,numam=0,numch,power=1;
	float j,i;
	printf("enter the number");
	scanf("%d",&num);
	numog=num;
	numch=num;
	numam=0;	
	for(i=0;num!=0;i++)
	{
		num=num/10;
	}
	for (j;numog!=0;)
	{
		power=1;
		j=numog%10;
		numog=numog/10;
		for(int p=0;p<i;p++)
		{
			power=power*j;
					}
			numam=numam+power;			
	}
	//numam=numam-1;
	//printf("%d\n",numam);
	if(numch==numam)
	{
		printf("number is amstrong number");
	}
	else
	{
		printf("number is not amstrong number");
	}
}
