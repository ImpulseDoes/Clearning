#include <stdio.h>

int main() {

    int age = 25;
    float price = 19.99;
    double pi = 3.14159;
    char curr = '$';
    char name[] = "ImpulseDoes";

    // printf("You are %d years old, you bought a %.2f bag, pi is %lf, %c is collapsing, and ur name is %s\n", age, price, pi, curr, name);

    // the guy says that you can also use %f to display doubles
    // but for consitency he uses %lf, its something to do with user input


    // width
    // add spaces from the left to right, so:
    // if you say %3d and your var is 1
    // the output will be two spaces and 1
    //   1
    // if its 10, it will be one space and 10
    //  10
    // and if its 100, it wont have any spaces
    // cause it takes 3 spcaes
    //
    // you can "leftify" em with a minus at the beg
    // so %-3d will display the spaces from right to left
    //
    // you can also change empty spaces to 0, by adding 0 to the
    // number of spaces, so
    //
    // %03d

    int num1 = 1;
    int num2 = 10;
    int num3 = 100;

    // printf("%3d\n", num1);
    // printf("%3d\n", num2);
    // printf("%3d\n", num3);



    // presision

    float foat1 = 3.14159;
    float foat2 = 3.14159;
    float foat3 = 3.14159;

    printf("%f\n", foat1);
    printf("%f\n", foat2);
    printf("%f\n", foat3);

    // adding, %.2f will display one 2 numers after dot
    // so if its 19.99 it will display 19.99
    //
    // you can also combine width and other flags, so:
    //
    // + means that it will display when a num is possitive or negative

    printf("%+8.2f", foat3);

    return 0;
}