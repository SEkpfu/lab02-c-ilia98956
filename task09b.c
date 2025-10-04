#include <stdio.h>

int main() {

    double x, y;
    printf("Введите координаты точки "); scanf("%lf %lf", &x, &y);

    if (y > 0 && x*x + y*y < 25) {
        printf("Точка принадлежит");
    }
    else {
        printf("Точка не принадлежит");
    }

    return 0;

}