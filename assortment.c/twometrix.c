#include <stdio.h>

int main()
{
    int a[20][20], b[20][20], c[20][20], i, j, m, n;

    printf("enter row&colum:");
    scanf("%d %d", &m, &n);

    printf("\n enter your element ");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\1matrics one");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }

    printf("enter your element two:");

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("\nmatrics one 2\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d", b[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
        printf("\n");
    }

    printf("\nsum of two matrics:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}