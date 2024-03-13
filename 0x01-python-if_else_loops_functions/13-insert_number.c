#include "lists.h"

/**
 * *insert_node - insertnode into a sorted linked list
 * @head: the head of linked list
 * @number: number to be sorted
 * Return: address of newnode , or NULL on fail
*/
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *temp, *newnode;

	temp = *head;
	while (temp != NULL)
	{
		if (number > temp->n && (number < temp->next->n))
		{
			newnode = temp;
			newnode->n = number;

			return (newnode);
		}
		else
		{
			temp = temp->next;
		}
	}
	return (NULL);
}
