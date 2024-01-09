#include <stdio.h>
int cube(int);

void main()
{
  int n;
  printf("\n Enter you no :");
  scanf("%d", &n);

  printf("\n cude is: %d", cube(n));
}

int cube(int k)
{
  return k * k * k * k;
}