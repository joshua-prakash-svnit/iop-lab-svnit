#include <stdio.h>
#include <string.h>

void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

void solve() {
    char w[105];
    
    // Prompt before inputting the string
    printf("Enter string: ");
    if (scanf("%s", w) != 1) return;

    int len = strlen(w);
    int i, j;

    for (i = len - 2; i >= 0; i--) {
        if (w[i] < w[i+1]) {
            break;
        }
    }

    if (i < 0) {
        // Label before outputting "no answer"
        printf("Result: ");
        printf("no answer\n");
        return;
    }

    for (j = len - 1; j > i; j--) {
        if (w[j] > w[i]) {
            break;
        }
    }

    swap(&w[i], &w[j]);

    int start = i + 1;
    int end = len - 1;
    while (start < end) {
        swap(&w[start], &w[end]);
        start++;
        end--;
    }

    // Label before outputting the result string
    printf("Result: ");
    printf("%s\n", w);
}

int main() {
    int t;
    
    // Prompt before inputting number of test cases
    printf("Enter number of test cases: ");
    if (scanf("%d", &t) != 1) return 0;

    while (t--) {
        solve();
    }

    return 0;
}
