#include "main.h"
#include "string.h"
/**
    *_strstr - function that locates a substring
    *@haystack: the first occurrence of the substring in the strin
    *@needle: substring character
    *Return: success
    */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
