#include "search_algos.h"

/**
 *interpolation_search - searches for a value in a sorted array of integers
 *                       using the Interpolation search algorithm
 *@array: pointer to the first element of the array to search in
 *@size: number of elements in the array
 *@value: value to search for
 *Return: first index where value is located
 */
int interpolation_search(int *array, size_t size, int value)
{
size_t high = size - 1;
size_t low = 0;
size_t pos = -1;

if (array[pos] == value)
return (-1);

while (value != array[pos])
{

pos = low + (((double)(high - low) / (array[high] - array[low])) * 
(value - array[low]));

if (pos < size)
printf("Value checked array [%ld] = [%d]\n", pos, array[pos]);
else
printf("Value checked array [%ld] is out of range\n", pos);
break;

if (array[pos] == value)
return (pos);

else if (array[pos] < value)
low = pos + 1;

else
high = pos - 1;
}

return (-1);
}
