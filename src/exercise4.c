#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    
    if (argc != 3) {
        printf("Использование: %s <X> <K>\n", argv[0]);
        printf("X - вещественное число для вставки\n");
        printf("K - целое число, позиция для вставки (0-9)\n");
        return 1;
    }
    
    double X = atof(argv[1]);
    int K = atoi(argv[2]);
    double numbers[10];
    
    
    if (K < 0 || K > 9) {
        printf("Ошибка: K должен быть в диапазоне 0-9\n");
        return 1;
    }
    
    
    for (int i = 0; i < 10; i++) {
        if (scanf("%lf", &numbers[i]) != 1) {
            printf("Ошибка чтения числа\n");
            return 1;
        }
    }
    
    
    for (int i = 9; i > K; i--) {
        numbers[i] = numbers[i - 1];
    }
    
    // Вставка X на позицию K
    numbers[K] = X;
    
    
    for (int i = 0; i < 10; i++) {
        printf("%.0f", numbers[i]);
        if (i < 9) {
            printf(" ");
        }
    }
    printf("\n");
    
    return 0;
}