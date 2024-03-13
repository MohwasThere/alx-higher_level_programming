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
	listint_t *slow, *newnode, *fast;
	
	newnode = malloc(sizeof(listint_t));
	if (head == NULL)
	{
		newnode->next = NULL;
		newnode->n = number;
		return (newnode);
	}
	slow = *head;
	fast = *head;
	fast = fast->next;
	while (fast->n < number)
	{
		slow = slow->next;
		fast = fast->next;
	}
	
	slow->next = newnode;
	newnode->n = number;
	newnode->next = fast;
	return (newnode);
}
