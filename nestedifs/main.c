#include "stdio.h"
#include "stdbool.h"

// nested ifs

int main() {

    bool isStudent = true;
    bool isQualify = true;

    if (isStudent) {
        if (isQualify) {
            printf("go for it");
        } else {
            printf("too broke");
        }
    } else {
        printf("you're NOT a student");
    }

    return 0;
}