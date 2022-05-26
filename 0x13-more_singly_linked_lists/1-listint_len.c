#include "lists.h"
#include <stdio.h>

/**
 * listint_len - prints elements in a linked list
 * @h: pointer to linked list
 * Return: return elements in linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
