#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
void bubble_sort(int *array, size_t size)
{
	int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
	
	size_t n = sizeof(array) / sizeof(array[0]);
	
	int i, j;
	
	for (i = 0; i < size - 1; i++;)
	{
		for (int j = 0; j < n-i -1; j++;)
		



