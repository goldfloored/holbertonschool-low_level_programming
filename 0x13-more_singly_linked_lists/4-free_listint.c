#include "lists.h"
/**
* free_listint - free linked list
* @head: pionter
* Return: void
*/
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
