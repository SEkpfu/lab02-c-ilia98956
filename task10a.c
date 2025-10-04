#include <stdio.h>

int main() {
    double x, y, z;

    printf("Введите стороны треугольника: ");
    scanf("%lf %lf %lf", &x, &y, &z);

    if (x + y > z && x + z > y && y + z > x) {
        printf("Треугольник с такими сторонами существует\n");
    } 
    else {
        printf("Треугольник с такими сторонами не существует\n");
    }

    return 0;
}