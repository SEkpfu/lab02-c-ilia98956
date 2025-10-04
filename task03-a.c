#include <stdio.h>

int main() {

    double x, y;
    printf("x = "); scanf("%lf", &x);

    if (x <= -2){
        printf("f(x) == 0");
    }
    else {
        if (x <= 10){
            y = x*x + 4*x + 5;
            printf("f(x) = %lf", y);
        }
        else {
            y = 1 / (x*x + 4*x - 5);
            printf("f(x) = %lf", y);
        }
    }
    
    return 0;
}