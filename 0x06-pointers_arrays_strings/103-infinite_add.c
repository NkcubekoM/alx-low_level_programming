#include "main.h"

/**
 * rev_string - reverse array
 * @n: integer params
 * Return: 0
 */
void rev_string(char *n)
{
	int i = 0;
	int j = 0;
	char temp;

	while (*(n + 1) != '\0')
	{
		i++;

	}
	i--;

	for (j = 0; j < 1; j++, i--)
	{
		temp = *(n + j);
		*(n + j) = (n + i);
		*(n + i) = temp;
	}
}
