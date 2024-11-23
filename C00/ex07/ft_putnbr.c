#include <unistd.h>

void	ft_putchar(char c)
{
	write(STDOUT_FILENO, &c, 1);
}

/**
 * Returns an amount of digits in provided number
 * (basically a really stripped down version of log10()).
 * @param	num	Number to calculate digits in.
 * @return	Amount of digits in provided numbers.
 */
int	ft_count_digits(int num)
{
	int	digits;

	digits = 0;
	while (42)
	{
		digits++;
		num /= 10;
		if (!num)
			break ;
	}
	return (digits);
}

void	ft_putnbr(int nb)
{
	int	digits;
	int	i;
	int	buff;

	if (nb < 0)
		ft_putchar('-');
	digits = ft_count_digits(nb);
	while (digits)
	{
		buff = nb;
		i = --digits;
		while (i--)
			buff /= 10;
		buff %= 10;
		if (buff < 0)
			buff = -buff;
		ft_putchar('0' + buff);
	}
}

/*
#include <limits.h>

int	main(void)
{
	ft_putnbr(42);
	ft_putchar('\n');
	ft_putnbr(-42);
	ft_putchar('\n');
	ft_putnbr(0);
	ft_putchar('\n');
	ft_putnbr(INT_MAX);
	ft_putchar('\n');
	ft_putnbr(INT_MIN);
	ft_putchar('\n');
	ft_putnbr(2);
	ft_putchar('\n');
	ft_putnbr(-2);
	ft_putchar('\n');
	ft_putnbr(10);
	ft_putchar('\n');
	ft_putnbr(1137);
	ft_putchar('\n');
	ft_putnbr(-543);
	ft_putchar('\n');
	ft_putnbr(-10);
	ft_putchar('\n');
	ft_putnbr(-11);
	ft_putchar('\n');
	return (0);
}
 */
