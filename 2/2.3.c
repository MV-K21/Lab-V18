#include <stdio.h>
#include <math.h>
    int main()
{
    float x,y,f;
    printf("x=");
    scanf("%g",&x);
    printf("y=");
    scanf("%g",&y);
    f = (x+y)/(x*x+x*y+y*y)+(x)/(1+y*y)+(y)/(1+x*x);
    printf("f=%g",f);
   
    return 0;
}
