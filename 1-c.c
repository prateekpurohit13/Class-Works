#include<stdio.h>
#include<stdlib.h>

int main(){
    char character,anothercharacter;
    signed short int a;
    short int b;
    signed int c;
    int d;
    signed long int e;
    long int f;
    signed long long int g;
    long long int h;
    float i;
    double j;
    long double k;

    printf("Enter a character: ");
    scanf(" %c",&character);

    //while (getchar() != '\n');

    printf("Enter another character: ");
    scanf(" %c",&anothercharacter);

    //while (getchar() != '\n');

    printf("Enter a signed short int: ");
    scanf(" %hd",&a);
    printf("Enter a unsigned short int: ");
    scanf(" %hu",&b);

    printf("Enter a signed int: ");
    scanf(" %d",&c);
    printf("Enter a unsigned int: ");
    scanf(" %u",&d);

    printf("Enter a signed long int: ");
    scanf(" %ld",&e);
    printf("Enter a unsigned long int: ");
    scanf(" %lu",&f);

    printf("Enter a signed long long int: ");
    scanf(" %lld",&g);
    printf("Enter a unsigned long long int: ");
    scanf(" %llu",&h);

    printf("Enter a float value: ");
    scanf(" %f",&i);

    printf("Enter a double value: ");
    scanf(" %lf",&j);

    printf("Enter a long double value: ");
    scanf(" %Lf",&k);

    printf("-----------xxxxxxxxxxxxxxxxxxxxxxxxxx-------------\n");
    printf("You entered character:%c\n",character );
    printf("You entered another character:%c\n",anothercharacter );
    printf("--------------------------------\n");
    printf("You entered signed short int:%hd\n",a );
    printf("You entered unsigned short int:%hu\n",b );
    printf("--------------------------------\n");
    printf("You entered signed int:%d\n",c );
    printf("You entered unsigned int:%u\n",d );
    printf("--------------------------------\n");
    printf("You entered signed long int:%ld\n",e );
    printf("You entered unsigned long int:%lu\n",f );
    printf("--------------------------------\n");
    printf("You entered signed long long int:%lld\n",g );
    printf("You entered unsigned long long int:%llu\n",h );
    printf("--------------------------------\n");    
    printf("You entered float value:%f\n",i );
    printf("You entered double value:%lf\n",j );
    printf("You entered long double value:%Lf\n",k );

    return 0;
}