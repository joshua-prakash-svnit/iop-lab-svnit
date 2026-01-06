#include <stdio.h>
#include <math.h>

int isArmstrong(int n) {
    int original = n;
    int num_digits = 0;
    int temp = n;
    double sum = 0.0;

    while (temp != 0) {
        temp /= 10;
        ++num_digits;
    }

    temp = n;
    while (temp != 0) {
        sum += pow(temp % 10, num_digits);
        temp /= 10;
    }
    
    if ((int)sum == original) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);

    if (isArmstrong(number)) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }

    return 0;
}

