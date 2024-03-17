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
	listint_t *temp = *head;
	int flag = 0;

	if (head != NULL)
	{
		while (!(temp->n <= number && temp->next->n >= number))
		{
			if (temp->n <= number && temp->next->n >= number)
			{
				newnode->n = number;
				newnode->next = temp->next;
				temp->next = newnode;
				return (newnode);
			}
			else if ((temp->n >= number) && flag == 0)
			{
				newnode->n = number;
				newnode->next = temp;
				temp->next = newnode;
				return (newnode);
			}
			else
			{
				return (NULL);
			}
			temp = temp->next;
			flag++;
		}
	}
	else
	{
		newnode->n = number;
		temp->next = newnode;
		newnode->next = NULL;
		return (newnode);
	}
	return (NULL);
}
