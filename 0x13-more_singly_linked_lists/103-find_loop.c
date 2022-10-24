#include "lists.h"

/**
 * find_listint_loop - Finds the loop contained in
 *                     a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: If there is no loop - NULL.
 *         Otherwise - the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *mouse, *fox;

	if (head == NULL || head->next == NULL)
		return (NULL);

	mouse = head->next;
	fox = (head->next)->next;

	while (fox)
	{
		if (mouse == fox)
		{
			mouse = head;

			while (mouse != fox)
			{
				mouse = mouse->next;
				fox = fox->next;
			}
			return (mouse);
		}

		mouse = mouse->next;
		fox = (fox->next)->next;
	}

	return (NULL);
}
