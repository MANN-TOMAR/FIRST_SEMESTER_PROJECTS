#include <stdio.h>
int main()
{
  float P,T,R;
  printf("ENTER THE PRINCIPAL AMOUNT: ");
  scanf("%f",&P);
  printf("ENTER THE RATE OF INTEREST: ");
  scanf("%f",&R);
  printf("ENTER THE NUMBER OF YEAR OR TIME OF INTEREST: ");
  scanf("%f",&T);

  printf("THE SIMPLE INTREST OF WHOSE PRINCIPAL VALUE IS %f AND RATE OF INTEREST IS %f AND TIME IS %f IS: %f",P,R,T,(P*R*T)/100);

  return 0;
}