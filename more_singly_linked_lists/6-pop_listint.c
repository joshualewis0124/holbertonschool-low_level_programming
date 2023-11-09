#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * and returns the head node's data (n)
 * @head: double pointer to the head of the list
 *
 * Return: the data of the deleted head node, or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	int num = 0;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);

	num = (*head)->n;

	temp = (*head)->next;

	free(*head);

	*head = temp;

	return (num);
}
