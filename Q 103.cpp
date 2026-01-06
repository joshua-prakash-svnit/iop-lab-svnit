#include<stdio.h>

#define Big(a,b)((a>b) ? a:b )

int main()
{
    int x,y;

    printf("Enter the two numbers");
    scanf("%d %d", &x , &y);

    printf("The bigger number is %d ", Big(x,y));
}
