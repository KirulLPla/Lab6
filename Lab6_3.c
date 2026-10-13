//Лабораторная работа 6

#include <stdio.h>
#include <math.h>

//Задание 3
int main() {
    double x, y;
    double val1, val2, min_val, result;
    puts("Введите значение x: ");
    scanf("%lf", &x);
    puts("Введите значение y:");
    scanf("%lf", &y);
    val1 = x*x + y*y;
    val2 = y*y*y-2*x*x;
    min_val = val1 < val2 ? val1 : val2;
    result = min_val - 4;
    printf("Результат: %.1lf\n", result);
    return 0;
}
