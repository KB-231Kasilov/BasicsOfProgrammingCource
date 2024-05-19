#ifndef UNTITLED_ALGORITHM_H
#define UNTITLED_ALGORITHM_H

#include "../data_structures/matrix/matrix.h"

// меняет местами строки матрицы m, в которых находятся максимальный и минимальный элементы
void swapMaxMinRows(matrix *m);

// возвращает максимальный элемент массива a размера n
int getMax(int *a, const int n);

// сортирует строки матрицы m по неубыванию наибольших элементов строк
void sortRowsByMaxElem(matrix *m);

// возвращает минимальный элемента массива a размера n
int getMin(int *a, const int n);

// сортирует столбцы матрицы по неубыванию минимальных элементов столбцов
void sortColsByMinElem(matrix *m);

// возвращает матрицу, которая является результатом перемножения матриц m1 и m2
matrix mulMatrices(matrix m1, matrix m2);

// меняет матрицу m ее квадратом, если матрица является симметричной
void getSquareOfMatrixIfSymmetric(matrix *m);


#endif //UNTITLED_ALGORITHM_H
