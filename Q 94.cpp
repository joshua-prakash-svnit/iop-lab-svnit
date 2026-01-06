#include<stdio.h>
#include<string.h>
int main()
{
		char str[50],*ptr, rstr[50];
		int i=0,len;
	printf("enter the string\n");
	gets(str);
	//puts(str);
	len=strlen(str);
	//printf("%d",len);
	for (i=0;str[i]!='\0';i++){
		ptr=&str[i];
			//printf("%c",str[i]);
		rstr[len-1]=*ptr;
		len--;
			//printf("%c",rstr);
	}

	puts(rstr);
	
}
