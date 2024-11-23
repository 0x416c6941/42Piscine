void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;

	div = *a / *b;
	*b = *a % *b;
	*a = div;
}

/*
#include <assert.h>

int	main(void)
{
	int	a;
	int	b;

	a = 5;
	b = 3;
	ft_ultimate_div_mod(&a, &b);
	assert(a == 1 && b == 2);
	return (0);
}
 */
