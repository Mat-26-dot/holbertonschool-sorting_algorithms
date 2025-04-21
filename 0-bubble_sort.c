#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
 * bubble_sort - Sorts out an array of integers in ascending order
 * @array: The array to sort
 * @size: size of the elements in the array
 *
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	int temp;	/* temp used to store original value of j array */

	int swapped;	/* swapped - tracks swaps that happened in pass */



	if (!array || size < 2) /* Input check */
		return; /* Return if array is NULL or too small */

	for (i = 0; i < size - 1; i++) /* Each pass sorts 1 element */
	{
		swapped = 0; /* Checks if any swaps happened in this pass */

		for (j = 0; j < size - 1; j++) /* Move elements to correct spots */
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;

				/* Print array after each swap */
				print_array(array, size);

				swapped = 1; /* Set swap to 1 to indicate a swap occured */
			}
		}
		/* If no swaps occured, array is sorted */
		if (!swapped)

			break;
	}
}
