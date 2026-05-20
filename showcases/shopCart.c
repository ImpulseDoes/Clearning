#include <stdio.h>
#include <string.h>

int main() {

    char item[35] = "";
    double price = 0.00;
    int amount = 0;
    char crr = '$';
    double total = 0.00;


    printf("What item would you like to buy?: ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0';

    printf("What is the price for each?: ");
    scanf("%lf", &price);

    printf("How many would you like?: ");
    scanf("%d", &amount);

    total = price * amount;

    printf("You have bought %d %s/s\n", amount, item);
    printf("The total is: %.2lf%c", total, crr);


    return 0;
}