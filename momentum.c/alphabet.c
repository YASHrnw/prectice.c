#include <stdio.h>

int man()
{

    char yt;
    printf("enter value yt");
    scanf("%c", &yt);

    if ((yt >= 'a' && yt <= 'z') || (yt >= 'A' && yt <= 'Z'))
    {
        printf("\n  is alphabet");
    }
    else if (yt >= '0' && yt <= '9')
    {
        printf("\n is digit");
    }
    else
    {
        printf("\n is xyz");
    }

    return 0;
}