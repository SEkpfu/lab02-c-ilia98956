#include <stdio.h>
int main() {
    int dM, dW;
    printf("Введите дату: \n");
    printf("День месяца: ");
    scanf("%d", &dM);
    printf("Номер дня в неделе: ");
    scanf("%d", &dW);
    if ((13 == dM) && (5 == dW || 2 == dW) || (17 == dM && 5 == dW))
        printf("неудачный день");
    

    return 0;
}