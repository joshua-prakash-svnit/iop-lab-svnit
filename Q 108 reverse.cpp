#include <stdio.h>

int length(char str[]){
    for(int i = 0; ; i++){
        if(str[i] == '\0'){
            return i;
        }
    }
}

int main(){
    int i, j, k;
   
    char str1[100], str2[100];
    char *ptr1 = str1, *ptr2 = str2;
    
    printf("Enter your string : ");
    fgets(str1, sizeof(str1), stdin);
    
    for(i = 0; i < length(str1) - 1; i++){
        *(ptr2 + i) = *(ptr1 + length(str1) - 2 - i);
    }
    
    *(ptr2 + i) = '\0'; 
    
    puts(str2);
    
    return 0;
}
