#include<stdio.h>
#include<string.h>
int main(){
    //SHOPPING CART PROGRAM
    char item[50]="";
    float price=0.0f;
    char currency='$';
    int quantity=0;

    printf("What item would you like to buy?:");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0'; // Remove newline character from the end of the string

    printf("what is the price for each?: ");
    scanf("%f", &price);

    printf("Enter the quantity: ");
    scanf("%d", &quantity);

    float total = price * quantity;
    printf("\nYou have bought %d units of %s/s\n", quantity, item);
    printf("Your Bill is: %c%.2f\n", currency, total);

    return 0;
}