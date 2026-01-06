//cut off marks
//J Joshua Prakash

#include<stdio.h>
int main()

{

    int cutoffmarks,maths,phys,che,eng;
    printf("enter the maths marks");
    scanf("%d",&maths);
    printf("enter the physcis marks ");
    scanf("%d",&phys);
    printf("enter the chemistry marks");
    scanf("%d",&che);
    printf("enter the english marks");
    scanf("%d",&eng);
    cutoffmarks=maths/2+phys/2+che/2+eng;
    printf("the cutoff mark is %d",cutoffmarks);

}
