#include "main.h"
#include "string.h"
/**
    *_strspn - function that gets the length of a prefic substring
    *@s: substring character
    *@accept: consist of bytes in the inital segment
    *Return: success
    */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
