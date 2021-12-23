/*Program to add two numbers*/
#include<stdio.h>
void main()
{
    //Declaration of variables
    float a, b, result;
    printf("Enter the value of a: ");
    scanf("%f", &a);
    printf("Enter the value of b: ");
    scanf("%f", &b);

    //Logic
    result = a + b;

    //Output printing
    printf("Addition Operation:\n");
    printf("%7.27f\n%7.27f\n%7.27f", a, b, result);
}