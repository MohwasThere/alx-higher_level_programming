#include "lists.h"

/**
 * check_cycle - checks if a single linked list has a cycle in it
 * @list: linked list to check in
 * 
 * Return: if cycle  1, if no cycle 0
*/
int check_cycle(listint_t *list)
{
	listint_t *temp;
	int i = 0;
	
	if (list == NULL)
		return 0;
	temp = list;
	while (temp != NULL && i < 11)
	{
			temp = temp->next;
			i++;
	}
	if (temp == NULL)
		return 0;
	else
		return 1;

	free(temp);
}