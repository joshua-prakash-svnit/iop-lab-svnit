//program to print 1/1!+1/2!.....
//Joshua Prakash J

#include<stdio.h>
int main()
{
	int n,i=1;
	float result,fresult=0,fac;
	printf("enter the terms you want to ");
	scanf("%d",&n);
	while(i<=n)
	{
		fac=1;
		for (int j=1;j<=i;j++)
		{
			fac=fac*j;
		}
		result=1/fac;
		fresult=fresult+result;
	//printf("%.2f\n",result);
		i++;
		
	}
	printf("%.2f\n is the sum of the series till n terms",fresult);
	
}
