#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in
 * ascending orger using the insertion sort algorithm.
 * @list: A pointer to the head of a doubly-linked list of integers.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *prev, *temp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
	{
		return;
	}
	for (current = (*list)->next; current != NULL; current = temp)
	{
		temp = current->next;
		prev = current->prev;
		while (prev != NULL && current->n < prev->n)
		{
			if (prev->prev != NULL)
			{
				prev->prev->next = current;
			}
			else
				*list = current;
			current->prev = prev->prev;
			prev->prev = current;
			prev->next = current->next;
			if (current->next != NULL)
			{
				current->next->prev = prev;
			}
			current->next = prev;
			prev = current->prev;
			print_list((const listint_t *)*list);
		}
	}
}
