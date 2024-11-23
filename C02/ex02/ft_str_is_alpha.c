/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asagymba <asagymba@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 00:21:52 by asagymba          #+#    #+#             */
/*   Updated: 2024/11/24 00:21:52 by asagymba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

int	ft_isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}

int	ft_isalpha(int c)
{
	return (ft_islower(c) || ft_isupper(c));
}

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
		if (!ft_isalpha(*str++))
			return (0);
	return (1);
}

/*
#include <assert.h>

int	main(void)
{
	assert(ft_str_is_alpha("AsdfgzAa"));
	assert(ft_str_is_alpha("aaaaaazzzzz"));
	assert(!ft_str_is_alpha("a "));
	assert(!ft_str_is_alpha(" a"));
	assert(!ft_str_is_alpha(" "));
	assert(ft_str_is_alpha(""));
	return (0);
}
 */
