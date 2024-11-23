/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asagymba <asagymba@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 00:21:59 by asagymba          #+#    #+#             */
/*   Updated: 2024/11/24 00:21:59 by asagymba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb == 2)
		return (1);
	if (nb < 2 || (nb % 2) == 0)
		return (0);
	i = 3;
	while (i <= (nb / 2) + 1)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

/*
#include <assert.h>
#include <limits.h>

int	main(void)
{
	assert(ft_is_prime(2));
	assert(ft_is_prime(3));
	assert(!ft_is_prime(4));
	assert(ft_is_prime(5));
	assert(!ft_is_prime(9));
	assert(ft_is_prime(INT_MAX));
	return (0);
}
 */
