#include <stdio.h>

void hello() {
    printf("Function!");
}

void helloWithName(char name[]) {
    printf("Hello, %s!\n", name);
}

int main() {

    // hello();

    helloWithName("ImpulseDoes");

    return 0;
}