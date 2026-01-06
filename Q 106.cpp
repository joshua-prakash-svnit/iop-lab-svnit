#include<stdio.h>

struct item
{
    char item_name[40];
    int quantity;
    float price;
    float Amount;
};

int main()
{
    struct item a;
    printf("Item name = ");
    scanf("%s", a.item_name);
    printf("Quantity = \n");
    scanf("%d", &a.quantity);
    printf("Price = \n");
    scanf("%f", &a.price);

    a.Amount = a.quantity * a.price;
    printf("Amount = %f", a.Amount);
    
    return 0; 
}
