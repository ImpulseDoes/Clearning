#include <stdio.h>

// vars outside of the scopes, are global
// meaning that you can use 'em everywhere

// the guys is saying that like it will be harder to debug and shi
// so basiclly avoid global vars, and use local, not ifs its a enum ig

int add(int x, int y) {
    return x + y;
}

int main() {

    int x = add(2, 3);

    printf("%d", x);

    return 0;
}