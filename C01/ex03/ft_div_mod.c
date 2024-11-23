void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
#include <assert.h>

int	main(void)
{
	int	first;
	int	second;
	int	div;
	int	mod;

	first = 5;
	second = 3;
	ft_div_mod(first, second, &div, &mod);
	assert(div == 1 && mod == 2);
	return (0);
}
 */
