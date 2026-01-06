#include <stdio.h>

int main(){
	int num,*p;
	printf("enter the number");
	scanf("%d",&num);
	p=&num;
	printf("square of the number is %d\n",*p * *p );
	printf("cube of the number is %d",*p * *p * *p );
}
