/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asagymba <asagymba@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 00:21:48 by asagymba          #+#    #+#             */
/*   Updated: 2024/11/24 00:21:48 by asagymba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size / 2)
	{
		ft_swap(tab + i, tab + (size - 1) - i);
		i++;
	}
}

/*
int	main(void)
{
	int	test1[] = { 0, 1, 2, 3, 4 };
	int	test2[] = { 0, 1, 2, 3, 4, 5 };

	ft_rev_int_tab(test1, sizeof(test1) / sizeof(*test1));
	ft_rev_int_tab(test2, sizeof(test2) / sizeof(*test2));
	return (0);
}
 */
