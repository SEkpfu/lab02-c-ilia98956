#include <stdio.h>

int main() {

    double r, a, b;
    printf("Введите радиус торта и стороны коробки: ");
    scanf("%lf %lf %lf", &r, &a, &b);

    if ((2*r <= a) && (2*r <= b)) {
        printf("Торт вместиться");
    }
    else {
        printf("Торт не вместиться");
    }

    return 0;
}