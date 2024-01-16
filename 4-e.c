#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    // int mo;
    // do{
    //     printf("Enter the month from 1-12: ");
    //     scanf("%d", &mo);
    // } while(mo<1 || mo>12);
    // printf("Task executed successfully");
    
    //conversion of decimal to binary

    int num, re, x = 1, res = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    //re = num%2;
    //res[x] += sprintf(res, "%d", re);
    while(num != 0){
        re = num%2;
        res += re*x;
        x = x*10;
        num = num/2;
    }

    printf("Binary number is %d\n", res);

    return 0;
}
