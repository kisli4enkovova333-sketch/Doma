#include <stdio.h>

int main() {
    double numbers[10];
    double sum = 0.0;
    for (int i = 0; i < 10; i++) {
        if (scanf("%lf", &numbers[i]) != 1) {
            printf("Ошибка чтения числа\n");
            return 1;
        }
        sum += numbers[i];
    }
    double average = sum / 10.0;
    printf("%.2f\n", average);
    return 0;
}
