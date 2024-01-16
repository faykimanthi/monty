#include "monty.h"
/**
 * f_pall - prints stack
 * @head: head of stack
 * @counter: no
 * Return: no
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *b;
	(void)counter;

	b = *head;
	if (b == NULL)
		return;
	while (b)
	{
		printf("%d\n", b->n);
		b = b->next;
	}
}
