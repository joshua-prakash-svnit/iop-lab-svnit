#include<stdio.h>
int main()
{
	char character;
	printf("enter your character");
	scanf("%c",&character);
	(character >= 'a' && character <= 'z') ? printf("the %c is a small letter",character):printf("the %c is not a small letter");
}
