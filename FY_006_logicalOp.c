#include<stdio.h>

int main()
{
    int a = 5, b = 10;
    float x = 5.5, y = 6.5;

    printf("\n\nLogical operators (a=%d,b=%d,x=%f,y=%f): \n", a, b, x, y);
    printf("(a >= b) || (x < y)\t: %d\n", ((a >= b) || (x < y)));
    printf("(a >= b) && (x < y)\t: %d\n", ((a >= b) && (x < y)));
    printf("(a == b)\t\t: %d\n", (a==b));
    printf("!(a == b)\t\t: %d\n", !(a==b));
    
}    