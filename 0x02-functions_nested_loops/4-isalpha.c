#include "main.h"

/**
 * _isalpha - check for alphabetic character
 * @c: is the character to be checked
 * Return: 1 if the character is lowercase or uppercase, if not 0
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);

	else
		return (0);
}
