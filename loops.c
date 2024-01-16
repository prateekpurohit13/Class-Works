//#include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// int main(){
//     int sum = 0;
//     int i;
//     for(i=1; i<11; i++){
//         //sum += i;
    
//     printf("%d\n", i);
//     }
//     return 0;
// }
#include <stdio.h>

int main() {
    int i, j, k;

    // Print a right-angled triangle with a star pattern
    for (i = 1; i <= 5; i++) {
        // Print spaces for right alignment
        for (j = 1; j <= 2*(5 - i); j++) {
            printf(" ");
        }

        // Print stars
        for (k = 1; k <= i; k++) {
            printf("*"" ");
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
