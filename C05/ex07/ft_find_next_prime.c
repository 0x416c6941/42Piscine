/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asagymba <asagymba@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 00:22:00 by asagymba          #+#    #+#             */
/*   Updated: 2024/11/24 00:22:00 by asagymba         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb <= 2)
		return (2);
	i = nb;
	if ((nb % 2) == 0)
		i++;
	while (i >= nb)
	{
		if (ft_is_prime(i))
			return (i);
		i += 2;
	}
	return (0);
}

/*
#include <assert.h>
#include <limits.h>

int	main(void)
{
	assert(ft_find_next_prime(1) == 2);
	assert(ft_find_next_prime(2) == 2);
	assert(ft_find_next_prime(3) == 3);
	assert(ft_find_next_prime(4) == 5);
	assert(ft_find_next_prime(14) == 17);
	assert(ft_find_next_prime(INT_MAX) == INT_MAX);
	return (0);
}
 */
