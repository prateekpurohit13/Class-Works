//reciprocal of a number skipping at 1 and breaking at 0
#include<stdio.h>

int main(){
    int number;
    float reciprocal;
    
    while(1){
        printf("Enter the number: ");
        scanf("%d", &number);
        reciprocal = 1.0/number;
            
        if(number == 0 ){
            printf("Operation cannot be executed.");
            break;
        }else if (number == 1){
            continue;
        }else if(number!=0 && number != 1){
            printf("Reciprocal is: 1/%d = %.2f\n", number, reciprocal);
            continue;
        }
    }

    return 0;
}