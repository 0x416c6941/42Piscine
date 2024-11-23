#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	range_size;
	int	val;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	range_size = max - min;
	*range = (int *) malloc(range_size * sizeof(int));
	if (*range == NULL)
		return (-1);
	val = min;
	i = 0;
	while (i < range_size)
		(*range)[i++] = val++;
	return (range_size);
}