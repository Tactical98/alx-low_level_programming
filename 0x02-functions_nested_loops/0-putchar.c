#include "main.h"
/**
 * main - Entry point
 * write a program tha prints Holberton, followed by a new line.
 * Return: Always (Success)
 */
int main(void)
{
	char *ch = "_putchar";

	while (*ch)
	{
		_putchar(*ch);
		ch++;
	}
	_putchar('\n');
	return (0);
}
