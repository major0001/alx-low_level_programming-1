#include "search_algos.h"

/**
* binary_search - searches for value in array of integers
*
* @array: pointer to first element in array
* @size: number of elements in array
* @value: value to search for in array
*
* Return: first index where value is located or -1 if array is NULL
* or element is not present in array
*/
int binary_search(int *array, size_t size, int value)
{
	int right = array[size - 1];
	int left = array[0];
	int i, mid = 0;

	if (!array)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");

		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i != right)
				printf(", ");
			else
				printf("\n");
		}

		mid = (left + right) / 2;

		if (value == mid)
			return (mid);
		else if (value > mid)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}