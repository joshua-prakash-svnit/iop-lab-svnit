#include <stdio.h>

int length(char str[]) {
    int l = 0;
    while (str[l] != '\0') {
        l++;
    }
    return l;
}

int main() {
    int i, j, k;
    
    char str1[100], str2[100], str3[200];
    char *ptr1 = str1, *ptr2 = str2, *ptr3 = str3;

    printf("Enter your string : ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter your string : ");
    fgets(str2, sizeof(str2), stdin);

    
    for (i = 0; i < length(str1) - 1; i++) {
        *(ptr3 + i) = *(ptr1 + i);
    }

    
    for (j = 0; j < length(str2); j++) {
        *(ptr3 + i + j) = *(ptr2 + j);
    }

   
    *(ptr3 + i + j) = '\0';

    puts(str3);

    return 0; 
}
