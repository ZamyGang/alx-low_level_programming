#include "lists.h"

void free_listint(listint *head)
{
	listint_t *tmp;
	
	while (head)
	{
		tmp = head -> next;
		free (head);
		head = tmp;
	}
}
