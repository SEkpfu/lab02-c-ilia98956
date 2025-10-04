#include <stdio.h>

int main() {

    double x, y;
    printf("Введите координаты точки "); scanf("%lf %lf", &x, &y);

    if (y < -2*x + 2 && x > 0 && y > 0) {
        printf("Точка принадлежит");
    }
    else {
        printf("Точка не принадлежит");
    }

    return 0;

}