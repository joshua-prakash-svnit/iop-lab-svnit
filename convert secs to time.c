//convert secs to time
//J Joshua Prakash

#include<stdio.h>
int main()
{
    int hours,mins,secs,rmin,rsec;
    printf("enter the secs");
    scanf("%d",&secs);
    mins=secs/60;
    rsec=secs%60;
    hours=mins/60;
    rmin=mins%60;
    printf("it has been  %d hours %d mins %d secs",hours,rmin,rsec);
}
