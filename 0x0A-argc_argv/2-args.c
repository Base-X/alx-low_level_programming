#include "main.h"
#include <stdio.h>

/**
 * main - program that prints all arguments passed into it
 * @argc: argument counter
 * @argv: argument value
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
