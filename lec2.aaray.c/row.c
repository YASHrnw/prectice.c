#include <stdio.h>

int main()
{
    int a[20][20], i, j, n, m, sum = 0;

    printf("enter row&collum:");
    scanf("%d %d", &n, &m);

    printf("enter your element\n");

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\n enter matrices");

    for (i = 0; i < m; i++)
    {
        sum = 0;
        for (j = 0; j < n; j++)
        {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < m; i++)
    {
        sum = 0;

        for (j = 0; j < n; j++)
        {
            sum += a[i][j];
        }
        printf("sum is %d\n", sum);
    }

    return 0;
}