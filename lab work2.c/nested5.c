#include <stdio.h>

int main()
{
    int a, b, c, d, e;
    printf("entar value a,b c d e:");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    if (a < b)
    {
        if (a < c)
        {
            if (a < d)
            {
                if (a < e)
                {
                    printf("\n a is min");
                }
                else
                {
                    printf("\n e is min");
                }
            }
            else
            {
                if (d< e)
                {
                    printf("\n d is min");
                }
                else
                {
                    printf("\n e is min");
                }
            }
        }
        else
        {
            if (c < d)
            {
                if (c < e)
                {
                    printf("\n c is min");
                }
                else
                {
                    printf("\n e is min");
                }
            }
            else
            {
                if (d < e)
                {
                    printf("\n d is min");
                }
                else
                {
                    printf("\n e is min");
                }
            }
        }
    }
    else
    {
        if (b < c)
        {
            if (b < d)
            {
                if (b < e)
                {
                    printf("\n b is min");
                }
                else
                {
                    printf("\n e is min");
                }
            }
            else
            {
                if (d < e)
                {
                    printf("\n d is min");
                }
                else
                {
                    printf("\n e is min");
                }
            }
        }
        else
        {
            if (c < d)
            {
                if (c < e)
                {
                    printf("\n c is min");
                }
                else
                {
                    printf("\n e is min");
                }
            }
            else
            {
                if (d < e)
                {
                    printf("\n d is min");
                }
                else
                {
                    printf("\n e is min");
                }
            }
        }
    }

    return 0;
}