/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asagymba <asagymba@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 00:22:02 by asagymba          #+#    #+#             */
/*   Updated: 2024/11/24 00:22:02 by asagymba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putstr(const char *str)
{
	while (*str != '\0')
		write(1, str++, 1);
}

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
		digits++;
	return (digits);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
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

void	ft_show_tab(struct s_stock_str *par)
{
	while (par->str)
	{
		ft_putstr(par->str);
		write(1, "\n", 1);
		ft_putnbr(par->size);
		write(1, "\n", 1);
		ft_putstr(par++->copy);
		write(1, "\n", 1);
	}
}
