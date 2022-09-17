#include "main.h"

/**
 * _islower - Checks if a character is a lowercase.
 * @c: The character to be checked.
 *
 * Return: 1 if character is a lowercase, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
