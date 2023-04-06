#include "monty.h"
/**
 * is_opcode - checks for opcode
 * @s: Pointer to a text
 * Return: 1 if true or -1 otherwise
 */
int is_opcode(char *s)
{
	int i;

	char *t[] = { "pall", "push", "pint", "pop", NULL };
;
	for (i = 0; t[i] != NULL; i++)
	{
		if (strcmp(s, t[i]) == 0)
			return (1);
	}
	return (-1);
}
