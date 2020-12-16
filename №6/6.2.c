#include <stdlib.h> 
#include <stdio.h>
#include <time.h>

int sumNP(const int arr[], int n);
int dob_el(int b[],int col1);
int main(void) {
int suma1,suma2;
const int Low=-100, High=100; 
int colCount;
scanf("%d",&colCount);
srand(time(0));
int a[colCount];
for (int i=0; i<colCount; i++) //генерація рандомних чисел
{
a[i]=Low+rand()%(High-Low+1);
}
for (int i=0; i<colCount; i++) 
{
printf("a[%d]=%d\n", i, a[i]);
}
suma1=sumNP(a, colCount); //1 задача
suma2=dob_el(a, colCount); //2 задача
printf("\nсуму від’ємних елементів масиву:%d\n",suma1); //1 відповідь
if(suma2==1)
{
printf("між мін. і макс. немає чисел\n");
}
else{
printf("добуток елементів масиву, розташованих між максимальним і мінімальним елементами:%d",suma2); //2 відповідь
}
}

int sumNP(const int arr[], int n) //1 задача
{
int i, s = 0;
for(i = 0; i < n; i++) {
if(arr[i]<0)
s += arr[i];
}
return s;
}

int dob_el(int b[],int col1) //2 задача
{
int ma,mi,d=1,dob=1;
int min = b[0];
int max = b[0];
for(int i=0; i<col1; i++)  //мін. число
{
  if(b[i]<min)
  {
    min=b[i];
  }
}
for(int i=0; i<col1; i++) //індекс мін. числа
{
  if(min==b[i])
  {
    mi=i;
  }
}
for(int i=0; i<col1; i++)  //макс. число
{
  if(b[i]>max)
  {
    max=b[i];
  }
}
for(int i=col1-1; i>=0; i--) //індекс макс. числа
{
  if(max==b[i])
   {
   ma=i;
   }
}
//перевірка
if(mi<ma) 
{
for(int i=mi+1; i<ma; i++)
{
    dob*=b[i];
}
}
else if(mi>ma)
{
for(int i=ma+1; i<mi; i++)
{
    dob*=b[i];
}
}
else
{
  dob=1;
}
return dob;
}

