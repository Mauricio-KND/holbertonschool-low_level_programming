#include <stdlib.h>
/**
 * free_grid - Frees 2 dimensional grid previously created by alloc_gridfrees.
 *
 * @grid: Grid to free.
 * @height: Height of the grid.
 *
 * Return: always void
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL)
		return;
	while (i < height)
		free((int *)grid[i++]);
	free(grid);
}
