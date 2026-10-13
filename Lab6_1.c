//Лабораторная работа 6
#include <stdio.h>

//Задание 1
int main() {
    int yeas;
    puts("Введите год: ");
    scanf("%d", &yeas);
    if ((yeas % 4 == 0 && yeas % 100 != 0) || (yeas % 400 == 0)) {
        printf("год %d високосный\n", yeas);
    } else {
        printf("год %d не високосный\n", yeas);
    }
    return 0;
}
