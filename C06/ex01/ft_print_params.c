/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asagymba <asagymba@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 00:22:00 by asagymba          #+#    #+#             */
/*   Updated: 2024/11/24 00:22:00 by asagymba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
		ft_putchar(*str++);
}

#define INVALID_ARGS	1

int	main(int argc, char **argv)
{
	int	i;

	if (!(argc >= 2))
		return (INVALID_ARGS);
	i = 1;
	while (i < argc)
	{
		ft_putstr(*(argv + i++));
		ft_putchar('\n');
	}
	return (0);
}
