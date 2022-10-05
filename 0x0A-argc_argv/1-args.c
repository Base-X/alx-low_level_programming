#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed into it
 * @argc: counts the argument
 * @argv: argument value
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argv[0])
		printf("%d\n", argc - 1);
	return (0);
}
