//swapping with 3 variables
// joshua prakash

#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("enter your first number");
    scanf("%d",&a);
    printf("enter your second number");
    scanf("%d",&b);
    printf("your numbers before swapping are a=%d and b=%d",a,b);

    temp=a;
    a=b;
    b=temp;
    printf("\nyour numbers after swapping are a=%d and b=%d",a,b);
}
