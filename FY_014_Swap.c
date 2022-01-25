#include <stdio.h>
void main()
{
    int a, b;
    printf("Enter the value for a: "); // 5
    scanf("%d", &a);
    printf("Enter the value for b: "); // 10
    scanf("%d", &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("a=%d\tb=%d", a, b);
}