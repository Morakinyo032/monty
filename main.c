#include "monty.h"
/**
 * main - Executes a file containing monty byte code
 * @ac: Args count
 * @av: Pointer to args list
 *
 * Return: 0
 */
int main(int ac, char **av)
{
	stack_t **stack;
	FILE *file;
	char **parsed, *ptr;
	void (*f)(stack_t **stack, unsigned int line_number);

	iline_number = 0;
	if (ac != 2)
	{
		perror("Usage: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(av[1], "r");
	if (ptr == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", av[1]);
		exit(EXIT_FAILURE);
	}
	ptr = freadline(file);
	while (ptr != NULL)
	{
		line_number += 1;
		parsed = parse(ptr);
		if (is_opcode(parsed[0]) == -1)
		{
			fprintf(stderr, "L%i: unknown instruction <opcode>\n", line_number);
			exit(EXIT_FAILURE);
		}
		f = selectop(parsed[0]);
		if (parsed[1] != NULL)
			n = atoi(parsed[1]);
		f(stack, line_number);
		free(ptr);
		ptr = freadline(file);
	}
	return (0);
}
