#include "algorithm.h"
#include <assert.h>

void test_swapMaxMinRows_1_standard_swap() {
    matrix m = createMatrixFromArray((int[]) {1, 2, 3,
                                              4, 5, 6,
                                              7, 8, 9}, 3, 3);
    matrix result = createMatrixFromArray((int[]) {7, 8, 9,
                                                   4, 5, 6,
                                                   1, 2, 3}, 3, 3);
    swapMaxMinRows(&m);
    assert (areTwoMatricesEqual(m, result));
    freeMemMatrix(m);
    freeMemMatrix(result);
}
void test_swapMaxMinRows_2_min_and_max_element_in_one_row() {
    matrix m = createMatrixFromArray((int[]) {1, 1, 9,
                                              1, 1, 1,
                                              1, 1, 1}, 3, 3);
    matrix check = createMatrixFromArray((int[]) {1, 1, 9,
                                                  1, 1, 1,
                                                  1, 1, 1}, 3, 3);
    swapMaxMinRows(&m);
    assert(areTwoMatricesEqual(m, check));
    freeMemMatrix(m);
    freeMemMatrix(check);
}
void test_swapMaxMinRows() {
    test_swapMaxMinRows_1_standard_swap();
    test_swapMaxMinRows_2_min_and_max_element_in_one_row();
}


