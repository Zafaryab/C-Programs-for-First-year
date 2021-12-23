#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter the value of a:\t");
    scanf("%d", &a);
    printf("Enter the value of b: \t");
    scanf("%d", &b);

    printf("\n\nVarious Operators:\n");
    
    printf("%03d + %03d = %5d\n", a, b, a+b);
    printf("%03d - %03d = %5d\n", a, b, a-b);
    printf("%03d * %03d = %5d\n", a, b, a*b);
    printf("%03d / %03d = %5d\n", a, b, a/b);
    printf("%03d | %03d = %5d\n", a, b, a|b);
    printf("%03d & %03d = %5d\n", a, b, a&b);
    printf("%03d ^ %03d = %5d\n", a, b, a^b);
    printf("    ~ %03d = %5d\n", a, ~a);
    printf("%03d >> 2  = %5d\n", a, a>>2);
    printf("%03d << 2  = %5d\n", a, a<<2);
}