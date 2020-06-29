#include <stdio.h>
#include <math.h>
    int main()
{
    float x,y,z,a;
    printf("x=");
    scanf("%g",&x);
    printf("y=");
    scanf("%g",&y);
    printf("z=");
    scanf("%g",&z);
    a=sqrt (x*x*y-z)+log2((x+y+z));
    printf("a=%g", a); 
    return 0;

}

