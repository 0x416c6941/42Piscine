/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asagymba <asagymba@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 00:21:52 by asagymba          #+#    #+#             */
/*   Updated: 2024/11/24 00:21:52 by asagymba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
		if (!ft_isdigit(*str++))
			return (0);
	return (1);
}

/*
#include <assert.h>

int	main(void)
{
	assert(ft_str_is_numeric("011239139034"));
	assert(!ft_str_is_numeric(" 011239139034"));
	assert(!ft_str_is_numeric("011239139034 "));
	assert(!ft_str_is_numeric(" 011239139034 "));
	assert(!ft_str_is_numeric("a011239139034 "));
	assert(!ft_str_is_numeric("011239139034a"));
	assert(!ft_str_is_numeric("a011239139034a"));
	assert(ft_str_is_numeric(""));
	assert(!ft_str_is_numeric(" "));
	return (0);
}
 */
