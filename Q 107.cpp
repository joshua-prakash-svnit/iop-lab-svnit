#include <stdio.h>

int flip(int num, int n)
{
    int i, power = 1, remaining, rev = 0, new_number;
    for (i = 0; i < n; i++)
    {
        power = 10 * power;
    }

    int temp = num % power;

    while (temp != 0)
    {
        rev = rev * 10 + temp % 10;
        temp = temp / 10;
    }

    remaining = num / power;

    new_number = remaining * power + rev;

    return new_number;
}

int main()
{
    int num, n;
    printf("Enter number: ");
    scanf("%d", &num);

    printf("Enter N digits to flip: ");
    scanf("%d", &n);

    int result = flip(num, n);
    printf("Result = %d\n", result);

    return 0;
}
