#include "sort.h"
/**
 * insertion_sort_list - function that sorts a doubly linked list of integers
 * in ascending order
 * @list: double pointer to linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *travel;

	if (!list)
		return;
	travel = (*list)->next;
	for (; travel; travel = travel->next)
	{
		for (; travel->prev && travel->n < travel->prev->n;)
		{
			travel->prev->next = travel->next;
			if (travel->next)
				travel->next->prev = travel->prev;
			travel->next = travel->prev;
			travel->prev = travel->next->prev;
			travel->next->prev = travel;
			if (!travel->prev)
				*list = travel;
			else
				travel->prev->next = travel;
			print_list(*list);
		}
	}
}
