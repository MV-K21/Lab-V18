#include <stdio.h>
#include <math.h>
    int main()
{
    float a,b,c,y;
    printf("a=");
    scanf("%g",&a);
    printf("b=");
    scanf("%g",&b);
    printf("c=");
    scanf("%g",&c);
    y = (3*a-4*b+5*c)/(a*b+2*b*c+3*a*c)-(a*b-c)/(4);
    printf("y=%g", y); 
    return 0;

}
