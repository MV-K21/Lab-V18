#include <stdio.h>
#include <math.h>

int main()
{
    int a = 0, i = -20, b = 0, j, c = 0, k = -20;
    while (i < 10) 
    {
        i++;
        if (i>0)
        a += i;
    }
    for(j=-20; j <= 10; j++)
    {
        if (j>0)
        b += j;
    }
    do 
    {
        if (k>0) 
        c += k;
        k++;
    } while (k <= 10);
    a=pow(a,2);
    b=pow(b,2);
    c=pow(c,2);
    printf("while:%d\n", a);
    printf("for:%d\n", b);
    printf("do while:%d", c);
    return 0;
}

