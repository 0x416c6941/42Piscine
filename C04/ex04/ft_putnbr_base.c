/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asagymba <asagymba@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 00:21:58 by asagymba          #+#    #+#             */
/*   Updated: 2024/11/24 00:21:58 by asagymba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(const char *str)
{
	const char	*current_position;

	current_position = str;
	while (*current_position != '\0')
	{
		current_position++;
	}
	return (current_position - str);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (c == *s)
		{
			return ((char *) s);
		}
		s++;
	}
	return ((void *) 0x0);
}

/* strlen(base) > 1;
 * all chars are unique;
 * base doesn't contain '+' and '-'. */
int	ft_check_base(const char *base)
{
	if (ft_strlen(base) <= 1
		|| ft_strchr(base, '+') || ft_strchr(base, '-'))
		return (0);
	while (*base != '\0')
	{
		if (ft_strchr(base + 1, *base))
			return (0);
		base++;
	}
	return (1);
}

/**
 * Converts nbr to base numerical system and saves the result to out.
 * Please note, that the result is reversed.
 * @param nbr	Number to convert
 * @param base	Numerical system's characters
 * @param out	Buffer to save the result to.
 * @return strlen(out), basically a length of resulting string.
 **/
int	ft_convert_to_base(int nbr, const char *base, char *out)
{
	int		base_size;
	int		is_negative;
	char	*pos;
	int		mod;

	base_size = ft_strlen(base);
	is_negative = 0;
	if (nbr < 0)
		is_negative = 1;
	pos = out;
	while (nbr)
	{
		mod = nbr % base_size;
		if (mod < 0)
			mod = -mod;
		*pos++ = base[mod];
		nbr /= base_size;
	}
	if (is_negative)
		*pos++ = '-';
	if (!(pos - out))
		*pos++ = *base;
	*pos = '\0';
	return (pos - out);
}

/* 64 bits, '-' and '\0'. Let's not proceed with 128 or more bits,
 * that would be overkill in scope of this program */
#define CONVERTED_SIZE	66

void	ft_putnbr_base(int nbr, char *base)
{
	char	converted[CONVERTED_SIZE];
	int		i;

	if (!ft_check_base(base))
	{
		return ;
	}
	i = ft_convert_to_base(nbr, base, converted) - 1;
	while (i >= 0)
	{
		write(1, converted + i--, 1);
	}
}

#undef CONVERTED_SIZE

/*
int	main(void)
{
	char	newline;

	newline = '\n';
	ft_putnbr_base(12345, "01");
	write(1, &newline, 1);
	ft_putnbr_base(0, "01");
	write(1, &newline, 1);
	ft_putnbr_base(-12345, "01");
	write(1, &newline, 1);
	return (0);
}
 */
