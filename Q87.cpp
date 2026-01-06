// QN.87 - WRITE A FUNCTION TO READ LINE OF TEXT AND FIND OUT LENGTH OF STRING.
#include <stdio.h>
#include<string.h>
#include<ctype.h>
int len(char str[]){
	int i=0;
	while(str[i]!='\0'){
		i++;
	}
	return i;
}
int main(){
	int x=len("AEIOU");
	printf("String length of AEIOU - %d",x);
	return 0;
}
