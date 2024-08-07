#ifndef _MAIN_H_
#define _MAIN_H

#include <stddef.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(int *array, size_t left, size_t right);
int jump_search(int *array, size_t size, int value);
#endif

