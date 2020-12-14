#include <stdio.h>
#include <math.h>

int main(void) {
  int a,s;
  float f;
  printf("ведіть s=");
  scanf("%d",&s);
  printf("ведіть a=");
  scanf("%d",&a);
  if(s<0)
  {
    f=2*s+a*pow(s,2);
  }
  if(s==0)
  {
    f=sqrt(s+15)+8*s*a;
  }
  if(s>0)
  {
    f=12-s/(2*a-4);
  }
  printf("%g",f);
  return 0;
}