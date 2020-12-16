#include <stdio.h>

int main(void){
int colCount;
printf("введіть кількість елементів:");
scanf("%d", &colCount);
int a[colCount];
int sum=0,sum_ind=0;
for (int i = 0; i < colCount; i++) 
{ 
printf("a[%d]=", i);
scanf("%d", &a[i]);
}
for (int i=0; i<colCount; i++)
if(a[i]%2==0)
{
sum+=a[i];
sum_ind++;
}
sum=sum/sum_ind;
printf("середнє арифметичне значення парних елементів масиву:%d",sum);
  return 0;
}

