#include <stdio.h>

int main()
{
    int a[30], i, n;
    printf("enter aaray :");
    scanf("%d", &n);

    printf("\n enterd element");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\n print negative element");
    for (i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            printf("%d", a[i]);
        }
    }

    return 0;
}