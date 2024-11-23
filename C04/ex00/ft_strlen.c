/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asagymba <asagymba@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 00:21:57 by asagymba          #+#    #+#             */
/*   Updated: 2024/11/24 00:21:57 by asagymba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	char	*current_position;

	current_position = str;
	while (*current_position != '\0')
		current_position++;
	return (current_position - str);
}

/*
#include <assert.h>

int	main(void)
{
	assert(ft_strlen("") == 0);
	assert(ft_strlen("Hello, world!") == 13);
	assert(ft_strlen("dest") == 4);
	return (0);
}
 */
