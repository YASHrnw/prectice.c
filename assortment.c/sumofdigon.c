#include <stdio.h>

int main()
{
    int a[20][20], m, n, i, j, sum = 0;
    printf("enter row&colum");
    scanf("%d %d", &m, &n);

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    printf("enterd metrix element\n");

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }

    printf(" after  revrse element\n");

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j)
            {
                sum = sum + a[i][j];
            }

            printf("%d", a[i][j]);
        }
        printf("\n");
    }
    printf("\n %d ", sum);

    return 0;
}
