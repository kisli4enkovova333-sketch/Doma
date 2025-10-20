#include <stdio.h>

int main() {
    double numbers[10];
    
    
    for (int i = 0; i < 10; i++) {
        if (scanf("%lf", &numbers[i]) != 1) {
            printf("Ошибка чтения числа\n");
            return 1;
        }
    }
    
    
    for (int i = 9; i >= 0; i--) {
        printf("%.0f", numbers[i]);  
        if (i > 0) {
            printf(" ");  
        }
    }
    printf("\n");
    
    return 0;
}