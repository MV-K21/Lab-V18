#include <stdio.h>

int main()
{
    int a;
    printf("введіть номер дня тижня:");
    scanf("%d",&a);
    switch(a)
    {
    case 1:printf("Понеділок"); break;
    case 2:printf("Вівторок"); break;
    case 3:printf("Середа"); break;
    case 4:printf("Четверг"); break;
    case 5:printf("П'ятниця"); break;
    case 6:printf("Субота"); break;
    case 7:printf("Неділя"); break;
    default: printf("Такого дня тижня ще не вигадали"); break;
    }

    return 0;
}
