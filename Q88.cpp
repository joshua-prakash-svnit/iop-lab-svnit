/* QN. 88 - WRITE A PROGRAM TO READ INFORMATION OF 10 STUDENT AND DISPLAY THE
INFORMATION OF THOSE STUDENT WHOSE MARKS ARE GREATHER THAN 500.(PASSING
ARRAY OF STRUCTURE INTO FUNCTION). */
#include <stdio.h>
struct Student {
    char name[50];
    int roll_no;
    int marks;
};
void above_500(struct Student students[], int n) {
    printf("\nStudents with marks greater than 500:\n");
    int i;
    for (i = 0; i < n; i++) {
        if (students[i].marks > 500) {
            printf("Name: %s\n", students[i].name);
            printf("Roll No: %d\n", students[i].roll_no);
            printf("Marks: %d\n\n", students[i].marks);
        }
    }
}
int main() {
    struct Student students[10];
    int i;
    for (i = 0; i < 10; i++) {
        printf("Enter details for Student %d:\n", i + 1);
        printf("Name: ");
        getchar(); 
        fgets(students[i].name, sizeof(students[i].name), stdin); 
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);
        printf("Marks: ");
        scanf("%d", &students[i].marks);
        printf("\n");
    }
    above_500(students, 10);
    return 0;
}

