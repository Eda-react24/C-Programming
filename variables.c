#include<stdio.h>
/*
This is our first C program
which is awesome!
*/
int main()
{
    int a = 4;
    int d;
    printf("Enter your age");
    scanf("%d",&d);
    printf("Your age is %d,d");
    //int b = 8.5; Not recommended because 8.5 is not an integer

    float b = 8.5;
    char c = 'u';
    printf("The value of a is %d \n", a);
    printf("The value of b is %f \n", b);
    printf("The value of c is %c \n", c);

    return 0;
}