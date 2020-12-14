#include <stdio.h>
#include <math.h>

int main(void) {
  int a,s;
  float f;
  printf("введіть s=");
  scanf("%d",&s);
  printf("введіть a=");
  scanf("%d",&a);
  if(s<0)
  {
    f=2*s+a*pow(s,2);
  }
  else if(s==0)
  {
    f=sqrt(s+15)+8*s*a;
  }
  else
  {
    f=12-s/(2*a-4);
  }
  printf("%g",f);
  return 0;
}