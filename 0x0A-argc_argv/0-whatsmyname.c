#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints its names followed by a new line
 * @argc: argumenter counter
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
