#include "lists.h"
#include <stdio.h>

size_t list_len(const list_t *h)
{
	size_t node = 0;

	while (h)
	{
		printf("-> %d %s", h->len, h->str);

		node++;
		h = h->next;
	}
	return (node);
}
