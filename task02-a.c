#include <stdio.h>

int main() {

    int n;
    printf("Введите целое число: ");
    scanf("%d", &n);

    if (n > 0) {
        printf("Число %d положительное", n);
    }
    else {
        if (n == 0) {
            printf("Число равно нулю");
        }
        else {
            printf("Число %d отрицательно", n);
        }
    }

    return 0;
}