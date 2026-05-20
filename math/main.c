#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int x = 9;
    int y = 2;

    float z = 3.14;
    float u = 3.14;
    float i = 3.14;

    int p = -3;

    float v = 3;

    // get square root of x
    // also when building with the gcc main.c -o main
    // you need to pass -lm to link math for some reason, cause its not there by default
    // you need math.h for it

    // x = sqrt(x);

    // printf("%d", x);

    // get power of 2, so like 2 * 2
    // nothing new
    // y = pow(y, 2);

    // printf("%d", y);

    // round up
    z = round(z);

    printf("%.2lf\n", z);

    // ceil round to up
    u = ceil(u);


    printf("%.2lf\n", u);
    // floor round to down
    i = floor(i);

    printf("%.2lf\n", i);

    // aboslute value
    // so just convert minus to plus and do nothing if the value
    // already is plus

    p = abs(p);

    printf("%d\n", p);


    v = log(v);

    printf("%.2lf", v);

    // you have sin, cos, tan but like, Im too lazy to write em

    return 0;
}