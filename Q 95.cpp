#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stddef.h> 

struct Employee {
    int emp_number;
    char emp_name[50];
    float basic_pay;
};

int main() {
    struct Employee employ[50]; 
    struct Employee *ptr;
    int n, i;

    ptr = employ; 

    printf("Enter the number of employees (N, max 50): ");
    
    if (scanf("%d", &n) != 1) {
        printf("Invalid input. Please enter a number.\n");
        return 1;
    }
    while (getchar() != '\n'); 

    if (n > 50 || n < 1) {
        printf("Invalid number of employees entered (must be 1-50).\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);
        
        printf("Employee Number: ");
        if (scanf("%d", &(ptr + i)->emp_number) != 1) { 
             printf("Invalid input for Employee Number. Exiting.\n");
             return 1;
        }
        while (getchar() != '\n'); 

        printf("Employee Name: ");
        if (fgets((ptr + i)->emp_name, sizeof((ptr + i)->emp_name), stdin) == NULL) {
            printf("Error reading name. Exiting.\n");
            return 1;
        }

        size_t len = strlen((ptr + i)->emp_name);
        if (len > 0 && (ptr + i)->emp_name[len - 1] == '\n') {
            (ptr + i)->emp_name[len - 1] = '\0';
        }
        
        printf("Basic Pay: ");
        if (scanf("%f", &(ptr + i)->basic_pay) != 1) {
            printf("Invalid input for Basic Pay. Exiting.\n");
            return 1;
        }
        while (getchar() != '\n'); 
        
        if (islower((unsigned char)(ptr + i)->emp_name[0])) { 
            printf("[Info: Name starts with a lowercase letter.]\n");
        }
    }

    printf("\nEmployee Details List \n");
    printf("%s    %s      %s\n", "Emp Number", "Emp Name", "Basic Pay");
    printf("\n");

    for (i = 0; i < n; i++) {
        printf("%-15d %-25s %-15.2f\n", 
                (ptr + i)->emp_number, 
                (ptr + i)->emp_name, 
                (ptr + i)->basic_pay);
    }

    return 0;
}
