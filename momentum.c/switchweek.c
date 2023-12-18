#include <stdio.h>

int main()
{
    char y;
    printf(" enter charater");
    scanf("%c", &y);

    switch (y)
    {
    case 'm':
        printf("\n monday");
        break;
    case 't':
        printf("\n tuesday ");
        break;
    case 'T':
        printf("\n  Thusday");
        break;
    case 'w':
        printf("\n wednesday");
        break;
    case 'f':
        printf("\n friday");
        break;
    case 's':
        printf("\n saturday");
        break;
    case 'S':
        printf("\n sunday");
        break;

    default:
        printf("invelid chareter");
    }

    return 0;
}