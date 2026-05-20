#include "stdio.h"
#include "stdbool.h"

int square(int x) {
    return x * x;
}

bool isNotKid(float age) {
    if (age >= 18) return true;
    else return false;
}

int main() {

    int x = square(2);
    int y = square(3);
    int z = square(4);

    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d\n", z);

    float age = 20;

    if(isNotKid(age)) {
        printf("Give him a beer");
    } else {
        printf("keep this nga away!!!");
    }

    return 0;
}