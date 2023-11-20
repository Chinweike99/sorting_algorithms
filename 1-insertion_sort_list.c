#include "sort.h"
/**
 * insertion_sort_list - function that sorts a doubly
 * linked list of integers in
 * ascending order using the Insertion sort algorithm
 * @list: Pointer to list of numbers
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current;
	listint_t *insertion_point;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	insertion_point = (*list)->next;

	while (insertion_point != NULL)
	{
		current = insertion_point->next;
		while (insertion_point->prev != NULL && insertion_point->prev->n
				> insertion_point->n)
		{
			insertion_point->prev->next = insertion_point->next;
			if (insertion_point->next != NULL)
				insertion_point->next->prev = insertion_point->prev;
			insertion_point->next = insertion_point->prev;
			insertion_point->prev = insertion_point->next->prev;
			insertion_point->next->prev = insertion_point;
			if (insertion_point->prev == NULL)
				*list = insertion_point;
			else
				insertion_point->prev->next = insertion_point;
			print_list(*list);
		}
		insertion_point = current;
	}
}
