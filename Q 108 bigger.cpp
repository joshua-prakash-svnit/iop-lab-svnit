#include <stdio.h>

int length(char str[]){
    int l = 0;
    while(str[l] != '\0'){
        l++;
    }
    return l;
}

int main(){
    char str1[100], str2[100];
    char *p1 = str1, *p2 = str2;
    int s;
    printf("enter the 1st string");
    fgets(str1, sizeof(str1), stdin);
    printf("enter the 2nd string");
    fgets(str2, sizeof(str2), stdin);
    
    if(length(str1) > length(str2)){
        printf("String 1 is greater.\n");
        return 0;
    }
    
    if(length(str2) > length(str1)){
        printf("String 2 is greater.\n");
        return 0;
    }
    

    while(*p1 && *p2 && *p1 == *p2){
        p1++;
        p2++;
    }
    
    s = *p1 - *p2;
    
    if (s == 0)
        printf("Strings are equal.\n");
    else if (s > 0)
        printf("String 1 is greater.\n");
    else // s < 0
        printf("String 2 is greater.\n");
    
    return 0;
}
