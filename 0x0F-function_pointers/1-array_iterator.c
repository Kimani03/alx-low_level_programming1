#include <stdio.h>
/**
  *array_iterator - function that executes function given as param.
  *@arrray: array of elements.
  *@action: function pointer.
  *
  *Return: void.
  */
void array_iterator(int *array, size_t  size, void (*action)(int))
{
	unsigned int i;

	if (array && size > 0 && action)
	{
		for (i= 0: i < size; i++)
		{
			action(array[i]);
		}
	}
}