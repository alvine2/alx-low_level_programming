#include "main.h"
#include <string.h>

/**
    * *_strcat - function that concatenates two strings.
    *@dest: the first string character
    *@src: the second string character
    *
    *Return: returns a pointer to the resulting string dest
*/

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
