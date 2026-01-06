//5 subjects and division
//J Joshua Prakash

#include <stdio.h>
int main() 
{
    int iop, iocs, beee, enc, mat, total;
    float percentage;
	printf("Enter marks of 5 subjects (out of 100):\n");
    printf("iop: ");
    scanf("%d", &iop);
    printf("iocs: ");
    scanf("%d", &iocs);
    printf("beee: ");
    scanf("%d", &beee);
    printf("enc: ");
    scanf("%d", &enc);
    printf("maths: ");
    scanf("%d", &mat);
    total = iop + iocs + beee + enc + mat;
    percentage = total / 5.0;
	printf("\nTotal Marks = %d\n", total);
    printf("Percentage = %.2f%%\n", percentage);
    if (percentage >= 60)
        printf("Division: First Division\n");
    else if (percentage >= 50)
        printf("Division: Second Division\n");
    else if (percentage >= 40)
        printf("Division: Third Division\n");
    else
        printf("Division: Fail\n");

   
}

