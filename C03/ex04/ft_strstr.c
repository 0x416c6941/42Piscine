/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asagymba <asagymba@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 00:21:57 by asagymba          #+#    #+#             */
/*   Updated: 2024/11/24 00:21:57 by asagymba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(const char *str)
{
	const char	*pos;

	pos = str;
	while (*pos != '\0')
		pos++;
	return (pos - str);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if (!n)
		return (0);
	while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0' && --n)
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	to_find_size;

	to_find_size = ft_strlen(to_find);
	if (!to_find_size)
		return (str);
	while (*str != '\0')
	{
		if (!ft_strncmp(to_find, str, to_find_size))
			return (str);
		str++;
	}
	return ((void *) 0x0);
}

/*
#include <assert.h>

int	main(void)
{
	char	*msg;
	char	*empty_line;

	msg = "Hello, world!";
	empty_line = "";
	assert(ft_strstr(msg, "Hello") == msg);
	assert(ft_strstr(msg, "ello") == msg + 1);
	assert(ft_strstr(msg, " ") == msg + 6);
	assert(ft_strstr(msg, "Hello, world!!") == (void *) 0x0);
	assert(ft_strstr(empty_line, "") == empty_line);
	return (0);
}
 */
