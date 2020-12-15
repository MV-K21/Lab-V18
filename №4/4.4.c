#include <stdio.h>
#include <math.h>
#include <float.h>

int main()
{
    double y,x,a=0,b=3, dx=0.05;
  printf("\n********************\n");
  printf("X\t\tY\n");
  printf("********************\n");
    for (a; a<=b; a+=dx){
    x=a;
    y=pow(4,-cos(x));
    printf("%g\t%7.2lf\n", x, y);
}
    return 0;
}
