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
    printf("%10.2f\n%10.2f\n%10.2f", a, b, result);
}