#include<stdio.h>
int main()
{
  float a,b;
  printf("ENTER THE LENGTH OF RECTANGLE: ");
  scanf("%f",&a);
  printf("ENTER THE WIDTH OF RECTANGLE: ");
  scanf("%f",&b);

  printf("THE PERIMETER OF RECTANGULE WHOSE LENGTH IS %f AND WIDTH IS %f IS: %f ",a,b,2*(a+b));

  return 0;
}