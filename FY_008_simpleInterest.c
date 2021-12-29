#include <stdio.h>
/*Calculation of simple interest */
int main()
{
    int p, n;
    float r, si;
    //ask values from the user and complete the program with proper result formatting
    // p = 1000;
    // n = 3;
    // r = 8.5;
    /* formula for simple interest */
    si = (p * n * r) / 100;
    printf("%f", si);
}
