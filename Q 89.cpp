#include <stdio.h>

int main(){
	int a,b,*p,*q,sum[10],diff[10];
	printf("enter\n");
	for (a=0;a<10;a++){
		scanf("%d",&sum[a]);
	}
		for (a=0;a<10;a++){
		p=&sum[a];
		diff[9-a]=*p;
		}
	

	//diff[10]='\0';
	for (a=0;a<10;a++){
		printf("%d\t",sum[a]);
		
	}
	printf("\n");
	for (a=0;a<10;a++){
		
		printf("%d\t",diff[a]);
	}
	
	

	
}
