#include<stdio.h>
#include<string.h>
#include <ctype.h>
int main()
{
			char str[50],*ptr;
	printf("enter the string\n");
	gets(str);
	//puts(str);
	int c_w_space=0,c_wo_space=0,i;
	for (i=0;str[i]!='\0';i++){
		str[i]=tolower(str[i]);
		ptr=&str[i];
		if (*ptr=='e'||*ptr=='a'||*ptr=='i'||*ptr=='o'||*ptr=='u'){
			c_wo_space++;
		}

	}
		printf("no of vowel =%d",c_wo_space);
	
}
