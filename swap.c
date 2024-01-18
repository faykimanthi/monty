#include "monty.h"
/**
 * f_swap - swaps the top two elements of the stack
 * @head: represents the head of the stack
 * @counter: represents the line_number
 * Return: no
*/
void f_swap(stack_t **head, unsigned int counter)
{
	stack_t *a;
	int len = 0, aux;

	a = *head;
	while (a)
	{
		a = a->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	a = *head;
	aux = a->n;
	a->n = a->next->n;
	a->next->n = aux;
}
