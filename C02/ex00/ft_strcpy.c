/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asagymba <asagymba@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 00:21:51 by asagymba          #+#    #+#             */
/*   Updated: 2024/11/24 00:21:51 by asagymba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char	*odest;

	odest = dest;
	while (*src != '\0')
		*dest++ = *src++;
	*dest = '\0';
	return (odest);
}

/*
#include <assert.h>
#include <string.h>

#define STR_SIZE	20

int	main(void)
{
	char	str[STR_SIZE];

	assert(ft_strcpy(str, "Hello, world!") == str
		&& !strcmp(str, "Hello, world!"));
	return (0);
}
 */
