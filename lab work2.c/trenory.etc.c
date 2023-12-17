#include <stdio.h>

int main()
{
  int a,b,c;
  printf("entar value a,b,c:");
  scanf("%d %d %d",&a,&b,&c);
 
 if (a>b && a>c)
 {
   printf("\n a is maximum");
 }else if (b>c)
 {
    printf("\n b is maximum");
 }else
 {
    printf("\n c is maximum");
 }
 
 
 

    return 0;
}