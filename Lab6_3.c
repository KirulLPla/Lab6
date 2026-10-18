#include <stdio.h>

int main(void) {
    int d, m, y, choice;

    printf("Введите день, месяц и год: ");
    scanf("%d %d %d", &d, &m, &y);

    // 1 для високосного года, 0 для обычного
    int leap = (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);

    int days_in_month = 31;
    if (m == 2) {
        days_in_month = 28 + leap;
    } else if (m == 4 || m == 6 || m == 9 || m == 11) {
        days_in_month = 30;
    }

    printf("1 — до конца месяца, 2 — до конца года: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Осталось дней: %d\n", days_in_month - d);
    } else if (choice == 2) {
        int left = days_in_month - d;
        switch (m) {
            case 1:  left += 28 + leap; // февраль
            case 2:  left += 31;        // март
            case 3:  left += 30;        // апрель
            case 4:  left += 31;        // май
            case 5:  left += 30;        // июнь
            case 6:  left += 31;        // июль
            case 7:  left += 31;        // август
            case 8:  left += 30;        // сентябрь
            case 9:  left += 31;        // октябрь
            case 10: left += 30;        // ноябрь
            case 11: left += 31;        // декабрь
        }
        printf("Осталось дней: %d\n", left);
    }

    return 0;
}

