#include "lists.h"


// Prototype: int is_palindrome(listint_t **head);
// Return: 0 if it is not a palindrome, 1 if it is a palindrome
// An empty list is considered a palindrome


int is_palindrome(listint_t **head)
{
    listint_t *current;
    listint_t *reverse;
    listint_t *temp;
    int count;
    int i;
    int j;
    int flag;

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