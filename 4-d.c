#include<stdio.h>

int main(){
    // int weight;

    // printf("Enter your weight: ");
    // scanf("%d", &weight);

    // while(weight > 65){
    //     printf("Go eat and then come back.\n");
    //     printf("Enter your weight: ");
    //     scanf("%d", &weight);
    // }
    // int n, count, sum;
    // printf("n: ");
    // scanf("%d", &n);
    // sum = 0;
    // count = 1;
    // while(count <= n){
    //     sum = sum+count;
    //     count = count+1;
    // }
    // printf("Sum is %d\n", sum);

    int i, sum, number, a, b, c, d, e;
    printf("Enter the nth number: ");
    scanf("%d",  &number);
    for (i = 0; i<=number; i++){
        sum = sum+(i*i);
    }
    printf("Sum is %d\n", sum);

    printf("------------------xxxxx-----------------------\n");
// to find gcd
    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    //c=a%b;
    while(c!=0){
        c = a%b;
        a = b;
        b = c;
        //c = a%b;

    }
    printf("%d\n", a);       //if commented method is used then use b here instead of a

    return 0;
}