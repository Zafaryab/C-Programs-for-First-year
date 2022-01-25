#include <stdio.h>
#include <myHeader.h>
void main()
{
    float a, b;
    printf("Enter the value for a: ");
    scanf("%f", &a);
    printf("Enter the value for b: ");
    scanf("%f", &b);
    printf("Addition: \t\t%7.2f\n", sum(a, b));
    printf("Difference: \t\t%7.2f\n", diff(a, b));
    printf("Multiplication: \t%7.2f\n", mul(a, b));
    printf("Division: \t\t%7.2f\n", div(a, b));
}