/* file: main.c
 * Основная программа практической работы
 * Тема: операции с матрицами
 */

#include <stdio.h>
#include "matrix.h"

int main(void) {
    Matrix A, B, C;

    matrix_input(&A);
    matrix_input(&B);

    if (matrix_add(&A, &B, &C) == 0) {
        matrix_print(&C);
    }

    if (matrix_multiply(&A, &B, &C) == 0) {
        matrix_print(&C);
    }

    return 0;
}
