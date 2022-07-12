#include "main.h"
#include <stdlib.h>
/**
 **array_range - creates an array of integers
 *Return: arr
 *@min: min
 *@max: max
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));
	if (!arr)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		arr[i] = min;
		min++;
	}

	return (arr);
}
