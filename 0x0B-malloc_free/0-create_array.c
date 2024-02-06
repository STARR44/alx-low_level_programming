#include "main.h"

/*
 * create_array - A function that creates an array of characters
 * @size: size of the array
 * @c: character to store in array
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char  *new_array;
	unsigned int p;

	if (size == 0)
	{
		return (NULL);
	}
	new_array  = (char *)malloc(size * sizeof(char));
	if (new_array == NULL)
	{
		return (NULL);
	}
	for (p = 0; p < size; p++)
		new_array[p] = c;
	return (new_array);
}
