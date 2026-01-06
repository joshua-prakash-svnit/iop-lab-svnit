//earth days
//J Joshua Prakash

#include<stdio.h>
int main()
{
    int hours,mins,secs,rmin,rhours,days,rsec;
    printf("enter the secs");
    scanf("%d",&secs);
    mins=secs/60;
    rsec=secs%60;
    hours=mins/60;
    rmin=mins%60;
    days=hours/24;
    rhours=hours%24;
    printf("it has been %d days %d hours %d mins %d secs",days,rhours,rmin,rsec);

}
