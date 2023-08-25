#include "lists.h"
/**
 * free_list - Frees a linked list.
 * @head: A pointer to the head of the linked list.
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		list_t *tmp = head;

		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
