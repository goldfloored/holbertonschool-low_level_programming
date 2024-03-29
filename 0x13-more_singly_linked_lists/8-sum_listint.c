#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - returns the sum of a list
 * @head : pointer
 * Return: 0
 */
int sum_listint(listint_t *head)
{
	listint_t *new;

	int sum;

	if (head == NULL)
		return (0);
	new = head;
	sum = new->n;
	new = new->next;
	while (new != '\0')
	{
		sum = sum + new->n;
		new = new->next;
	}
	return (sum);
}
