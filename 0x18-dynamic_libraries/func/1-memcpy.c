#include "main.h"
#include "string.h"
/**
  *_memcpy - function that copies the memory area
  *@n: bytes from memory
  *@src: source of size bytes
  *@dest: memory destination
  *Return: Success
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
