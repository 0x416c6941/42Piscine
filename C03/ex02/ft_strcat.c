/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
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

char	*ft_strcpy(char *dest, char *src)
{
	char	*current_position;

	current_position = dest;
	while (*src != '\0')
		*current_position++ = *src++;
	*current_position = '\0';
	return (dest);
}

/* Implementation is the one suggested in $ man 3 strcat. */
char	*ft_strcat(char *dest, char *src)
{
	ft_strcpy(dest + ft_strlen(dest), src);
	return (dest);
}

/*
#include <assert.h>
#include <string.h>

#define DEST_SIZE	100

int	main(void)
{
	char	dest[DEST_SIZE];

	*dest = '\0';
	assert(ft_strcat(dest, "Hello, world!") == dest
		&& !strcmp(dest, "Hello, world!"));
	assert(ft_strcat(dest, "Hello, world!") == dest
		&& !strcmp(dest, "Hello, world!Hello, world!"));
	return (0);
}
 */
