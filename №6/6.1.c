#include <stdio.h>
#include <stdlib.h> 
#include <math.h>

float roz(int x, int y);
int main(void) {
float sum=0;
sum=roz(2,3)+roz(5,7)+roz(6,9)+roz(4,8);
printf("відповідь:%g",sum);
return 0;
}
float roz(int x, int y) //завдання 1
{
float m;
m=sqrt(x+x+pow(x, 2))/sqrt(y+y+pow(y, 2));
return m;
}
