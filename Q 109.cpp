#include <stdio.h>
int main() {
    int x,y,*ptr;

    printf("Enter the original integer value: ");
    scanf("%d", &x);

    ptr = &x;
    printf("Initial Value:%d\n", x);

    printf("\n\nEnter the new value of x:");
    scanf("%d", &y);

    *ptr = y;

    printf("New Value of x: %d\n", x);

    return 0;
}
