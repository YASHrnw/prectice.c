#include <stdio.h>

int main()
{

    int number;
    printf("enter number:");
    scanf("%d", &number);

    if (number > 0)
    {
        printf("number is positive");
    }
    else if (number < 0)
    {
        printf("number is negetive");
    }
    else
    {
        printf("number is zero");
    }

    return 0;
}