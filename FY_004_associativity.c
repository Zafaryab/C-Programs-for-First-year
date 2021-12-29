#include<stdio.h>

int main()
{
    float x, y;
    x = (float) 5 / 2 * 2;  //left to right associative
    y = 5 * 2 / 2;  //left to right associative
  
    printf("\n\nValue of x = %.2f", x);
    printf("\nValue of y = %.2f", y);

    int a = x = y;  //right to left associative
    printf("\n\nValue of x' = %.2f", x);
    printf("\nValue of y' = %.2f", y);
    printf("\nValue of a = %d", a);
}    