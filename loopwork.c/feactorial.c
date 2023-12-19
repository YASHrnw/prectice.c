#include <stdio.h>

int main()
{

    int i = 1, y = 1, n;
    printf("enter num");
    scanf("%d", &n);

    while (i<=n)
    {
       y*=i;
       i++;
    }
     printf("\n feactorial is %d",y);
    

    return 0;
}