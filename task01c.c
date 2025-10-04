#include <stdio.h>

int main() {

    double a1, b1, a2, b2, a3, b3;
    printf("Введите стороны прямоугольников");
    scanf("%lf %lf %lf %lf %lf %lf", &a1, &b1, &a2, &b2, &a3, &b3);

    double s1 = a1*b1, s2 = a2*b2, s3 = a3*b3;

    if (s1 > s2) {
        if (s1 > s3){
            printf("Площадь у первого больше, s = %.2f", s1);
        }
        else {
            printf("Площадь у треьего больше, s = %.2f", s3);
        }
    }
    else {
        if (s2 > s3) {
            printf("Площадь второго больше, s = %.2f", s2);
        }
        else {
            printf("Площадь у треьего больше, s = %.2f", s3);
        }
    }

    return 0;

}