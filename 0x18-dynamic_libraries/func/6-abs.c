#include "main.h"
/**
  *main - check the code
  *_abs - function that computes the absolute value
  *of an integer
  *@r: int used for function's argument
  *
  *Return: 0
  */
int _abs(int r)
{
	if (r < 0)
		r = (-1) * r;
	return (r);
}
