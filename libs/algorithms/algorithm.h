#ifndef UNTITLED_ALGORITHM_H
#define UNTITLED_ALGORITHM_H

#include "../data_structures/matrix/matrix.h"

// меняет местами строки матрицы m, в которых находятся максимальный и минимальный элементы
void swapMaxMinRows(matrix *m);

// возвращает максимальный элемент массива a размера n
int getMax(int *a, const int n);

// сортирует строки матрицы m по неубыванию наибольших элементов строк
void sortRowsByMaxElem(matrix *m);


#endif //UNTITLED_ALGORITHM_H
