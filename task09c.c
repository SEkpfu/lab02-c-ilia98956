#include <stdio.h>

int main() {

    double x, y;
    printf("Введите координаты точки "); scanf("%lf %lf", &x, &y);

    if (x > 0 && x*x + y*y < 36 && x*x + y*y > 9) {
        printf("Точка принадлежит");
    }
    else {
        printf("Точка не принадлежит");
    }

    return 0;

}