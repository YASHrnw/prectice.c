#include <stdio.h>
int main()
{
    int j ;
    printf("\n enter value");
    scanf("%d", &j);

    while (j >= 1)
    {
        printf("\n %d", j);
        j--;
    }

    return 0;
}