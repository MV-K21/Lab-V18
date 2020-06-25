#include <stdio.h>

int main()
{
int a,b,c;
printf("a=");
scanf("%d",&a);
printf("b=");
scanf("%d",&b);
printf("c=");
scanf("%d",&c);
if(a>b & a>c)
{
    printf("a найбильше число");
}
else if(b>a & b>c)
{
    printf("b найбильше число");
}
else if(c>b & c>a)
{
    printf("c найбильше число");
}
else
{
    printf("N");
}
if(a==b & b==c)
{
    printf(" рівносторонній");
}
else if((a==b & a!=c) || (a==c & a!=b) || (b==c & b!=a))
{
    printf(" рівнобедрений");
}
else if(a!=b && b!=c && c!=a)
{
    printf(" різносторонній");
}
else
{
    printf("N");
}
if(a+b>c & c+b>a & a+c>b)
{
    printf(" Трикутник побудувати можна");
}
else
{
    printf(" Трикутник побудувати не можна");
}
    return 0;
}