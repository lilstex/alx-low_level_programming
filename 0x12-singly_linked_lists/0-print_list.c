#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a linked list
 * @lis: pointer to the list_t list to print
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *lis)
{
	size_t i = 0;

	while (lis)
	{
		if (lis->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", lis->len, lis->str);

		i++;
		lis = lis->next;
	}

	return (i);
}
