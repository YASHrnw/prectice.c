#include<stdio.h>
#include<conio.h>
#define PI 3.14
#define B 0.5

main()
  {
      float r=2.3;
      float y=12;
      float p=34;

      clrscr();
      printf("Area of circle is %.1f",PI*r*r );
      printf("\nArea of sqare %.2f",r*r );
      printf("\nArea of rectangle %.0f",y*p );
      printf("\nArea of tringle %.0f",B*y*p );
      printf("\nSimpel of interest %.3f",r*y*p/100);
      printf("\nPerimeter of circlr %.2f",PI/B*y );
      getch();

  }