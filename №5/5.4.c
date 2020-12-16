#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

int main(void) {
srand(time(0));
const int rowCount = 3, colCount = 3, Low = 6, High = 20; 
int a[rowCount][colCount];
int b[]={1,1,1,1,1,1,1,1,1,1};
for (int i = 0; i < rowCount; i++)
for (int j = 0; j < colCount; j++)
a[i][j]=Low+rand()%(High-Low+1);
printf("до:\n");
for (int i = 0; i < rowCount; i++) { //вхідні данні
for (int j = 0; j < colCount; j++){
printf("%d\t", a[i][j]);
} 
printf("\n");
}
printf("\n");
for (int i = 0; i < rowCount; i++) //множення усіх елементів
for (int j = 0; j < colCount; j++)
b[i]*=a[i][j];
int min=b[0],min_el;
for (int i = 0; i < rowCount; i++) //пошук мінімального
if(b[i]<min)
min=b[i];
for (int i = 0; i < rowCount; i++) //індекс мінімального
if(min==b[i])
{
 min_el = i;
}
printf("після:\n");
for (int i = 0; i < rowCount; i++) { //вихідні данні
for (int j = 0; j < colCount; j++){
if(i!=min_el)
printf("%d\t", a[i][j]);
} 
printf("\n");
}
  return 0;
}
