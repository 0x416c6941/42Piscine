/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asagymba <asagymba@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 00:21:58 by asagymba          #+#    #+#             */
/*   Updated: 2024/11/24 00:21:58 by asagymba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(int c)
{
	const char	*ws_chars = " \f\n\r\t\v";

	while (*ws_chars != '\0')
	{
		if (c == *ws_chars++)
			return (1);
	}
	return (0);
}

int	ft_atoi(char *str)
{
	int	retval;
	int	sign;

	retval = 0;
	sign = 1;
	while (ft_isspace(*str))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		retval = retval * 10 + (sign * (*str++ - '0'));
	}
	return (retval);
}

/*
#include <assert.h>

int	main(void)
{
	assert(ft_atoi("  \n	--5353") == 5353);
	assert(ft_atoi("  \n	--5353bb545") == 5353);
	assert(ft_atoi("  \n	---5353bb545") == -5353);
	assert(ft_atoi("  \n	-5353bb545") == -5353);
	assert(ft_atoi("-2147483648") == -2147483648);
	assert(ft_atoi("2147483647") == 2147483647);
	assert(ft_atoi("---000000") == 0);
	assert(ft_atoi("000000") == 0);
	assert(ft_atoi("    00001234") == 1234);
	assert(ft_atoi("    -00001234") == -1234);
	assert(ft_atoi(" 0100001234") == 100001234);
	return (0);
}
 */
