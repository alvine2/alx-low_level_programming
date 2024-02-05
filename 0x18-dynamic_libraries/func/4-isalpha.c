#include "main.h"
/**
  *_isalpha - checks if for alphabetic character
  *@c: int used for the function's argument
  *Description: use the _isalpha function
  *Return: 1 if c is a letter lowercase or uppercase
  *0 otherwise
  */

int _isalpha(int c)
{

		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		{
			return (1);
		}
		else
			return (0);
}
