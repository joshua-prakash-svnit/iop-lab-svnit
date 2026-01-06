#include<stdio.h>

int main(){
	int n,temp;
	printf("enter the number of elements in the array\n");
	scanf("%d",&n);
	int a[n],i;
	printf("enter the elements\n");
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for (i=0;i<n-1;i++){
		for(int j=0;j<n-1;j++){
			if (a[j]>a[j+1]){
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
	
	
}
