/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asagymba <asagymba@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 00:22:00 by asagymba          #+#    #+#             */
/*   Updated: 2024/11/24 00:22:00 by asagymba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

void	ft_sort_array_of_strings(char **str_arr, const int STR_ARR_SIZE)
{
	int		i;
	int		j;
	char	*swap;

	i = 0;
	while (i < STR_ARR_SIZE)
	{
		j = 0;
		while (j < STR_ARR_SIZE)
		{
			if (ft_strcmp(str_arr[i], str_arr[j]) < 0)
			{
				swap = str_arr[i];
				str_arr[i] = str_arr[j];
				str_arr[j] = swap;
			}
			j++;
		}
		i++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str++);
	}
}

#define INVALID_ARGS	1

int	main(int argc, char **argv)
{
	int	i;

	if (!(argc >= 2))
		return (INVALID_ARGS);
	ft_sort_array_of_strings(++argv, --argc);
	i = 0;
	while (i < argc)
	{
		ft_putstr(*(argv + i++));
		ft_putchar('\n');
	}
	return (0);
}
