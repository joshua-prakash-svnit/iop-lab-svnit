#include <stdio.h>

int main(){
	char str[50],*ptr;
	printf("enter the string\n");
	gets(str);
	//puts(str);
	int c_w_space=0,c_wo_space=0,i;
	for (i=0;str[i]!='\0';i++){
		ptr=&str[i];
		if (*ptr!=' '){
			c_wo_space++;
		}
		c_w_space++;
	}
	printf("with space =%d    \nwithout space =%d",c_w_space,c_wo_space);
}
