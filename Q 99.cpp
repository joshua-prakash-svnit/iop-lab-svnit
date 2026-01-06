#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *filePointer;
    char ch;
    int vowelCount = 0;

    filePointer = fopen("data.txt", "r");

    if (filePointer == NULL) {
        printf("Error: Could not open the file. Make sure data.txt exists.\n");
        return 1;
    }

    printf("File Content:\n");
    printf("-------------\n");

    while ((ch = fgetc(filePointer)) != EOF) {
        
        printf("%c", ch);

        char lowerCh = tolower(ch);

        if (lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || 
            lowerCh == 'o' || lowerCh == 'u') {
            vowelCount++;
        }
    }

    printf("\n\n-------------");
    printf("\nTotal number of vowels: %d\n", vowelCount);

    fclose(filePointer);

    return 0;
}
