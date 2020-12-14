#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,pom1,pom2;
    float x;
    printf("введіть число a:");
    scanf("%d",&a);
    printf("введіть число b:");
    scanf("%d",&b);
    pom1=a-pow(b,2);
    pom2=a*b;
    if(pom1<=0 || pom2<=0)
    {
    printf("помилка");
    }
    else
    {
    x=sqrt(pom1)+sqrt(pom2);
    printf("відповідь:%g",x);
    }
    return 0;
}
