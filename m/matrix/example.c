#include <stdio.h>
#include <stdlib.h>

typedef struct matrix_struct {
    double** matrix;
    int rows;
    int columns;
} matrix_t;

int main() {
    matrix_t mat;
    
    mat.rows = 3;  // Matritsaning qatorlar soni
    mat.columns = 3;  // Matritsaning ustunlar soni
    
    // 2D matritsa uchun xotira ajratamiz
    mat.matrix = (double**)malloc(mat.rows * sizeof(double*));
    for (int i = 0; i < mat.rows; i++) {
        mat.matrix[i] = (double*)malloc(mat.columns * sizeof(double));
    }
    
    // Matritsani to'ldiramiz
    for (int i = 0; i < mat.rows; i++) {
        for (int j = 0; j < mat.columns; j++) {
            mat.matrix[i][j] = (i + 1) * (j + 1);  // Misol: Matritsani to'ldirish
        }
    }
    
    // Matritsani chiqarish
    printf("Matritsa:\n");
    for (int i = 0; i < mat.rows; i++) {
        for (int j = 0; j < mat.columns; j++) {
            printf("%f ", mat.matrix[i][j]);
        }
        printf("\n");
    }
    
    // Xotirani tozalash
    for (int i = 0; i < mat.rows; i++) {
        free(mat.matrix[i]);  // Har bir qator uchun xotirani ozod qilamiz
    }
    free(mat.matrix);  // Asosiy xotirani ozod qilamiz
    
    return 0;
}
