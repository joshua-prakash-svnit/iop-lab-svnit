//read seconds
//J Joshua Prakash

#include<stdio.h>
int main()
{
    int hours,mins,secs,otpsecs;
    printf("enter the hours");
    scanf("%d",&hours);
    printf("enter the mins");
    scanf("%d",&mins);
    printf("enter the secs");
    scanf("%d",&secs);
    otpsecs=hours*3600+mins*60+secs;
    printf("%d is the total sec",otpsecs);

}