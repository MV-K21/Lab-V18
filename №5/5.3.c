#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

int main(void) {
const int rowCount = 3, colCount = 2; 
int a[rowCount][colCount];
int sum=0;
for (int i = 0; i < rowCount; i++) //вхідні данні
for (int j = 0; j < colCount; j++) 
{ 
printf("a[%d][%d]=", i, j);
scanf("%d", &a[i][j]); 
}
int max1 = 0, max2 = 0;

for (int i = 0; i < rowCount; i++) //пошук першого макс. числа
for (int j = 0; j < colCount; j++)
if(a[i][j]> max1)
max1 = a[i][j];

for (int i = 0; i < rowCount; i++) //пошук другого макс. числа
for (int j = 0; j < colCount; j++)
if(a[i][j]> max2 && a[i][j]!=max1)
max2 = a[i][j];

for (int i = 0; i < rowCount; i++)  //заміна на 0
for (int j = 0; j < colCount; j++){
if(a[i][j]==max1)
{
  a[i][j]=0;
}
if(a[i][j]==max2)
{
  a[i][j]=0;
}
}
for (int i = 0; i < rowCount; i++) 
{ 
for (int j = 0; j < colCount; j++)
{
printf("%d\t",a[i][j]);
} 
printf("\n");
}
  return 0;
}
