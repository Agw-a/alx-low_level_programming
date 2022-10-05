#ifndef SEARCHALGOS_H_
#define SEARCHALGOS_H_

#include <stdio.h>
#include <stdlib.h>
int linear_search(int *array, size_t size, int value);
int find_val(int *array, size_t low, size_t high, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolate(int *array, size_t low, size_t high, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);

#endif /*SEARCHALGOS_H_*/
