#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/**
 * freadline - Reads a line of texts from a file
 *
 *
 *
 *
 */
char *freadline(FILE *file)
{
	char c, *buf, *buf1;
	int i, bufsize = 5;

	i = 0;
	buf = malloc(bufsize);
	if (buf == NULL)
		return (NULL);
	c = getc(file);
	while (c != '\n')
	{
		if (i == bufsize)
		{
			bufsize += 20;
			buf = realloc(buf, bufsize);
			if (buf == NULL)
				return (NULL);
		}
		if (c == EOF)
			return (NULL);
		buf[i] = c;
		c = getc(file);
		i++;
	}
	buf[i] = '\0';
	buf1 = malloc(i);
	if (buf1 == NULL)
		return (NULL);
	strcpy(buf1, buf);
	free(buf);
	return (buf1);
}
