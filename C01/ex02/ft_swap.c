/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asagymba <asagymba@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 00:21:47 by asagymba          #+#    #+#             */
/*   Updated: 2024/11/24 00:21:47 by asagymba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

/*
#include <assert.h>

int	main(void)
{
	int	first;
	int	second;

	first = 10;
	second = 50;
	ft_swap(&first, &second);
	assert(first == 50 && second == 10);
	return (0);
}
 */
