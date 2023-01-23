#include "sort.h"

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *prev;

	current = (*list)->next;

	while (current && current->next)
	{
		prev = current->prev;

		while (prev)
		{
			if (prev->n > current->n)
			{
				current->next->prev = prev;
				prev->next = current->next;
				current->next = prev;
				current->prev = prev->prev;
				prev->prev = current;
				print_list(*list);
			}
			prev = prev->prev;
		}
		current = current->next;
	}
}
