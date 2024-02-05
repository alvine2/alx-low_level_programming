#include <stdio.h>

/**
 * sub - subtracts two integers
 * @a: first integer
 * @b: second integer
 * Return: difference of a and b
*/

int sub(int a, int b)
{
	return (a - b);
}

/**
 * div - divides two integers
 * @a: first integer
 * @b: second integer
 * Return: quotient of a and b
*/
int div(int a, int b)
{
	return (a / b);
}

/**
 * mod - divides two integers and returns the remainder
 * @a: first integer
 * @b: second integer
 * Return: remainder of a and b
*/
int mod(int a, int b)
{
	if (b == 0)
		return (0);
	return (a % b);
}
