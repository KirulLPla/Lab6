//Лабораторная работа 6
#include <stdio.h>
#include <math.h>

//Задание 2
int main() {
    double x;
    double F;
    if (x <= 3) {
        F = x*x - 3*x + 9;
    }
    else {
        F = 1.0/x*x*x + 6;
    }
    puts("Введите значение x: ");
    scanf("%lf", &x);

    printf("F(%.2lf) = %lf\n", x, (x<=3) ? (x*x-3*x+9) : (1.0 / (x*x*x+6)));
    return 0;
}
