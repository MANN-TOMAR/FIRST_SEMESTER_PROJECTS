#include<stdio.h>
int main()
{
  float P,R,T;
  printf("ENTER THE PRINCIPAL AMOUNT: ");
  scanf("%f",&P);
  printf("ENTER THE RATE OF INTEREST: ");
  scanf("%f",&R);
  printf("ENTER THE NUMBER OF YEAR OR TIME: ");
  scanf("%f",&T);

  printf("THE COMPOUND INTEREST OF WHOSE PRINCIPAL AMOUNT IS %f AND RATE OF INTEREST IS %f AND TIME IS %f IS: %f",P,R,T,P*(1+(R/100))*T);

  return 0;
}