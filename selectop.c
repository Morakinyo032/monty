#include "monty.h"
/**
 * selectop - Choose the right operation for an opcode
 * @s: Pointer to opcode
 * Return: The right opcode
 */
void (*selectop(char *s))(stack_t **, unsigned int)
{
	int i;
	instruction_t ops[] = {
		{"pall", pall},
		{"push", push},
//		{"pint", pint},
//		{"pop", pop},
		{NULL, NULL} 
	};

	for (i = 0; ops[i].opcode != NULL; i++)
	{
		if (strcmp(s, ops[i].opcode) == 0)
		{
			return (ops[i].f);
		}
	}
	return (NULL);
}
