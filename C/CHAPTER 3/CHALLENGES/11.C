#include <stdio.h>
int main()
{         /*for integers*/
  int a,b;
  printf("ENTER FIRST NUMBER: ");
  scanf("%d",&a);

  printf("ENTER SECOND NUMBER: ");
  scanf("%d",&b);

  printf("THE SUM OF %d and %d is: %d\n",a,b,a+b);
  printf("THE DIFFERENCE BETWEEN %d AND %d is: %d\n",a,b,a-b);
  printf("THE PRODUCT OF %d AND %d is: %d\n",a,b,a*b);
  printf("THE DISISION OF %d BY %d is: %d\n",a,b,a/b);
  printf("THE REMAINDER OF %d WHEN IT DIVIDE BY %d is: %d\n",a,b,a%b);

  return 0;

}

// {   /* FOR FLOAT VALUE */
//   float a,b;
//   printf("ENTER FIRST NUMBER: ");
//   scanf("%f",&a);

//   printf("ENTER SECOND NUMBER: ");
//   scanf("%f",&b);

//   printf("THE SUM OF %f and %f is: %f\n",a,b,a+b);
//   printf("THE DIFFERENCE BETWEEN %f AND %f is: %f\n",a,b,a-b);
//   printf("THE PRODUCT OF %f AND %f is: %f\n",a,b,a*b);
//   printf("THE DISISION OF %f BY %f is: %f\n",a,b,a/b);

//   return 0;

// }