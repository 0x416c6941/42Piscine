/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asagymba <asagymba@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 00:21:53 by asagymba          #+#    #+#             */
/*   Updated: 2024/11/24 00:21:53 by asagymba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
		if (!ft_isupper(*str++))
			return (0);
	return (1);
}

/*
#include <assert.h>

int	main(void)
{
	assert(ft_str_is_uppercase("AZA"));
	assert(ft_str_is_uppercase("ASKDJHZLKC"));
	assert(!ft_str_is_uppercase(" ASKDJHZLKC"));
	assert(!ft_str_is_uppercase("ASKDJHZLKC "));
	assert(!ft_str_is_uppercase("ASdDJHZLKC"));
	assert(!ft_str_is_uppercase("zzz0011"));
	assert(!ft_str_is_uppercase(" "));
	assert(!ft_str_is_uppercase("\n"));
	assert(ft_str_is_uppercase(""));
	return (0);
}
 */
