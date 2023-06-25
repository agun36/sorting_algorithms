#ifndef SORT_H
#define SORT_H

/* Header function */
#include <stddef.h>
#include <stdlib.h>
#include <stdbool.h>
#include "deck.h"
#include <stdio.h>
#include <time.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

/* Sorting algorithms */
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);
void bitonic_sort(int *array, size_t size);
void quick_sort_hoare(int *array, size_t size);
void sort_deck(deck_node_t **deck);

/* Data structure and Functions */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
/*Quick_sort Function*/
void quick_sort(int *array, size_t size);
int lomuto_partition(int *array, size_t size, int low, int high);
void quicksort_recursive(int *array, size_t size, int low, int high);
/*swap function*/
void swap(int *xp, int *yp);
void swapNodes(listint_t **head, listint_t **node1, listint_t *node2);
/* partition */
int partition(int arr[], int low, int high);

void swap_node_head(listint_t **list, listint_t **tail, listint_t **jump);
int maxNum(const int *array, size_t size);
void merge(int *array, int *output, size_t low, size_t mid, size_t high);
void mergeSort(int *array, int *output, int low, int high);
void swap_node_tail(listint_t **list, listint_t **tail, listint_t **jump);
void max_heap(int *array, int size, int base, int i);
void merge_bit(int *array, size_t size, size_t low, size_t n,
		char direction);
void bitonicSort(int *array, size_t size, size_t low, size_t n, char direction);
void quick_sort(int *array, ssize_t low, ssize_t high, int size);
int q_partition(int *array, int low, int high, int size);
#endif /* SORT_H */
