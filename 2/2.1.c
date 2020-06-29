#include <stdio.h>

int main()
{
   int x,y,res1,res2,res3;
   printf("x=");
   scanf("%d",&x);
   printf("y=");
   scanf("%d",&y);
   res1 = x % y;
   res2 = y - x;
   res3 = x + y * 2;
   printf("Залишок від діленя %d\n",res1);
   printf("Різниця %d\n",res2);
   printf("Сума чисел у квадраті %d\n",res3);
    return 0;
}
