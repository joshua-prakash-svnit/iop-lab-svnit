//swapping with 2 varaiables
//joshua prakash

#include<stdio.h>
int main()
{
    int a,b;
    printf("enter your first number");
    scanf("%d",&a);
    printf("enter your second number");
    scanf("%d",&b);
    printf("your numbers before swapping are a=%d and b=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;


    printf("\nyour numbers after swapping are a=%d and b=%d",a,b);
}
