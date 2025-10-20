#include <stdio.h>

#define ROWS_A 10
#define COLS_A 3
#define ROWS_B 3
#define COLS_B 10

int main() {
    double matrixA[ROWS_A][COLS_A];
    double matrixB[ROWS_B][COLS_B];
    double result[ROWS_A][COLS_B];
    
    
    for (int i = 0; i < ROWS_A; i++) {
        for (int j = 0; j < COLS_A; j++) {
            if (scanf("%lf", &matrixA[i][j]) != 1) {
                printf("Ошибка чтения элемента матрицы A[%d][%d]\n", i, j);
                return 1;
            }
        }
    }
    
    
    for (int i = 0; i < ROWS_B; i++) {
        for (int j = 0; j < COLS_B; j++) {
            if (scanf("%lf", &matrixB[i][j]) != 1) {
                printf("Ошибка чтения элемента матрицы B[%d][%d]\n", i, j);
                return 1;
            }
        }
    }
    
    
    for (int i = 0; i < ROWS_A; i++) {
        for (int j = 0; j < COLS_B; j++) {
            result[i][j] = 0.0;
        }
    }
    
    
    for (int i = 0; i < ROWS_A; i++) {
        for (int j = 0; j < COLS_B; j++) {
            for (int k = 0; k < COLS_A; k++) {
                result[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }
    
    
    for (int i = 0; i < ROWS_A; i++) {
        for (int j = 0; j < COLS_B; j++) {
            printf("%.0f", result[i][j]);
            
            if (!(i == ROWS_A - 1 && j == COLS_B - 1)) {
                printf(" ");
            }
        }
    }
    printf("\n");
    
    return 0;
}