#include<stdio.h>
#include "lists.h"

/**
 * *insert_node - insertnode into a sorted linked list
 * @head: the head of linked list
 * @number: number to be sorted
 * Return: address of newnode , or NULL on fail
*/
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *node = *head, *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = number;

	if (node == NULL || node->n >= number)
	{
		newnode->next = node;
		*head = newnode;
		return (newnode);
	}

	while (node && node->next && node->next->n < number)
		node = node->next;

	newnode->next = node->next;
	node->next = newnode;

	return (newnode);
}
