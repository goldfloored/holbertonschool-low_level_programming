#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * *insert_nodeint_at_index - new node
 * @head : pointer
 * @idx : index
 * @n : int
 * Return: 0
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;

	listint_t *str, *string, *new;

	if (head == NULL)
		return (0);
	string = *head;
	for (i = 0; string != '\0'; i++)
	{
		if (string == NULL)
			return (0);
		string = string->next;
	}
	if (i < idx)
		return (0);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (0);
	new->n = n;
	str = *head;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		for (i = 0; i < idx - 1; i++)
		{
			if (str == NULL)
				return (0);
			str = str->next;
		}
		new->next = str->next;
		str->next = new;
	}
	return (new);
}
