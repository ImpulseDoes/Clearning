#include <stdio.h>
#include <stdbool.h>

int main() {

    // whole numbers
    int age = 25;
    int year = 2025;
    int quantity = 1;

    // %d aka decimal passujesz potem liczbe po prostu
    printf("You're %d years old\n", age);
    printf("The year is %d\n", year);
    printf("You have ordered %d x times\n", quantity);


    float gpa = 2.5;

    // %f aka float (default 6 liczb po kropce)
    printf("Your GPA is %f\n", gpa);

    // mozesz zmienic poprzez dodanie %.1f
    // i to wyswietli 1 liczbe po przecinku

    float price = 19.99;
    printf("Your price is %.1f PLN\n", price);

    float temp = -10.1;

    printf("The temperature is %.1f\n", temp);

    // double


    double pi = 3.14159;
    double e = 2.7435476363456483;

    // lf aka long float, is used to display
    // doubles

    // the guy is saying that double
    // means more presiction, and I kinda get it
    // cause with float, it rounds my number
    // but double doesnt do that shi

    printf("The value of PI is: %.2lf\n", pi);
    printf("The value of E is: %lf\n", e);


    // chars



    char grade = '6';
    char symbol = '*';
    char currency = '$';

    // %c aka char, used to display char
    printf("Your grade is %c\n", grade);
    printf("This is %c symbol\n", symbol);

    printf("Your fac currency is %c\n", currency);


    // C doesnt have strings, so you use array

    char name[] = "Impulse";
    char food[] = "Pizza";
    char email[] = "twojstarypijany123@gmail.com";

    // %s is for strings, kinda obvious by now
    printf("Hello, %s!\n", name);

    printf("Your fav food is %s!\n", food);

    printf("Your email is %s pozdro\n", email);

    // I bool type, ale trzeba podobno zrobic
    // include <stdbool.h> z jakiegos powodu

    // you can say 1 or 0 instead of true / false
    // still valid expression
    bool isOnline = true;

    // to display bools, you use %d
    printf("%d", isOnline);

    return 0;
}