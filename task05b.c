#include <stdio.h>

int main() {

    double x, y, z, a, b;
    printf("Введите стороны кирпича и стороны прямоугольного отверстия ");
    scanf("%lf %lf %lf %lf %lf", &x, &y, &z, &a, &b);

    if ((x <= a && y <= b) || (x <= a && z <= b) || (z <= a && y <= b) || (x <= b && y <= a) || (x <= b && z <= a) || (z <= b && y <= a)) {
        printf("Кирпич пройдет");
    }
    else {
        printf("Кирпич не пройдет");
    }

    return 0;

}