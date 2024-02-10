#include "lists.h"
#include <stdlib.h>

/**
 * *insert_node - a function that inserts a number into a sorted singly linked list
 * @head: head of linked list
 * @number: number to insert
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new_node;
	listint_t *tmp = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	if (tmp == NULL || tmp->n >= number)
	{
		new_node->next = tmp;
		*head = new_node;
		return (new_node);
	}

	return (new_node);
}
