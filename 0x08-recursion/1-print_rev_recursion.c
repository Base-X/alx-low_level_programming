#include "main."

/**
 * _print_rev_recursion - a function the print a string in reverse,
 * followed by a new line.
 * @s: an input string to printing
 * Return: Nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1)
		_putchar(*s);
	}
}
