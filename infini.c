#include <stdio.h>


int addition();// function declarations
int minus();
int multiply();
int divide();

int main()
{



    int u1;

    do
    {

        printf("\n 1 Addition  2 minus  3 Multiplication  4 Division  Please chose ");

        scanf("%d", &u1);

        switch (u1)
        {
        case 1:
            addition();
            break;

        case 2:
            minus();
            break;

        case 3:
            multiply();
            break;

        case 4:
            divide();
            break;

        default:
            printf(" Something is wrong!! ");
            break;
        }

    } while (u1 <=5);


    

    return 0;
}

// function definition
int addition()
{

    int a, b;
    printf("enter value a&b:");
    scanf("\n %d %d", &a, &b);
    printf("two addition a+b %d", a + b);
}

int minus()
{
    int a, b;
    printf("enter value a&b: ");
    scanf("%d  %d", &a, &b);
    printf("minus %d", a - b);
}

int multiply()
{
    int a, b;
    printf(" enter valu a&b: ");
    scanf(" %d %d", &a, &b);
    printf(" The multiply of %d",a * b);
}

int divide()
{
    int a, b;
    printf(" enterd value a&b: ");
    scanf("%d %d", &a, &b);
    printf("the value divide %d", a / b);
}
