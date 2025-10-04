#include <stdio.h>

int main() {
    double a, b;
    char op;

    printf("Введите два числа и операцию (+, -, *): ");
    scanf("%lf %lf %c", &a, &b, &op);

    switch (op) {
        case '+':
            printf("Сумма: %.2lf\n", a + b);
            break;
        case '-':
            printf("Разность: %.2lf\n", a - b);
            break;
        case '*':
            printf("Произведение: %.2lf\n", a * b);
            break;
        default:
            printf("Ошибка: неизвестная операция\n");
    }

    return 0;
}