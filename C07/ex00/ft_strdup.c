/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asagymba <asagymba@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 00:22:01 by asagymba          #+#    #+#             */
/*   Updated: 2024/11/24 00:22:01 by asagymba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

unsigned int	ft_strlen(const char *str)
{
	const char	*current_position;

	current_position = str;
	while (*current_position != '\0')
		current_position++;
	return (current_position - str);
}

void	*ft_memcpy(void *restrict dest, const void *restrict src,
		unsigned int n)
{
	void	*odest;

	odest = dest;
	while (n--)
		*((unsigned char *) dest++) = *((unsigned const char *) src++);
	return (odest);
}

char	*ft_strdup(char *src)
{
	char			*dup;
	unsigned int	src_buff_size;

	src_buff_size = ft_strlen(src) + 1;
	dup = (char *) malloc(src_buff_size);
	if (dup == NULL)
		return (NULL);
	return ((char *) ft_memcpy(dup, src, src_buff_size));
}
