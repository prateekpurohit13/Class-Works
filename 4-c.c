//hcf using ternery operators
// result = (condition) ? true:false
#include<stdio.h>

int main(){
    int a, b, c, weight;
    printf("Enter a, b, c: ");
    scanf("%d%d%d", &a,&b,&c);

    int max_val = (a>b) ? ((a>c) ? a:c) : ((b>c) ? b:c);

    printf("GCD is %d\n", max_val);

    printf("Enter your weight: ");
    scanf("%d", &weight);

    while(weight > 65){
        printf("Go eat and then come back.\n");
        
    }

    return 0;
}