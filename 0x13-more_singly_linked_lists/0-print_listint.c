#include <stdio.h>
#include "lists.h"

size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		printf("%d",h);
		node++;
		h = h->next;
	}
	return (node);

}
