#include<stdio.h>
int main()
{
	int i=1,num,option;
	for(i;i>0;i++)
	{
		i=1;
		printf("enter a number");
		scanf("%d",&num);
		if(num==7)
			printf("you are the lucky winner");
		else
		{
			printf(" you lose try again!!!");
		}
		printf("/nwanna discontinue press 1 to break press any other number");
		scanf("%d",option);
		if(option==1)
		{
			i=1;
		}
			
		else
		{
			i=0;
		}
	}
}
