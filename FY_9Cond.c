#include <stdio.h>
int main()
{
    int a = 50, b = 10, max, min;

    max = (a > b) ? a : b;
    min = (a > b) ? b : a;
    printf("Value: %d\t %d", max, min);
}