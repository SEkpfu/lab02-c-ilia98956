#include <stdio.h>

int main() {
    int d1, m1, y1; // день, месяц, год рождения
    int d2, m2, y2; // текущая дата
    int age;

    printf("Введите дату рождения (день месяц год): ");
    scanf("%d %d %d", &d1, &m1, &y1);

    printf("Введите текущую дату (день месяц год): ");
    scanf("%d %d %d", &d2, &m2, &y2);

    age = y2 - y1;

    if (m2 < m1 || (m2 == m1 && d2 < d1)) {
        age--;
    }

    printf("Вам %d ", age);

    if (age % 10 == 1 && age % 100 != 11) {
        printf("год\n");
    } else if ((age % 10 >= 2 && age % 10 <= 4) && !(age % 100 >= 12 && age % 100 <= 14)) {
        printf("года\n");
    } else {
        printf("лет\n");
    }

    return 0;
}