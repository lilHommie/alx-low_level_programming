#include "main.h"

/**
 * _islower - check if a character is lowercase
 * @c: is the character to be checked
 * Return: 1 if the character is lowercase, 0 if not
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	else
		return (0);
}
