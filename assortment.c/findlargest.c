#include <stdio.h>

int main()
{
    int a[40], i, n, larg;

    printf("\n enter aaray :");
    scanf("%d", &n);

    printf("enter your element:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    larg = a[0];
    for (i = 0; i < n; i++)
    {
        if (larg < a[i])
        {
            larg = a[i];
        }
    }
    printf("largest number %d", larg);

    return 0;
}