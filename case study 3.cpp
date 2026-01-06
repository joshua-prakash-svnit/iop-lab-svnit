#include<stdio.h>
int main()
{
	int num,numog,ans=0,numch;
	int j,i;
	printf("enter the number");
	scanf("%d",&num);
	numog=num;
	numch=num;
		
	for(i=0;num!=0;i++)
	{
		num=num/10;
	}
	for (j;numog!=0;)
	{
		j=numog%10;
		numog=numog/10;
		if(numch%j==0)
		{
			ans++;
		}
	}
	printf("%d is the answer",ans);
}
	
