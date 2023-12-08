#include <stdio.h>

int main()
{
    int t, y;
    printf("enter value t&y:");
    scanf("%d %d", &t, &y);
    // t=10
    // y=20
    t = t + y; // t=30 (10+20)
    y = t - y; // y=10 (30-20)
    t = t - y; // t=20  (30-10)

    printf("\nprint value t %d", t);
    printf("\nprint value y %d", y);

    return 0;
}