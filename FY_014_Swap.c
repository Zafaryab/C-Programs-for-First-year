#include<stdio.h>
void main()
{
    int a, b;
    printf("Enter the value for a: ");//5
    scanf("%d", &a);
    printf("Enter the value for b: ");//10
    scanf("%d", &b);

    a = a + b;//a=15
    b = a - b;//b=15-10=5
    a = a - b;//a=15-5=10

    printf("a=%d\tb=%d", a, b);//a=10    b=5
}