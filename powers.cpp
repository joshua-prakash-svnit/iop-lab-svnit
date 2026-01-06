//program to read two number and calculate the powers without using the header file .math
#include <stdio.h>
int main()
{
    int base, power;
    float result = 1.0;   

    
    printf("Enter the base number: ");
    scanf("%d", &base);

    printf("Enter the power (exponent): ");
    scanf("%d", &power);

    if (power > 0) {
        for (int i = 1; i <= power; i++) {
            result = result * base;
        }
    } else if (power < 0) {
        for (int i = 1; i <= -power; i++) {
            result = result * base;
        }
        result = 1.0 / result;  
    } else {
        result = 1.0; 
    }

    printf("%d raised to the power %d is: %f\n", base, power, result);

    return 0;
}

