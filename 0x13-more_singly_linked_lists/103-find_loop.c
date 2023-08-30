#include "lists.h"
/**
 * find_listint_loop - Finds the loop in a linked list.
 * @head: Pointer to the head of the list.
 * Return: Address of the node where the loop starts, or NULL if no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head, *fast = head;

	if (head == NULL || head->next == NULL)
		return (NULL);

	while (fast != NULL && fast->next != NULL)
	{
		printf("slow: %d\n", slow->n);
		slow = slow->next;
		fast = fast->next->next;
		printf("slow: %d\n", slow->n);
		printf("fast: %d\n", fast->n);
		if (slow == fast)
		{
			break;
		}
	}
	if (fast == NULL || fast->next == NULL)
		return (NULL);
	slow = head;

	while (slow != fast)
	{
		slow = slow->next;
		fast = fast->next;
	}
	return (slow);
}
