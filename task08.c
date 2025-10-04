#include <stdio.h>

int main() {

    double x, y;
    printf("Введите координаты попадания "); scanf("%lf %lf", &x, &y);

    if (x*x + y*y <= 4) {
        printf("Выбито 10 очков");
    }
    else if (x*x + y*y <= 16 && x*x + y*y > 4) {
        printf("Выбито 5 очков");
    }
    else if (x*x + y*y >= 16) {
        printf("Выбито 0 очков");
    }

    return 0;

}