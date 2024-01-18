#include "monty.h"
/**
 * f_pall - prints stack
 * @head: head of stack
 * @counter: no value
 * Return: no value to return
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *a;
	(void)counter;

	a = *head;
	if (a == NULL)
		return;
	while (a)
	{
		printf("%d\n", a->n);
		a = a->next;
	}
}
