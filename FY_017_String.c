#include <stdio.h>
void main()
{
    char str[100];

    printf("\nEnter the string:\t");
    // scanf("%[^\n]", str);
    gets(str);
    // fgets(str, 10, stdin);

    printf("\nOutput:\t\t\t%s\n\n", str);
    // fprintf(stdout, "\nOutput:\t\t\t%s\n\n", str);
    // puts(str);
    // fputs(str, stdout);
}