#include <stdio.h>

int main()
{
float x,y,r,h;
printf("Координати точки: ");
    scanf("%f%f", &x,&y);
    printf("Радіус круга: ");
    scanf("%f", &r);
    h = (x*x + y*y);
    printf("Гіпотенуза рівна %.2f. ", h);
    if (h > r) printf("Точка не належить кругу.\n");
    else printf("Точка належить кругу.\n");
}
