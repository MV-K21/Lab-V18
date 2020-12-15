#include <stdio.h>
#include <math.h>

int main()
{
    int n,i,j,s,p=0;
    float x;
    printf("Задайте натуральне число n=");
    scanf("%d",&n);
    printf("Задайте дійсне число x=");
    scanf("%g",&x);
    for (i = 0; i <= n; i++)
    { 
        for (s = 0, j = 0; j <= i; j++)
        {
        s += j/x;
        p += s;
        }
    }
    printf("Відповідь:%d\n", p);
    return 0;
}