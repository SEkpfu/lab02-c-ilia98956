#include <stdio.h>

int main() {

    double x, y;
    printf("Введите координаты точки "); scanf("%lf %lf", &x, &y);

    if (x < 0 && x > -2 && y > 0 && y < 1) {
        printf("Точка принадлежит");
    }
    else {
        printf("Точка не принадлежит");
    }

    return 0;

}