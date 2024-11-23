/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asagymba <asagymba@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 00:21:56 by asagymba          #+#    #+#             */
/*   Updated: 2024/11/24 00:21:56 by asagymba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(const char *str)
{
	const char	*pos;

	pos = str;
	while (*pos != '\0')
		pos++;
	return (pos - str);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*current_position;

	current_position = dest + ft_strlen(dest);
	while (*src != '\0' && nb--)
	{
		*current_position++ = *src++;
	}
	*current_position = '\0';
	return (dest);
}

/*
#include <assert.h>
#include <string.h>

#define DEST_SIZE	1000

int	main(void)
{
	char	dest[DEST_SIZE];

	*dest = '\0';
	assert(ft_strncat(dest, "Hello, world!", 15) == dest
		&& !strcmp(dest, "Hello, world!"));
	assert(ft_strncat(dest, "Hello, world!", 15) == dest
		&& !strcmp(dest, "Hello, world!Hello, world!"));
	return (0);
}
 */
