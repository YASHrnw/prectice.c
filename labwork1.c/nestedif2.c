#include <stdio.h>

int main()
{

    int a, b;
    printf("enter value a&b:");
    scanf("%d %d", &a ,&b);

    if (a < b)
    {
        printf("a is min");
    }

    else
    {
        printf("b is min");
    }

    return 0;
}