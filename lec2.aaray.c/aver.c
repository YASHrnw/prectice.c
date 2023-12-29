#include <stdio.h>

int main()
{
    int a[20][20], i, j, m, n, sum = 0;
    float ave;

    printf("enter row&collum:");
    scanf("%d %d", &m, &n);

    printf("enter your element");

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\n you have element");

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            sum = sum + a[i][j];
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
    ave = (float)sum / (m+n);
    printf("\n the sum element %d", sum);
    printf("\n the element ave %.2f", ave);
    return 0;
}