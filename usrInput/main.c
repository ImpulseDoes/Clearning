#include <stdio.h>

int main() {

    int age = 0;

    float gpa = 0.0f; // add f if its a float, double doesnt need it

    char grade = '\0'; // null terminator char

    // if you dont specify the string on the start, so like
    // char name[] = "Impulse"
    // you need to give the array a size, for example
    // char name[30];

    char name[30] = ""; // empty string

    // scanf is used to get the imput from the user
    // & is like a pointer to a var, that the user will pass
    printf("Enter ur age: ");
    scanf("%d", &age);

    printf("Enter ur GPA: ");
    scanf("%f", &gpa);


    // so, sometimes you need to add space, to clear
    // the buffer from previous scans, cause rn:
    // scanf("%c", &grade);
    // it will pick up the empty space, from prevoius scanf
    // to change the behaviur with a "shortcut"
    // add a space, to the " %c" so like:
    // scanf(" %c", &grade);

    printf("Enter ur grade: ");
    scanf(" %c", &grade);

    // scanf will stop reading after encountering a space
    // for strings, you have to use fgets
    // printf("Enter ur full name: ");
    // fgets(name, 30, stdin);

    // okay so, in fgets, you pass the var, size, and standard input
    // however if you change the size of the array from 30 to 50, you also need
    // to to that in fgets, you can make it easier by using sizeof(var)
    getchar(); // adding this, means something like scanf(" %s"), so we're clearing the buffer from spaces
    printf("Enter ur full name: ");
    fgets(name, sizeof(name), stdin);

    // okay so my guy is halucineting with some fucked up
    // lgoic, but basiclly, he's saying:
    //
    // if you would print the name, as the first thing there
    // it would add a \n char, so it would be
    // name
    //
    // age etc.
    //
    // its because fgets, when you press enter, it captures that enter
    // and its adding that \n. to get rid of it, you need to include string.h
    // and then, under the fgets() you need to add:
    // name[strlen(name) - 1 ] = '\0'; (strlen is a function from string.h)
    // so it looks like this name = "ImpulseDoes\0"
    // Im not doing that shit here, but its good to remember that

    printf("%d\n", age);
    printf("%.2f\n", gpa);
    printf("%c\n", grade);
    printf("%s\n", name);

    return 0;
}