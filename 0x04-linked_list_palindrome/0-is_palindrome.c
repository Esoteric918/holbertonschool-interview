#include "lists.h"

/**
 * is_palindrome - checks if a singly linked list is a palindrome
 * @head: pointer to the first node of the list
 *
 * Return: 1 if it is a palindrome, 0 if it is not
 */

int is_palindrome(listint_t **head)
{
	listint_t *current, *reverse, *temp;
	int i, j, flag, count;

	if (*head == NULL)
		return (1);
	current = *head;
	reverse = NULL;
	count = 0;
	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	current = *head;
	for (i = 0; i < count / 2; i++)
	{
		temp = current->next;
		current->next = reverse;
		reverse = current;
		current = temp;
	}
	if (count % 2 == 0)
		j = count / 2 - 1;
	else
		j = count / 2;
	flag = 1;
	while (j >= 0)
	{
		if (reverse->n != current->n)
		{
			flag = 0;
			break;
		}
		reverse = reverse->next;
		current = current->next;
		j--;
	}
	if (flag == 1)
	{
		return (1);
		printf("Linked list is a palindrome\n");
	}
	else
		return (0);
}
