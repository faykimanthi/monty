#include "monty.h"
/**
 * f_pall - prints stack
 * @head: head of stack
 * @counter: no value
 * Return: no value to return
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
