#include <stdio.h>

int main() {
    double x, y, z;

    printf("Введите стороны треугольника: ");
    scanf("%lf %lf %lf", &x, &y, &z);

    if (x + y > z && x + z > y && y + z > x) {
        if (x == y && y == z) {
            printf("Треугольник равносторонний\n");
        }
        else if (x == y || x == z || y == z) {
            printf("Треугольник равнобедренный\n");
        }
        else if ((x*x + y*y == z*z) || 
                 (x*x + z*z == y*y) || 
                 (y*y + z*z == x*x)) {
            printf("Треугольник прямоугольный\n");
        }
        else {
            printf("Треугольник обычный\n");
        }
    } else {
        printf("Треугольник с такими сторонами не существует\n");
    }

    return 0;
}