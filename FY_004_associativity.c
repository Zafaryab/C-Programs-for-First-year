#include<stdio.h>

int main()
{
    float x, y;
    x = 5 / 2 * 2;
    y = 5 * 2 / 2;
  
    printf("\n\nValue of x = %.2f", x);
    printf("\nValue of y = %.2f", y);
    int a = x = y;
    printf("\n\nValue of x' = %.2f", x);
    printf("\nValue of y' = %.2f", y);
    printf("\nValue of a = %d", a);
}    