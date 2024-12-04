#include <stdio.h>
int main()
{
  float F;
  printf("ENTER THE TEMPERATURE IN FAHRENHEIT: ");
  scanf("%f",&F);

  printf("THE TEMPERATURE IN CELSIUS WHERE TEMPERATURE IN FAHRENHEIT IS %f IS: %f",F,(F-32)*5/9);
}