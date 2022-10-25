#include "lists.h"

/**
 * add_nodeint - adds a new node ata the beginning of
 * the listint_t list
 * @n: the integer for the new node to cotain
 *
 * Return: if the function fails - NULL
 * otherwise - the address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
