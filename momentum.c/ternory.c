#include <stdio.h>

int main()
{
    int y;
    printf("check the number odd/even");
    scanf("%d", &y);

    (y%2==0) ? printf(" odd") : printf("even");

    return 0;
}