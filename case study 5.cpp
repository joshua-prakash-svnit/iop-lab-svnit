#include<stdio.h>
int main()
{
	int j=1,i=0,sum=0,num;
	printf("enter the number");
	scanf("%d",&num);
    for(i;i<=num;)
    {
    	if (i==num)
    	{
    		printf("the number is in fibonaccis series");
    		return 0;
		}
		else
		{
			sum=i+j;
    		i=j;
    		j=sum;
    		print("%d",j);
		
		}
    	
    	
	}
}
