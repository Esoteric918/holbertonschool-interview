#include "lists.h"

/**
 * compare - compares two nodes
 *
 * @a - first node
 * @b - second node
 * Return int
 */

int compare(listint_t *a, listint_t *b)
{
    if (a == NULL && b == NULL)
        return (1);
    if (a == NULL || b == NULL)
        return (0);
    if (a->n == b->n)
        return (compare(a->next, b->next));
    return (0);
}

/**
 * is_palindrome - checks if a singly linked list is a palindrome
 * @head: pointer to the first node of the list
 *
 * Return: 1 if it is a palindrome, 0 if it is not
 */
int is_palindrome(listint_t **head)
{
    listint_t *slow = *head;
    listint_t *fast = *head;
    listint_t *prev = NULL;
    listint_t *next = NULL;

    if (head == NULL || *head == NULL)
        return (1);
    while (fast != NULL && fast->next != NULL)
    {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    if (fast != NULL)
        next = slow->next;
    else
        next = NULL;
    slow->next = NULL;
    prev->next = NULL;
    if (next != NULL)
        *head = next;
    else
        *head = NULL;
    return (compare(*head, prev));
}
