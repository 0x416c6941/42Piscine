/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asagymba <asagymba@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 00:21:48 by asagymba          #+#    #+#             */
/*   Updated: 2024/11/24 00:21:48 by asagymba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	char	*ostr;

	ostr = str;
	while (*str != '\0')
		str++;
	return (str - ostr);
}

/*
#include <assert.h>

int	main(void)
{
	assert(ft_strlen("Hello") == 5);
	assert(ft_strlen("") == 0);
	return (0);
}
 */
