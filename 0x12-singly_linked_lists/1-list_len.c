#include "lists.h"

/**
 * list_len - finds the number of elements in a linked list
 * @lis: pointer to the start of the linked list
 *
 * Return: number of elements in the linked list
 */
size_t list_len(const list_t *lis)
{
	const list_t *tmp;
	unsigned int i;

	tmp = lis;
	for (i = 0; tmp; i++)
		tmp = tmp->next;
	return (i);
}
