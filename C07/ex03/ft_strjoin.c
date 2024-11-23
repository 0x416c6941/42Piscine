/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asagymba <asagymba@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 00:22:01 by asagymba          #+#    #+#             */
/*   Updated: 2024/11/24 00:22:01 by asagymba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#define EMPTY_STRING_SIZE	1

char	*ft_return_empty_string_heap_allocated(void)
{
	char	*empty;

	empty = (char *) malloc(1);
	if (empty == NULL)
		return (NULL);
	*empty = '\0';
	return (empty);
}

#undef EMPTY_STRING_SIZE

int	ft_strlen(const char *str)
{
	const char	*current_position;

	current_position = str;
	while (*current_position != '\0')
		current_position++;
	return (current_position - str);
}

/* ft_strlen(sep) is taken into account only (strs_size - 1) times because
 * last string, taken from strs, isn't separated by sep.
 *
 * Also size of result string is increased by 1 before return for the '\0'. */
int	ft_calculate_result_string_size(int size, char **strs, char *sep)
{
	int	res_size;
	int	i;

	res_size = ft_strlen(sep) * (size - 1);
	i = 0;
	while (i < size)
		res_size += ft_strlen(strs[i++]);
	return (res_size + 1);
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

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	char	*pos;
	int		sep_size;
	int		i;

	if (!size)
		return (ft_return_empty_string_heap_allocated());
	res = (char *) malloc(ft_calculate_result_string_size(size, strs, sep));
	if (res == NULL)
		return (NULL);
	pos = res;
	sep_size = ft_strlen(sep);
	i = 0;
	while (i < size)
	{
		(void) ft_strcpy(pos, strs[i]);
		pos += ft_strlen(strs[i]);
		if (!(i++ == size - 1))
		{
			(void) ft_strcpy(pos, sep);
			pos += sep_size;
		}
	}
	*pos = '\0';
	return (res);
}

/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	*res;

	res = ft_strjoin(--argc, ++argv, "!!!");
	printf("%s\n", res);
	return (0);
}
 */
