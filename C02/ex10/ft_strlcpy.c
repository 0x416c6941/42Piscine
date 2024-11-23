/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asagymba <asagymba@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 00:21:54 by asagymba          #+#    #+#             */
/*   Updated: 2024/11/24 00:21:54 by asagymba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

unsigned int	ft_strlen(const char *s)
{
	const char	*os = s;

	while (*s != '\0')
		s++;
	return (s - os);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	retval;

	retval = ft_strlen(src);
	if (!size)
		return (retval);
	while (--size)
	{
		*dest = *src;
		if (*src++ == '\0')
			break ;
		dest++;
	}
	*dest = '\0';
	return (retval);
}
