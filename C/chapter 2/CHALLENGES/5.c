#include <stdio.h>
int main()
{

  printf("SIZE OF int: %lu bytes\n",sizeof(int));
  printf("SIZE OF char: %lu bytes\n",sizeof(char));
  printf("SIZE OF float: %lu bytes\n",sizeof(float));
  printf("SIZE OF double: %lu bytes\n",sizeof(double));
  printf("SIZE OF long long: %lu bytes\n",sizeof(long long));
  printf("SIZE OF short: %lu bytes\n",sizeof(short));
  printf("size of size_t : %lu bytes",sizeof(size_t));


  return 0;

}