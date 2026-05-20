#include "stdio.h"
#include "stdbool.h"

// function protoype
void hello(char name[], int age);

// so you need the name, return type, & args so you can protopte
// the function, however the logic can be anywhere, for example at
// the bottom

bool ageCheck(int age);

int main() {

    hello("ImpulseDoes", 20);

    if (ageCheck(18)) {
        printf("You can work here");
    }

    return 0;
}

void hello(char name[], int age) {
    printf("Hello %s\nyou're %d years old\n", name, age);
}

bool ageCheck(int age) {
 if (age >= 18) return true;
 else return false;
}

// or you can use: so it will be shorter

// bool ageCheck(int age) {
    // return age >= 18;
// }