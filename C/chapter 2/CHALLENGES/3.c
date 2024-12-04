#include <stdio.h>
int main()
{
  char NAME[100];
  printf("Enter Your Name: \n");
  scanf("%[^\n]S",&NAME);

  printf("\"Welcome %s to Kg Coding\"",NAME);

  return 0;
}