#include <stdio.h>

int main() {

    int n;
    printf("Введите число: "); scanf("%d", &n);

    if (n % 2 == 0) {
        printf("Число четное");
    }
    else {
        printf("Число нечетное");
    }

    return 0;

}