#include <stdio.h>

int main()
{

     int salary;
    float hra, da, ta, grossalary;

    printf("enter salary:");
    scanf("%d", &salary);

    hra = salary * 10 / 100;
    da = salary * 5 / 100;
    ta = salary * 8 / 100;

    grossalary = salary + hra + ta + da;
    printf("\nenter your salary %d", salary);
    printf("\n hra value %.2f", hra);
    printf("\n da value %.2f", da);
    printf("\n ta value %.2f", ta);

    printf("\ngrossl %.2f", grossalary);

    return 0;
}


