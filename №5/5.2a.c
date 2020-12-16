#include <stdio.h>

int main(void) {
int colCount;
printf("введіть кількість елементів:");
scanf("%d", &colCount);
int a[colCount];
int min=999,min_el,zero=999,zero_ind,dob_el=1;
for (int i = 0; i < colCount; i++) 
{ 
printf("a[%d]=", i);
scanf("%d", &a[i]);
}
for(int i = 0; i < colCount; i++) //мінімальне число
{
  if(a[i]<min)
  min=a[i];
}
for(int i = 0; i < colCount; i++) //індекс мінімального числа
{
if(min==a[i])
 {
 min_el = i;
 }
}
printf("\nномер мінімального елемента масиву:%d\n",min_el);

for(int i=0; i<colCount; i++)  //перший нуль
{
  if(a[i]==0)
  {
    zero=a[i];
  }
}
if(zero==0){
for(int i=0; i<colCount; i++) //індекс першого нуля
{
  if(zero==a[i])
  {
    zero_ind=i;
  }
}
for(int i=0; i<colCount; i++) //добуток елементів
{
  if(i<zero_ind)
  {
  dob_el*=a[i];
  }
}
printf("добуток елементів масиву, розташованих до першого нульового елемента:%d", dob_el);
}
else
{
printf("в нас немає нулів");
}
  return 0;
}
