#include <stdio.h>

int main()
{

    int y, hra, da, ta;

    printf("enter your slary");
    scanf("%d", &y);

    printf("\nhra %d", hra = y * 10 / 100);
    printf("\nda %d", da = y * 5 / 100);
    printf("\nta %d", ta = y * 8 / 100);

    printf("total sl %d", y+ hra + da + ta);

   

    return 0;
}


