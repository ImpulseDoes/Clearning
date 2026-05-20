#include <stdio.h>
#include <math.h>

int main() {

    int x = 0;
    double y = 0.0;
    double z = 0.0;
    char choice = '\0';

    printf("Whats your first number: ");
    scanf("%d", &x);

    printf("Whats your second number: ");
    scanf("%lf", &y);

    getchar();
    printf("What would you like to do (+, -, *, /, ^): ");
    scanf("%c", &choice);

    // we can clear the white space char by either " %c" or getchar();
    // I lowkey like getchar() cause with fgets() its only getchar()
    // and I wanna be consistant in my code

    switch (choice) {

        case '+': {
            z = x + y;
            printf("Add: %d + %.0lf = %.2lf", x, y, z);
            break;
        }
        case '-': {
            z = x - y;
            printf("Sub: %d - %.0lf = %.2lf", x, y, z);
            break;
        }
        case '*': {
            z = x * y;
            printf("Mul: %d * %.0lf = %.2lf", x, y, z);
            break;
        }
        case '/': {
            z = x / y;
            printf("Dev: %d / %.0lf = %.2lf", x, y, z);
            break;
        }
        case '^': {
            z = pow(x, y);
            printf("Pow: %d ^ %.0lf = %.2lf", x, y, z);
            break;
        }
        default: {
            printf("Choose something that actually displays on ur screen dump fck bitch");
        }
    }

    // in theory, I could do the prinf here, but I wanna to show
    // the method, so like power, addition etc, but I could do
    // z = pow(x, y) and then print everything at the end

    return 0;
}