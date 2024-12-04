#include <stdio.h>
int main()
{
  float a,b;
  printf("ENTER THE HEIGHT OF TRIANGLE: ");
  scanf("%f",&a);
  printf("ENTER THE LENGTH OF BASE OF TRIANGLE: ");
  scanf("%f",&b);

  printf("THE AREA OF TRIANGLE WHOSE HEIGHT IS %f AND LENGTH OF BASE IS %f IS: %f",a,b,(a*b)/2);

  return 0;
}