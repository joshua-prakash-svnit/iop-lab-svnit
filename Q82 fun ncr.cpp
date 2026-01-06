#include <stdio.h>

long long factorial(int num) {
    long long fact = 1;
    if (num < 0) {
        return 0;
    }
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n, r;
    long long ncr_result;
    long long fact_n, fact_r, fact_n_minus_r;

    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of r: ");
    scanf("%d", &r);

    if (r > n || r < 0 || n < 0) {
        printf("Invalid input. r cannot be greater than n, and both must be non-negative.\n");
        return 1;
    }

    fact_n = factorial(n);
    fact_r = factorial(r);
    fact_n_minus_r = factorial(n - r);

    ncr_result = fact_n / (fact_r * fact_n_minus_r);

    printf("The value of %dC%d is: %lld\n", n, r, ncr_result);

    return 0;
}

