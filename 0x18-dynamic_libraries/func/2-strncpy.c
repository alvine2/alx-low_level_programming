#include <string.h>
#include "main.h"

/**
    *_strncpy - function that copies a string
    *@dest: string destination character
    *@src: string source character
    *@n: integer number character
    *Return: void
*/

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
