#include<stdio.h>

int main(){
	int size;
	printf("enter the size of the array");
	scanf("%d",&size);
	int a[size+1],rotate,i;
	printf("enter the rotation times");
	scanf("%d",&rotate);
	printf("enter the elements\n");
	for (int i=0;i<size;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<rotate;i++){
		for(int j=size-1;j>=0;j--){
			a[j+1]=a[j];
		}
		a[0]=a[size];
	}
	for(i=0;i<size;i++){
		printf("%d\t",a[i]);
	}
}
	
	

