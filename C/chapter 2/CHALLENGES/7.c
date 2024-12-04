#include <stdio.h>
int main()
{
  int lenght_of_side_of_square;
  printf("ENTER THE LENGTH OF SQUARE: ");
  scanf("%d",&lenght_of_side_of_square);

  printf("AREA OF SQUARE WHOSE SIDE LENGTH IS %d IS %d",lenght_of_side_of_square,lenght_of_side_of_square*lenght_of_side_of_square);

  return 0;
}