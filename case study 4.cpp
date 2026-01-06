#include <stdio.h>
#include <string.h>

int main() {
    int n;
    printf("Enter the number of rocks: ");
    if (scanf("%d", &n) != 1) return 0;

    int global_counts[26] = {0};
    char rock[105];

    for (int i = 0; i < n; i++) {
        printf("Enter composition of rock %d: ", i + 1);
        scanf("%s", rock);
        
        int seen_in_this_rock[26] = {0};
        
        for (int j = 0; rock[j] != '\0'; j++) {
            int index = rock[j] - 'a';
            seen_in_this_rock[index] = 1;
        }

        for (int k = 0; k < 26; k++) {
            if (seen_in_this_rock[k]) {
                global_counts[k]++;
            }
        }
    }

    int gem_elements = 0;
    for (int k = 0; k < 26; k++) {
        if (global_counts[k] == n) {
            gem_elements++;
        }
    }

    printf("Number of gem-elements: ");
    printf("%d\n", gem_elements);

    return 0;
}
