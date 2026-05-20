#include "stdio.h"

int main() {

    int dayOfWekk = 3;

    switch (dayOfWekk) {

        // you can use {} or dont, C doesnt fucking care

        case 1:
            printf("Monday");
            break;
        case 2: {
            printf("Tusday");
            break;
        }
        case 3: {
            printf("Wendsday");
            break;
        }
        case 4: {
            printf("Czwartek");
            break;
        }
        case 5: {
            printf("Friday");
            break;
        }
        case 6: {
            printf("Sobota");
            break;
        }
        case 7: {
            printf("Niedzielona");
            break;
        }
        default: {
            printf("Monday");
            break;
        }
    }

    return 0;
}