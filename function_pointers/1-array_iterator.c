#include <stdlib.h>
#include "function_pointers.h"
/**
 *array_iterator -iterates the content of an array
 *
 *@array: pointer to array
 *@size: size of array
 *@action: pointer to function
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int cnt;

	cnt = 0;

	while (cnt < size)
	{
		action(array[cnt]);
		cnt++;
	}
}
