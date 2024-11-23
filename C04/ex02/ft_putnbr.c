/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asagymba <asagymba@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 00:21:58 by asagymba          #+#    #+#             */
/*   Updated: 2024/11/24 00:21:58 by asagymba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/* Returns amount of digits in num. */
int	count_digits(int num)
{
	int	digits;

	digits = 0;
	while (num)
	{
		num /= 10;
		digits++;
	}
	if (!digits)
	{
		digits++;
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
	digits = count_digits(nb);
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
