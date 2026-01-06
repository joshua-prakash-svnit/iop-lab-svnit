#include <stdio.h>

int isPalindrome(int n) {
    int original = n;
    int reversed = 0;
    int remainder;

    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    if (original == reversed) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);

    if (isPalindrome(number)) {
        printf("%d is a palindrome number.\n", number);
    } else {
        printf("%d is not a palindrome number.\n", number);
    }

    return 0;
}

