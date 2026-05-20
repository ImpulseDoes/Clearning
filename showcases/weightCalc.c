#include "stdio.h"


int main() {

    int choice  = 0;
    double weight = 0.0;
    double finalWeight = 0.0;

    printf("Weight Cacl\n\n");

    printf("1. Kilograms to Pounds\n");
    printf("2. Pounds to Kilograms\n");

    printf("Enter ur choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter weight in kilograms: ");
        scanf("%lf", &weight);

        finalWeight = weight * 2.20462;

        printf("%.2lf kilo is equal to %.2lf ponds", weight, finalWeight);

    } else if (choice == 2) {
        printf("Enter weight in pounds: ");
        scanf("%lf", &weight);

        finalWeight = weight * 0.453592;

        printf("%.2lf ponds is equal to %.2lf kilo", weight, finalWeight);
    } else {
        printf("Invalid choice!");
    }

    return 0;
}