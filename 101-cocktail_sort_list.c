#include "sort.h"

/**
 * swap - swap two nodes
 *
 * @list: pointer to first item in a list
 * @after: first node
 * @curr: second node
 */

void swap(listint_t **list, listint_t *after, listint_t *curr)
{
        after->next = curr->next;
        if (after->next)
        {
                after->next->prev = after;
        }
        curr->next = after;
        curr->prev = after->prev;
        after->prev = curr;
        if (curr->prev)
        {
                curr->prev->next = curr;
        }
        else
        {
                *list = curr;
        }
}

/**
 * cocktail_sort_list - sorting list
 *
 * @list: pointer to first item in a list
 */

void cocktail_sort_list(listint_t **list)
{
        listint_t *curr;

        if (!*list || !(*list)->next)
                return;

        curr = *list;
        while (curr->next)
        {
                if (curr->n > curr->next->n)
                {
			swap(list, curr->next, curr);
                        print_list(*list);
                }
		curr = curr->next;
        }
}
