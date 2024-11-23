/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asagymba <asagymba@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 00:21:53 by asagymba          #+#    #+#             */
/*   Updated: 2024/11/24 00:21:53 by asagymba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define ASCII_PRINTABLE_LOWER	32
#define ASCII_PRINTABLE_UPPER	126

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= ASCII_PRINTABLE_LOWER
				&& *str <= ASCII_PRINTABLE_UPPER))
			return (0);
		str++;
	}
	return (1);
}

#undef ASCII_PRINTABLE_UPPER
#undef ASCII_PRINTABLE_LOWER

/*
#include <assert.h>

int	main(void)
{
	assert(ft_str_is_printable("!asdjjoio~"));
	assert(ft_str_is_printable("!asdjjoio~ "));
	assert(!ft_str_is_printable("\n!asdjjoio~ "));
	return (0);
}
 */
