#ifndef SEARCHALGOS_H_
#define SEARCHALGOS_H_

#include <stdio.h>
#include <stdlib.h>
int linear_search(int *array, size_t size, int value);
int binary_recursive(int *array, size_t first, size_t last, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int inter(int *array, size_t low, size_t high, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int bin_search(int *array, size_t first, size_t last, int value);
int exponential_search(int *array, size_t size, int value);

#endif /*SEARCHALGOS_H_*/
