#include <stdio.h>

int main()
{
    int a, b, c,d;
    printf("entar value a,b,c,d:");
    scanf("%d %d %d %d", &a, &b, &c,&d);

 if (a>b)
 {
   if (a>c)
   {
    if (a>d)
    {
        printf("\n a is maximum");
    }else
    {
         printf("\n d is maximum");
    }
    
    
   }else
   {
    if (c>d)
    {
        printf("\n c is maximum");
    }else
    {
        printf("\n d is maximum");
    }
    
    
   }
   
   
 }else
 {
   if (b>c)
   {
    if (b>d)
    {
         printf("\n b is maximum");
    }else
    {
        printf("\n d is maximum");
    }
    
    
   }else
   {
    if (c>d)
    {
         printf("\n c is maximum");
    }else
    {
         printf("\n d is maximum");
    }
    
    
   }
   
   
 }
 
 
 

    return 0;
}