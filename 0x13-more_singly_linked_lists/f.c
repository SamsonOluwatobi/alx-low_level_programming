#include "lists.h"

int main(void)
{
    listint_t *head;

    head = NULL;
    printf("Before adding nodes\n");
    add_nodeint_end(&head, 0);
    printf("After adding first node\n");
    add_nodeint_end(&head, 1);
    printf("After adding second node\n");

    printf("Printing the linked list:\n");
    print_listint(head);

    printf("Freeing the linked list:\n");
    free_listint2(&head);

    printf("After freeing, head = %p\n", (void *)head);

    return (0);
}

