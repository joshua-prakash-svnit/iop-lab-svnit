#include<stdio.h>
int main()
{
		char str[50],*ptr;
	printf("enter the string\n");
	gets(str);
	//puts(str);
	int c_w_space=0,c_wo_space=1,i;
	for (i=0;str[i]!='\0';i++){
		ptr=&str[i];
		if (*ptr==' '||*ptr=='\n'||*ptr=='\t'){
			c_wo_space++;
		}

	}
		printf("no of words =%d",c_wo_space);
}
