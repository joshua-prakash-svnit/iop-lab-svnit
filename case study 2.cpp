#include <stdio.h>

int main() 
{
    int var1, var2; 
	printf("enter the values of N and M");
    scanf("%d %d", &var1, &var2);
	int z[10],total=0;
    for (int j=0;j<=9;j++)
        {
        	z[j]=0;
        	//printf("%d",z[j]);
		}

    for (int i = 0; i < var2; i++) 
	{
        
        
		int a, b, c;
        printf(" enter the two jar number and th enumber of candies in it");
        scanf("%d %d %d", &a, &b, &c);
        //printf("yes");
       
        for (int j=a-1;j<=b-1;j++)
        {
        	//printf("yes");
        	z[j]=z[j]+c;
		}
	
		/*for (int j=0;j<=9;j++)
        {
        	printf("%d\n",z[j]);
		}*/
    }
		for (int j=0;j<=9;j++)
        {
        	total=total+z[j];
		}
        printf("%d is the total",total);
		printf("%d is the average",total/var1);

	
}

