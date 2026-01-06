#include<stdio.h>

int main ()
{
    FILE *fp;
    int n , i, roll_no, total_marks;
    char name;

    printf("Enter the Number of students you want to add:");
    scanf("%d", &n);

    fp = fopen("LNMIITSTUDENT.JAVA" , "w");

    printf("Enter Roll Number: ");
    scanf("%d", &roll_no);

    printf("Enter Name: ");
    scanf("%s", name);

    printf("Enter Total Marks: ");
    scanf("%d", &total_marks);

    fprintf(fp, "%d %s %d\n", roll_no, name, total_marks);

    fclose(fp);
}
