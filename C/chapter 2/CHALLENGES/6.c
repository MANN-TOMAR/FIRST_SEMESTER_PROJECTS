#include <stdio.h>
int main()
{
  int AGE;
  char FIRST_NAME[100],LAST_NAME[100];

  printf("ENTER YOUR FIRST NAME: \n");
  scanf("%s",&FIRST_NAME);
  printf("ENTER YOUR LAST NAME; \n");
  scanf("%s",&LAST_NAME);

  printf("ENTER YOUR AGE: \n");
  scanf("%d",&AGE);

  printf("WELCOME %s %s \n YOUR AGE IS %d",FIRST_NAME,LAST_NAME,AGE);

  return 0;
}