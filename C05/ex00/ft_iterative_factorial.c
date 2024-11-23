/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asagymba <asagymba@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 00:21:59 by asagymba          #+#    #+#             */
/*   Updated: 2024/11/24 00:21:59 by asagymba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	retval;

	if (nb < 0)
		return (0);
	retval = 1;
	while (nb)
		retval *= nb--;
	return (retval);
}
