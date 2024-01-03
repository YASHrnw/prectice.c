#include <stdio.h>

int main()
{
    int s;
    printf("Enter charater :");
    scanf("%d", &s);

    switch (s)
    {
    case 1:
        printf("\njanuary");
        break;
    case 2:
        printf("\nfebruary");
        break;
    case 3:
        printf("\nmarch");
        break;
    case 4:
        printf("\napril");
        break;
    case 5:
        printf("\nmay");
        break;
    case 6:
        printf("\njune");
        break;
    case 7:
        printf("\njuly");
        break;
    case 8:
        printf("\naugust");
        break;
    case 9:
        printf("\nseptember");
        break;
    case 10:
        printf("\noctober");
        break;
    case 11:
        printf("\n november");
        break;

    case 12:
        printf("\n december");
        break;

    default:
        printf("you enter invelid charater");
    }

    return 0;
}