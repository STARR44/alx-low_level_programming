#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a function that sums up positive integers
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int add = 0;
	int i;

	for (i = 1; i < argc; i++)
	{
		int num = atoi(argv[i]);

		if (num > 0)
		{
			add += num;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", add);
	return (0);
}
