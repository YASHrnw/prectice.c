#include <stdio.h>
int main()
{

    int i = 1, p = 1, n;
    printf("\n Enter no. :");
    scanf("%d", &n);

    while (i <= n)
    {
        p *= i;
        i++;
    }
    printf("\nfactorial is %d", p);
    return 0;
}