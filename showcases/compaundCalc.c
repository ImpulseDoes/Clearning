#include "stdio.h"
#include "math.h"

int main() {

    int p = 0;
    double r = 0;
    int t = 0;
    int n  = 0;
    double fi = 0.0;

    printf("Compound Intrerest Calculator\n\n");

    printf("Enter principal [p]: ");
    scanf("%d", &p);

    printf("Enter interest rate [r]: ");
    scanf("%lf", &r);
    r /= 100;

    printf("Enter x of years [t]: ");
    scanf("%d", &t);

    printf("Enter x times compounded per t [n]: ");
    scanf("%d", &n);


    fi = p * pow((1 + r / n), n * t);

    printf("After %d years, the total will be %.2lf$", t, fi);

    return 0;
}