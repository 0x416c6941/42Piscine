/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asagymba <asagymba@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 00:22:02 by asagymba          #+#    #+#             */
/*   Updated: 2024/11/24 00:22:02 by asagymba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/**
 * Finds the first pos in str, where some character is the one from charset.
 * @param str		String, where to find that mentioned pos.
 * @param charset	Characters, to one of which should *pos be equal to.
 * @return	NULL, if there are no characters from charset in str;
 * 		First found pos in str, where *pos equals to one of characters
 * 			from charset, otherwise.
 */
char	*ft_find_next_charset_occurrence(char *str, char *charset)
{
	char	*charset_pos;

	while (*str != '\0')
	{
		charset_pos = charset;
		while (*charset_pos != '\0')
		{
			if (*str == *charset_pos++)
			{
				return (str);
			}
		}
		str++;
	}
	return (NULL);
}

/**
 * Finds first pos in str, where no character from charset equals to *pos.
 * @param str		String, where to find that mentioned pos.
 * @param charset	Characters, which shouldn't be at *pos.
 * @return	NULL, if such position doesn't exist;
 * 		First found pos in str otherwise.
 */
char	*ft_skip_charset(char *str, char *charset)
{
	int		found;
	char	*charset_pos;

	found = 1;
	while (found && *str != '\0')
	{
		charset_pos = charset;
		found = 0;
		while (*charset_pos != '\0')
		{
			if (*str == *charset_pos++)
			{
				str++;
				found = 1;
				break ;
			}
		}
	}
	if (found)
		return (NULL);
	return (str);
}

int	ft_get_amount_of_strings(char *str, char *charset)
{
	int	cnt;

	cnt = 0;
	while (str != NULL)
	{
		str = ft_skip_charset(str, charset);
		if (str == NULL)
			break ;
		cnt++;
		str = ft_find_next_charset_occurrence(str, charset);
	}
	return (cnt);
}

#define NULL_TERM	1

char	*ft_get_next_str(char *str, char *charset)
{
	char	*next_charset_occurrence;
	int		str_size;
	char	*retval;
	char	*retval_pos;

	next_charset_occurrence = ft_find_next_charset_occurrence(str, charset);
	str_size = 0;
	if (next_charset_occurrence == NULL)
	{
		while (str[str_size++] != '\0')
			;
	}
	else
		str_size = (next_charset_occurrence - str) + NULL_TERM;
	retval = (char *) malloc(str_size);
	if (retval == NULL)
		return (NULL);
	retval_pos = retval;
	while (--str_size)
		*retval_pos++ = *str++;
	*retval_pos = '\0';
	return (retval);
}

#undef NULL_TERM

/* +1 and -1 for ending NULL pointer.
 *
 * There is no more space in this function for freeing memory
 * in case of malloc() fail in ft_get_next_str(). */
char	**ft_split(char *str, char *charset)
{
	int		out_size;
	char	**out;
	int		i;

	out_size = ft_get_amount_of_strings(str, charset) + 1;
	out = (char **) malloc(out_size * sizeof(char *));
	if (out == NULL)
		return (NULL);
	i = 0;
	while (i < out_size - 1)
	{
		str = ft_skip_charset(str, charset);
		out[i] = ft_get_next_str(str, charset);
		if (out[i++] == NULL)
			return (NULL);
		str = ft_find_next_charset_occurrence(str, charset);
	}
	out[i] = NULL;
	return (out);
}

/*
#include <assert.h>

int	main(void)
{
	assert(ft_get_amount_of_strings("", "") + 1 == 1);
	assert(ft_get_amount_of_strings("", ",,") + 1 == 1);
	assert(ft_get_amount_of_strings("hello", "") + 1 == 2);
	assert(ft_get_amount_of_strings(",,hello,world,,", ",") + 1 == 3);
	assert(ft_get_amount_of_strings("hello,,,,world", ",") + 1 == 3);
	assert(ft_get_amount_of_strings("aaabbbaaaccc", "ab") + 1 == 2);
	return (0);
}
 */
