#ifndef SORT_H
#define SORT_H
#include <stdlib.h>
#include <stdio.h>

typedef struct listint_s
{
        const int n;
        struct listint_s *prev;
        struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void swap(int *xp, int *yp);
size_t partition(int *array, ssize_t lo, ssize_t hi, size_t size);
void quicksort(int *array, ssize_t lo, ssize_t hi, size_t size);


#endif
