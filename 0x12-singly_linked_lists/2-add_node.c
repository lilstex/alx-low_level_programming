#include "lists.h"
#include <stdlib.h>

/**
 * add_node - adds a node to the beginning of a linked list
 * @head: pointer to a lined list
 * @str: string to add to the new node
 *
 * Return: pointer to the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
  
  temp = malloc(sizeof(list_t));
  if(head == NULL)
    head = temp;
  else 
  {
    temp->str = head;
    head = tmp;
  }

	return (head);
}
