//gross salary
//J JOSHUA PRAKASH

#include<stdio.h>
int main()
{
    int gross,basic_salary,allowance,bonus,others;
    printf("enter your basic salary ");
    scanf("%d",&basic_salary);
    printf("enter your allowance");
    scanf("%d",&allowance);
    printf("enter your bonus");
    scanf("%d",&bonus);
    printf("enter your other expenses ");
    scanf("%d",&others);
    gross=basic_salary+allowance+bonus+others;
    printf("the gross salary is %d",gross);
}