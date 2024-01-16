//sum
#include<stdio.h>

int main(){
    int sum, i, number;
    sum = 0;
    for(i=1; i<=10; i++){
        printf("Enter number %d: \n", i);
        scanf("%d", &number);

        if(number<0){
            continue;
        }

        sum+=number;

    }

    printf("Sum is %d", sum);

    return 0;
}