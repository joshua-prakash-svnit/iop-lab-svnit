#include <stdio.h>

int main() {
    int i, j, space;
    for(i = 1; i <= 5; i++) {        // Rows
        for(space = i; space < 5; space++) {  // Print spaces
            printf(" ");
        }
        for(j = 1; j <= i; j++) {    // Print numbers
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}

