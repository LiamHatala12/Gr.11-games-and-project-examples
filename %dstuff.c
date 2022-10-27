#include <stdio.h>

int main() {

  float Fdegree, Cdegree;
  
  printf("Enter Fahrenhit degree\n");
  scanf("%f", &Fdegree);
  Cdegree = (Fdegree - 32) * (5.0/9.0);
  printf("\n %f Fahrenhit is %f Celcius", Fdegree, Cdegree);
  return 0;
}