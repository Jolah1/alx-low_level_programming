#include "lists.h"

/**
 * get_nodeint_at_index - locates node of a linked list
 * @head: a pointer to the list
 * @index: The index of the node to locate
 * Return: return located node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
