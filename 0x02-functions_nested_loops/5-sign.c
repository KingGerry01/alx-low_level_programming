#include "main.h"

/**
 * print_sign - prints the sign of the number
 * @n: The number of which the sign will be printed.
 *
 * Return: 1 if the number is greater than Zero
 *         0 if the number is zero
 *         -1 if the number is lesser than zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
