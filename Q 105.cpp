#include <stdio.h>
#include <string.h>

int main()
{
    int i, a, n, j, g;
    char str[100];
    printf("Enter the characters: ");
    scanf("%s", &str);

    for (a = 0; a < strlen(str); a++)
    {
        for (i = 0; i < strlen(str) - 2; i++)
        {
            str[i] = str[i] + str[i + 1];
            str[i + 1] = str[i] - str[i + 1];
            str[i] = str[i] - str[i + 1];
            printf("%s \n", str);
        }

        for (j = i + 1; j < strlen(str) - 1; j++)
        {
            str[j] = str[j] + str[j + 1];
            str[j + 1] = str[j] - str[j + 1];
            str[j] = str[j] - str[j + 1];
            printf("%s \n", str);
        }
    }
}
