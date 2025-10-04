#include <stdio.h>

int main() {
    int a, b, c;
    int sum = 0, evenCount = 0;
    int middle, minNum, minPos;

    printf("Введите три целых числа: ");
    scanf("%d %d %d", &a, &b, &c);

    // a) сумма чисел > 10
    if (a > 10) sum += a;
    if (b > 10) sum += b;
    if (c > 10) sum += c;
    printf("Сумма чисел больше 10: %d\n", sum);

    // b) количество четных чисел
    if (a % 2 == 0) evenCount++;
    if (b % 2 == 0) evenCount++;
    if (c % 2 == 0) evenCount++;
    printf("Количество четных чисел: %d\n", evenCount);

    // c) среднее из чисел (то, что между min и max)
    if ((a >= b && a <= c) || (a <= b && a >= c)) middle = a;
    else if ((b >= a && b <= c) || (b <= a && b >= c)) middle = b;
    else middle = c;
    printf("Среднее число: %d\n", middle);

    // d) номер наименьшего числа
    minNum = a;
    minPos = 1;
    if (b < minNum) { minNum = b; minPos = 2; }
    if (c < minNum) { minNum = c; minPos = 3; }
    printf("Номер наименьшего числа: %d\n", minPos);

    return 0;
}