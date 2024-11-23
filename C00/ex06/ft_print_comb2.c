/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asagymba <asagymba@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 00:21:47 by asagymba          #+#    #+#             */
/*   Updated: 2024/11/24 00:21:47 by asagymba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void	ft_putstr(const char *restrict str)
{
	while (*str != '\0')
		write(STDOUT_FILENO, str++, 1);
}

#define SEP	", "

#define LOWER	0
#define UPPER	100
#define STEP	1

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = LOWER;
	while (i < UPPER)
	{
		j = i + 1;
		while (j < UPPER)
		{
			if (i < 10)
				ft_putchar('0');
			ft_putnbr(i);
			ft_putchar(' ');
			if (j < 10)
				ft_putchar('0');
			ft_putnbr(j);
			if (!(j == UPPER - 1 && i == j - 1))
				ft_putstr(SEP);
			j++;
		}
		i++;
	}
}

#undef STEP
#undef UPPER
#undef LOWER

#undef SEP

/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}
 */
