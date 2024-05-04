#include "sort.h"


/**
 * bubble_sort - A function that sorts an array of integers in
 *               ascending order using the bubble sort Algo
 * @array: A pointer to the array to sort
 * @size: the size of the array
 *
 * Return: Nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int tp, fg;

	for (i = 0; i < size - 1; i++)
	{
		fg = 0;
		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				tp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tp;
				print_array(array, size);
				fg = 1;
			}
		}
		if (fg == 0)
			break;
	}
}
