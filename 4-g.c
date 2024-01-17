#include <stdio.h>

int main() {
    int i, k;


    for (i = 1; i <= 5; i++) {

        for (k = 1; k <= i; k++) {
            printf("*");
        }
        printf("\n");
    }
    printf("----------------------------------xxxxxxxxxxxxxxxxxxxxxxxxxxx-------------------------------------\n");
        for (i = 5; i >0; i--) {

        for (k = i; k > 0; k--) {
            printf("*");
        }
        printf("\n");    for (i = 1; i <= 5; i++) {

        for (k = 1; k <= i; k++) {
            printf("*");
        }
        printf("\n");
    }
    }

    return 0;
}
