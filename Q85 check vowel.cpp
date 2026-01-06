#include <stdio.h>
#include <ctype.h>

int is_vowel(char c);
char read_character();

int main() {
    char ch;
    ch = read_character();

    if (isalpha(ch)) {
        if (is_vowel(ch)) {
            printf("The character '%c' is a vowel.\n", ch);
        } else {
            printf("The character '%c' is a consonant.\n", ch);
        }
    } else {
        printf("The character '%c' is not an alphabet.\n", ch);
    }

    return 0;
}

char read_character() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    return ch;
}

int is_vowel(char c) {
    c = tolower(c);
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        return 1;
    } else {
        return 0;
    }
}

