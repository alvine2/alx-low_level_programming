#include "main.h"
#include "string.h"
/**
    *_strchr - function that locates a character in a string
    *@s: string character
    *@c: character in the string
    *Return: Success
    */

char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
