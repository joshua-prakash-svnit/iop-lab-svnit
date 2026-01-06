// QN. 86 - WRITE A FUNCTION TO READ CHARACTER AND CHECK WHETHER IT IS VOWEL OR NOT.
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
	char vow;
	printf("Enter character to be checked if it is a vowel.");
	scanf("%c",&vow);
	if(strchr("AEIOUaeiou",vow)!=NULL)
	{
		printf("It is a vowel.");
	}
	else
	{
		printf("It is not a vowel");
	}
	return 0;
}
