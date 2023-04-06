#include "monty.h"
/**
 * push - Pushes an element to the stack
 * @stack: Pointer to head pointer of the stack
 * @line_number: opcode line number
 *
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new;

	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		printf("L%i: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	new->n = n;
	new->next = *stack;
	(*stack)->prev = new;
	stack = &new;
}
/**
 * push - Pushes an element to the stack
 * @stack: Pointer to head pointer of the stack
 * @line_number: opcode line number
 *
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current;

	current = *stack;
	while (current != NULL)
	{
		printf("%i\n", current->n);
		current = current->next;
	}
}
