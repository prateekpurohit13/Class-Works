#include<stdio.h>
#include<stdlib.h>

int main(){
    // char characters;

    // do{
    //     scanf(" %c", &characters);
    //     printf("The echoed characters are: %c\n", characters);

    // }while(!characters);

    //interest question
    int t;
    double p, r, si, amt;

    p = 10000;
    r = 0.01;
    t = 1;
    amt = 2*p;

    while (p <=amt){
        si = (p*r*t);
        p = p+si;
        t++;
    }
    printf("Total month required for double valuation is : %d\n", t);

    return 0;
}
