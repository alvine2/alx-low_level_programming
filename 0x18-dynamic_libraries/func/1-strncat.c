#include <string.h>
#include "main.h"

/**
    *_strncat - function that concatenates two strings
    *@dest: destination character
    *@src: source character
    *@n: integer
    *Return: Return a pointer to the resulting string dest
*/

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
