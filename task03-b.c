#include <stdio.h>

int main() {

    double x, y;
    printf("x = "); scanf("%lf", &x);

    if (x <= -2){
        printf("f(x) == 0");
    }
    else {
        if (x <= 0){
            y = x*x + 4*x + 5;
            printf("f(x) = %lf", y);
        }
        else {
            y = (x*x + 4*x - 5);
            if (y == 0){
                printf("Делить на ноль нельзя");
            }
            else {
                y = 1/y;
                printf("f(x) = %lf", y);
            }
        }
    }
    
    return 0;
}