/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asagymba <asagymba@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 00:21:55 by asagymba          #+#    #+#             */
/*   Updated: 2024/11/24 00:21:55 by asagymba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define TO_BITS		8
#define BITS_IN_HEX	4

/**
 * Prints the hex digit to stdout. 
 * @param	digit	Digit to print.
 */
void	ft_print_hex_digit(unsigned char digit)
{
	if (digit < 0xa)
		digit += '0';
	else
		digit = (digit - 0xa) + 'a';
	write(STDOUT_FILENO, &digit, 1);
}

/**
 * Print byte in hex to stdout.
 * @param	c	Character to print in hex.
 */
void	ft_print_byte_in_hex(unsigned char c)
{
	ft_print_hex_digit((c / 0x10) % 0x10);
	c %= 0x10;
	ft_print_hex_digit(c % 0x10);
}

#undef BITS_IN_HEX
#undef TO_BITS

#define ASCII_PRINTABLE_LOWER	32
#define ASCII_PRINTABLE_UPPER	126

void	ft_putstr_non_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str >= ASCII_PRINTABLE_LOWER
			&& *str <= ASCII_PRINTABLE_UPPER)
			write(STDOUT_FILENO, str, 1);
		else
		{
			write(STDOUT_FILENO, "\\", 1);
			ft_print_byte_in_hex(*str);
		}
		str++;
	}
}

#undef ASCII_PRINTABLE_UPPER
#undef ASCII_PRINTABLE_LOWER

/*
int	main(void)
{
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
	ft_putstr_non_printable("\x1F");
	return (0);
}
 */
