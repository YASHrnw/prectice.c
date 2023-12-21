
#include <stdio.h>

int main()
{
    int  i=1,n;
    printf("enter number n:");
    scanf("%d",&n);

 

    do
    {
        printf("\n%d*%d=%d",n,i,n*i );
        i++;

    } while (i<=10);

    return 0;
}