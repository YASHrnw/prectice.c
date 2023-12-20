#include <stdio.h>

int main()
{

    int n;

    printf("\n enter value");
    scanf("%d", &n);

    do
    {
        printf("%d", n);
        n--;
    } while (n >= 1);

    return 0;
}