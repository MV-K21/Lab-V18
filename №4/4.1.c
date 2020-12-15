#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,er;
    float c;
    do
    {
    er=0;
    printf("введіть ціле число a:");
    scanf("%d",&a);
    printf("введіть ціле число b:");
    scanf("%d",&b);
    if(a-2*b<=0)
    {
        printf("помилка, корінь з нуля\n");
        er=1;
    }
    else if(sqrt(a-2*b)+2*b==0)
    {
        printf("помилка, ви ділите на ноль\n");
        er=1;
    }
    }while(er==1);
    c=((2*a-b)*(2*b+a))/(sqrt(a-2*b)+2*b);
    printf("відповідь:%g",c);
    return 0;
}
