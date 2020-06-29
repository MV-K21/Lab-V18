
#include <stdio.h>

int main()
{
    int x,y,f;
    printf("x=");
    scanf("%d",&x);
    printf("y=");
    scanf("%d",&y);
    f = (x+y)/(x*x+x*y+y*y)+(x)/(1+y*y)+(y)/(1+x*x);
    printf("f=%d",f);
   
    return 0;
}

