#include "monty.h"

/**
 * f_add - This function adds the top two elements of the stack.
 * @stack: Pointer to the head of the stack
 * @line_number: Line number in the Monty file
 * Return: No return value
 */
void f_add(stack_t **stack, unsigned int line_number)
{
	stack_t *a = *stack;
	int len = 0, aux;

	while (a)
	{
		a = a->next;
		len++;
	}

	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}

	a = *stack;
	aux = a->n + a->next->n;
	a->next->n = aux;
	*stack = a->next;
	free(a);
}
