#include <stdio.h>

int main()
{

    int unit;
    float bil, charge;

    printf("\n enter unit");
    scanf("\n %d", &unit);

    if (unit <= 50)

    {
        bil = unit * 0.50;
    }
    else if (unit >= 51 && unit <= 150)
    {
        bil = 25 + (unit - 50) * 0.75;
    }
    else if (unit >= 151 && unit <= 250)

    {
        bil = 25 + 75 + (unit - 150) * 1.20;
    }
    else
       
        {
            bil = 220 + (unit - 250) * 1.50;
        }

    printf("\n final bill=%.2f", bil);

    charge = bil * 20 / 100;
    printf("\n charge=%.2f", charge);

  bil+=charge;
  printf("\n final bill %.2f",bil);
    return 0;
}