#include <stdio.h>

int main()
{
    int a, b;
    printf("entar value a&b:");
    scanf("%d %d", &a, &b);

    (a > b) ? printf("a is max") : printf("b is max");

    return 0;
}