#include <stdio.h>
int main()
{
    double a1, b1, a2, b2;
    printf("Введите стороны 1-го прямоугольника \n");
    printf("a1= "); scanf("%lf", &a1);
    printf("b1= "); scanf("%lf", &b1);
    printf("Введите стороны 2-го прямоугольника \n");
    printf("a2= "); scanf("%lf", &a2);
    printf("b2= "); scanf("%lf", &b2);
    double s1, s2;
    s1 = a1 * b1;
    s2 = a2 * b2;
    if (s1 == s2)
        printf("Площади равны");
    else
        if (s1 > s2) 
            printf("max площадь у первого, S= %.2f", s1);
        else
            printf("max площадь у второго, S= %.2f", s2);
    
    return 0;
}