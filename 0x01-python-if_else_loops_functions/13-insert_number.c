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
	listint_t *newnode = malloc(sizeof(listint_t));
	listint_t *temp;
	int flag = 0;

	if (newnode == NULL)
		return (NULL);


	temp = *head;
	newnode->n = number;
	newnode->next = NULL;

	if (temp == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	while (temp->next != NULL)
	{
		if (temp->n <= number && temp->next->n >= number)
		{
			newnode->next = temp->next;
			temp->next = newnode;
			return (newnode);
		}
		else if ((temp->n >= number) && flag == 0)
		{
			newnode->next = temp;
			temp = newnode;
			flag++;
			return (newnode);
		}
		temp = temp->next;
	}
	free_listint(temp);
	return (NULL);
}
