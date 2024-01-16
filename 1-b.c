#include<stdio.h>
#include<stdlib.h>

int main(){
    char name[100];
    int num;
    printf("Enter a name: ");
    scanf("%[^\n]", &name);// or use %s for string with no whitespaces
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Entered name is %s\n", name);
    printf("Entered number is %d\n", num);

    return 0;
}