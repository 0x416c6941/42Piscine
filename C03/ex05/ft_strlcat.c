/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asagymba <asagymba@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 00:21:57 by asagymba          #+#    #+#             */
/*   Updated: 2024/11/24 00:21:57 by asagymba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Important note: we need to preserve 1 byte for '\0' in ft_strlcat(). */
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	retval;

	i = size;
	retval = 0;
	while (*dest != '\0' && i)
	{
		dest++;
		i--;
		retval++;
	}
	while (*src != '\0')
	{
		if (i > 1)
		{
			*dest++ = *src;
			i--;
		}
		src++;
		retval++;
	}
	if (i)
		*dest = '\0';
	return (retval);
}

/*
#include <string.h>
#include <assert.h>
#include <bsd/string.h>

#define DEST_SIZE	100

int	main(void)
{
	char		dest[DEST_SIZE];

	strcpy(dest, "dest");
	assert(strlcat(dest, "Hello, world!", 0) == 13
		&& !strcmp(dest, "dest"));
	strcpy(dest, "dest");
	assert(strlcat(dest, "Hello, world!", 1) == 14
		&& !strcmp(dest, "dest"));
	strcpy(dest, "dest");
	assert(strlcat(dest, "Hello, world!", 2) == 15
		&& !strcmp(dest, "dest"));
	strcpy(dest, "dest");
	assert(strlcat(dest, "Hello, world!", 5) == 17
		&& !strcmp(dest, "dest"));
	strcpy(dest, "dest");
	assert(strlcat(dest, "Hello, world!", 6) == 17
		&& !strcmp(dest, "destH"));

	strcpy(dest, "dest");
	assert(ft_strlcat(dest, "Hello, world!", 0) == 13
		&& !strcmp(dest, "dest"));
	strcpy(dest, "dest");
	assert(ft_strlcat(dest, "Hello, world!", 1) == 14
		&& !strcmp(dest, "dest"));
	strcpy(dest, "dest");
	assert(ft_strlcat(dest, "Hello, world!", 2) == 15
		&& !strcmp(dest, "dest"));
	strcpy(dest, "dest");
	assert(ft_strlcat(dest, "Hello, world!", 5) == 17
		&& !strcmp(dest, "dest"));
	strcpy(dest, "dest");
	assert(ft_strlcat(dest, "Hello, world!", 6) == 17
		&& !strcmp(dest, "destH"));
	return (0);
}
 */
