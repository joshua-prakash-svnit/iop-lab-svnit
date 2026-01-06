//convert time to secs
//J Joshua Prakash

#include<stdio.h>
int main()
{
    int hours,min,sec,total_sec;
    printf("enter the hours");
    scanf("%d",&hours);
    printf("enter the minutes");
    scanf("%d",&min);
    printf("enter the seconds");
    scanf("%d",&sec);
    printf("it has been  %d hours %d mins %d secs",hours,min,sec);
    total_sec=(hours*3600)+(min*60)+sec;
    printf("\nit has been %d seconds",total_sec);
    
}
    

