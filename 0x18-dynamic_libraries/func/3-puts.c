#include "main.h"
#include "string.h"
#include <stdio.h>
/**
    *_puts - funstion that prints a string,
     *followed by a new line, to stdout
     *@str: string pointer
     *Return: void
*/

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		putchar (str[i]);
		i++;
	}
	putchar('\n');
}
