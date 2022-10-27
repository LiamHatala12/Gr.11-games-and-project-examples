#include <stdio.h>

int main(void)
{
int x;
int y;
int z;

printf("enter a X Y and Z value: ");
scanf("%d %d %d", &x, &y, &z);

int SurfaceArea = (x*y)*6;

int Volume = x*y*z;

printf("the volume of the square is: %d \n", Volume);
printf("the surface area of the square is: %d", SurfaceArea);

return 0;

}