#include "lists.h"
#include <string.h>
list_t *add_node(list_t **head, const char *str)
{
	char *dub;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	duplicate = strdup(str);
	if (dub == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = dub;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
