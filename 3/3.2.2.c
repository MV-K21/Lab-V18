#include <stdio.h>

int main()
{
int a;
printf("День ");
scanf("%d",&a);
if (a > 7){
printf("Не являєтся днем цієї неділі ");
}
if (a == 1){
printf ("Понеділок ");
}
if (a == 2){
printf ("Вівторок ");
}
if (a == 3){
printf ("Середа ");
}
if (a == 4){
printf ("Четвер ");
}
if (a == 5){
printf ("Пятниця ");
}
if (a == 6){
printf ("Субота ");
}
if (a == 7){
printf ("Неділя ");
}
}
