#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	arr_size;
	int	val;
	int	i;

	if (min >= max)
		return (NULL);
	arr_size = max - min;
	arr = (int *) malloc(arr_size * sizeof(int));
	if (arr == NULL)
		return (NULL);
	val = min;
	i = 0;
	while (i < arr_size)
		arr[i++] = val++;
	return (arr);
}

/* Checkable with GDB. */
/*
int	main(void)
{
	int	*arr;

	arr = ft_range(10, 20);
	return (0);
}
 */
