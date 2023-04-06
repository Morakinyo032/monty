#include "monty.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * parse - Parses a line of code
 * @ptr: Pointer to line of code
 *
 * Return: opcode and its function
 */
char **parse(char *s)
{
	int i;
	char **t, *tmp;
	const char *delim = " ";

	i = 0;
	t = malloc(sizeof(char *) * 3);
	tmp = strtok(s, delim);
	while (tmp != NULL && i < 2)
	{
		t[i] = strdup(tmp);
		tmp = strtok(NULL, delim);
		i++;
	}
	t[i] = NULL;
	return (t);
}
