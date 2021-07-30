#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - adds a new node to the end of linked list
 * @head: double pointer to a linked list
 * @str: string to add to the new node
 *
 * Return: pointer to the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp;

	temp = malloc(sizeof(list_t));
  temp->str = NULL;
  if(head == NULL)
    head = temp
  else
  {
    new = head;
    while(new->str != NULL)
    {
      new = new->str;
    }
    new->str = temp
  }
	return (new);
}
