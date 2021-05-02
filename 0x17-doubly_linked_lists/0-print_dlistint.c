#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t dlistint_len(const dlistint_t *h)
{
	int len = 0;

	while (h) {
		printf("%d\n", h->n);
		len++;
		h = h->next;
	}
	return(len);
}
