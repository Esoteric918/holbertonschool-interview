#include "sandpiles.h"

/**
 * print_sp - Print 3x3 grids sum
 * @grid1: Left 3x3 grid
 *
 */
void print_sp(int grid1[3][3])
{
	int i, j;

	printf("=\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (j)
				printf(" ");
			printf("%d", grid1[i][j]);
		}
		printf("\n");
	}
}
/**
 * unstable_grid - Check if grid is unstable
 * @grid: 3x3 grid
 * Return: 1 if unstable, 0 if stable
 */
int unstable_grid(int grid[3][3])
{
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (grid[i][j] > 3)
			{
				print_sp(grid);
				return (1);
			}
		}
	}
	return (0);
}
/**
 * topple_grid - toppled grid
 * @grid1: 3x3 grid
 * @grid2: 3x3 grid
 * Return: void
 */
void topple_grid(int grid1[3][3], int grid2[3][3])
{
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			grid2[i][j] = grid1[i][j] + grid1[i][j];
			if (grid2[i][j] > 3)
			{
				grid2[i][j] -= 4;
				if (i > 0)
					grid2[i - 1][j]++;
				if (i < 2)
					grid2[i + 1][j]++;
				if (j > 0)
					grid2[i][j - 1]++;
				if (j < 2)
					grid2[i][j + 1]++;
			}
		}
	}
}

/**
 * sandpiles_sum - Sum two 3x3 grids
 * @grid1: Left 3x3 grid
 * @grid2: Right 3x3 grid
 *
 * Return: void
 */
void sandpiles_sum(int grid1[3][3], int grid2[3][3])
{
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			grid1[i][j] += grid2[i][j];
		}
	}
	while (unstable_grid(grid1))
	{
		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 3; j++)
			{
				if (grid1[i][j] > 3)
				{
					grid1[i][j] -= 4;
					if (i > 0)
						grid1[i - 1][j]++;
					if (i < 2)
						grid1[i + 1][j]++;
					if (j > 0)
						grid1[i][j - 1]++;
					if (j < 2)
						grid1[i][j + 1]++;
				}
			}
		}
	}
}
