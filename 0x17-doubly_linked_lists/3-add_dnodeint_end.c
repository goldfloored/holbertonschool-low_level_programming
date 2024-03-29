#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
* add_dnodeint_end - function that adds a new node
* at the end of a dlistint_t list.
* @head: pointer to the head node
* @n: new integer node
* Return: pointer to the new element
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL, *current = NULL;

	/* new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	current = *head;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = new_node;
	new_node->prev = current;

	return (new_node);
}
