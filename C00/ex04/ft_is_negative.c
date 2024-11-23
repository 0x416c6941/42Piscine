#include <unistd.h>

void	ft_putchar(char c)
{
	write(STDOUT_FILENO, &c, 1);
}

void	ft_is_negative(int n)
{
	const char	negative = 'N', positive = 'P';

	if (n < 0)
		ft_putchar(negative);
	else
		ft_putchar(positive);
}

/* Output should be 'NNPP'. */
/*
int	main(void)
{
	ft_is_negative(-10);
	ft_is_negative(-1);
	ft_is_negative(0);
	ft_is_negative(1);
}
 */
