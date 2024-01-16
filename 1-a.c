//local and global variable
#include<stdio.h>
#include "extern.h"

float pi = 3.14; // global variable
int circle(){
    double area;
    int r = 6;  //local variable
    area = pi*r*r;
   
    return area; 
}
int stat(){
    static int sum = 5;
    sum++;
    return sum;
}
int main(){
    int a =5;  //local variable
    printf("%d\n",a);
    printf("Area of circle is %d\n", circle());
    printf("Required sum is: %d\n", stat());
    printf("Required sum 2 is: %d\n", stat());
    printf("Required sum 3 is: %d\n", stat());

    int add;
    printf("x:%d\n",x);
    printf("y:%d\n",y);
    add = x+y;
    printf("Hey your value is %d\n", add);

    return 0;
}