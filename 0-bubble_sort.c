#include "sort.h"

/**
 *bubble_sort - sort an array using bubble sort algo
 *@param array - unsorted integer array
 *@param size - size of array
 */
void bubble_sort(int *array, size_t size)
{


	size_t i, j;
	int temp;
	int checker;


	for (j = 0; j < 1024 ; j++)
	{
	checker = 0;
	for (i = 0; i < size - 1; i++)
	{

		if (array[i] >  array[i + 1])
		{
			temp = array[i];
			array[i] = array[i + 1];
			array[i + 1] = temp;
			i += 2;
			checker = 1;
			print_array(array,size); 
		}
	}
	if (checker == 0)
	{
		printf("\n"); 
		j = 1024; 

	}
} 
}
