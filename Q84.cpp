#include <stdio.h>
int main(){
	int cost;
	char name[25],auth[25],genre[20];
	printf("Enter book name.");
	gets(name);
	printf("Enter book author.");
	gets(auth);
	printf("Enter book genre.");
	gets(genre);
	printf("Enter book cost in rupees.");
	scanf("%d",&cost);
	printf("BOOK NAME : %s",name);
	printf("\nBOOK AUTHOR : %s",auth);
	printf("\nBOOK GENRE : %s",genre);
	printf("\nBOOK COST : %d rupees",cost);
	return 0;
}
