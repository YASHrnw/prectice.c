#include <stdio.h>

int main()
{
    int a[20][20], i, j, m, n;

    printf("enter row&collum:");
    scanf("%d %d", &m, &n);

    printf("enter your element");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\n you have element");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}