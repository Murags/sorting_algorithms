#include "sort.h"
/**
*insertion_sort_list - sort list
*
*@list: list to sort
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *behind, *temp;

	current = (*list)->next;

	while (current)
	{
		behind = current->prev;

		while (behind && behind->n > current->n)
		{
			if (behind->prev)
			{
				temp = behind->prev;
				temp->next = current;
				if (current->next)
					current->next->prev = behind;
				behind->next = current->next;
				current->next = behind;
				behind->prev = current;
				current->prev = temp;
				behind = temp;
			}
			else
			{
				temp = NULL;
				current->next->prev = behind;
				behind->next = current->next;
				behind->prev = current;
				current->next = behind;
				current->prev = NULL;
				behind = temp;
				*list = current;
			}
			print_list(*list);
		}
		current = current->next;
	}
}
