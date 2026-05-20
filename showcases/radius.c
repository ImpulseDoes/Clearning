#include <stdio.h>
#include <math.h>


int main() {

    double rad = 0.0;
    double area = 0.0;
    double surfaceArea = 0.0;
    double volume = 0.0;

    // idk I can also use just M_PI instead of PI
    // but my guy has a
    // const double PI = 3.14...
    // so I checked, and theres somelike like
    // math.PI and its M_PI so Im just assing it to PI
    // and yeah, I guess const works like in other langs
    double PI = M_PI;

    printf("Enter the radius: ");
    scanf("%lf", &rad);

    area = PI * pow(rad, 2);
    surfaceArea = 4 * PI * pow(rad, 2);
    volume = (4.0 / 3) * PI * pow(rad, 3);

    printf("Area: %.2lf\n", area);
    printf("Surface: %.2lf\n", surfaceArea);
    printf("Volume: %.2lf", volume);

    return 0;
}