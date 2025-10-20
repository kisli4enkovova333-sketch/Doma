#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    
    if (argc != 2) {
        printf("Использование: %s <K>\n", argv[0]);
        printf("K - целое число (положительное - сдвиг вправо, отрицательное - влево)\n");
        return 1;
    }
    
    int K = atoi(argv[1]);
    double numbers[10];
    double result[10];
    
    
    for (int i = 0; i < 10; i++) {
        if (scanf("%lf", &numbers[i]) != 1) {
            printf("Ошибка чтения числа\n");
            return 1;
        }
    }
    
    
    for (int i = 0; i < 10; i++) {
        
        int new_index = (i + K) % 10;
        
        
        if (new_index < 0) {
            new_index += 10;
        }
        
        result[new_index] = numbers[i];
    }
    
    
    for (int i = 0; i < 10; i++) {
        printf("%.0f", result[i]);
        if (i < 9) {
            printf(" ");
        }
    }
    printf("\n");
    
    return 0;
}