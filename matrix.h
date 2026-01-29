/* file: matrix.h
 * Практическая работа по языку C
 * Тема: операции с матрицами=
 */

#ifndef MATRIX_H
#define MATRIX_H

#define MAX_SIZE 10

typedef struct {
    int rows;
    int cols;
    int data[MAX_SIZE][MAX_SIZE];
} Matrix;

/* Ввод матрицы с клавиатуры */
void matrix_input(Matrix *m);

/* Вывод матрицы на экран */
void matrix_print(const Matrix *m);

/* Сложение двух матриц */
int matrix_add(const Matrix *a, const Matrix *b, Matrix *result);

/* Умножение двух матриц */
int matrix_multiply(const Matrix *a, const Matrix *b, Matrix *result);

#endif
