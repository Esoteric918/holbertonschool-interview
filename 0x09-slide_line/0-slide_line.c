#include "slide_line.h"
/**
* slideLeft - slides and merges an array of integers to the left
* @line: pointer to an array of integers
* @size: size of the array
*/
void slideLeft(int * line, size_t size)
{
	size_t i, j, temp;

	for (i = 0; i < size; i++)
	{
		if (line[i] == 0)
		{
			for (j = i; j < size; j++)
			{
				if (line[j] != 0)
				{
					temp = line[i];
					line[i] = line[j];
					line[j] = temp;
					break;
				}
			}
		}
	}
}

/**
* mergeLeft - merges an array of integers to the left
* @line: pointer to an array of integers
* @size: size of the array
*/
void mergeLeft(int * line, size_t size)
{
	size_t i;

	for (i = 0; i < size - 1; i++)
	{
		if (line[i] == line[i + 1])
		{
			line[i] *= 2;
			line[i + 1] = 0;
		}
	}
}

/**
* slideRight - slides and merges an array of integers to the right
* @line: pointer to an array of integers
* @size: size of the array
*/
void slideRight(int * line, size_t size)
{
	size_t i, j, temp;

	for (i = size - 1; i > 0; i--)
	{
		if (line[i] == 0)
		{
			for (j = i; j > 0; j--)
			{
				if (line[j] != 0)
				{
					temp = line[i];
					line[i] = line[j];
					line[j] = temp;
					break;
				}
			}
		}
	}
}

/**
* mergeRight - merges an array of integers to the right
* @line: pointer to an array of integers
* @size: size of the array
*/
void mergeRight(int * line, size_t size)
{
	size_t i;

	for (i = size - 1; i > 0; i--)
	{
		if (line[i] == line[i - 1])
		{
			line[i] *= 2;
			line[i - 1] = 0;
		}
	}
}

/**
 * slide_line - slides and merges an array of integers
 * @line: points to an array of integers
 * @size: number of elements in array
 * @direction: SLIDE_LEFT or SLIDE_RIGHT
 * Return: 1 upon success, or 0 upon failure
 */
int slide_line(int *line, size_t size, int direction)
{
	if (direction == SLIDE_LEFT)
	{
		slideLeft(line, size);
		mergeLeft(line, size);
		slideLeft(line, size);
		return (1);
	}
	else if (direction == SLIDE_RIGHT)
	{
		slideRight(line, size);
		mergeRight(line, size);
		slideRight(line, size);
		return (1);
	}
	return (0);
}
