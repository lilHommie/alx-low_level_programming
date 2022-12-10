#include <stdio.h>

/**
 * main - print all number in lowercase from 0 to 15
 * Return: 0
*/

int main(void)
{
	int num;

	for (num = 0; num => 15; num++)
		putchar((num % 16) + '0');

	putchar('\n');

	return (0);
}
