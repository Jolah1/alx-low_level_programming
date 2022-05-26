#include "lists.h"

/**
 * sum_listint - Calculates the sum of data
 * @head: pointer to the head of the list
 * Return: return the sum of all data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
