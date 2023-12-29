#include <stdio.h>
int main()
{
    // 7.WAP to perform diagonal sum of 2D array.
    int a[20][20], m, n, i, j, sum = 0;
    printf("\n Enter you row & column:");
    scanf("%d %d", &m, &n);

    printf("Enter metnrix \n");

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter metnrix...\n");
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

    printf("diagonal is :%d\n", sum);

    return 0;
}