#include <stdio.h>
#include "randutils.h"

int main() {
    RandFloat rand;
    for (int i = 0; i < 100; i++) {
        if (rand.nextFloat() < 0.5) {
            printf("H");
        }
        else {
            printf("T");
        }
    }
    printf("\n");
    return 0;
}