#include <stdio.h>

int main()
{

  int i = 1, n, count;
  printf("Enter number :");
  scanf("%d", &n);

  while (i <= n)
  {
    if (n % i == 0)
    {
      count++;
    }
    if (count <= 2)
    {
      printf("\n It is prime number");
    }
    else
    {
      printf("\n It is  not prime number");
    }

    return 0;
  }
}