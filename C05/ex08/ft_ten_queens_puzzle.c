/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
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

/* Can't afford ft_abs() here, since we already have 5 functions.
 * Sorry. */
int	ft_check_collision(char *buff, const int N_TO_CHECK, char val_to_check)
{
	int	i;
	int	abs_diff;

	i = 0;
	while (i < N_TO_CHECK)
	{
		abs_diff = val_to_check - buff[i];
		if (abs_diff < 0)
			abs_diff = -abs_diff;
		if (val_to_check == buff[i]
			|| abs_diff == (N_TO_CHECK - i))
		{
			return (1);
		}
		i++;
	}
	return (0);
}

/**
 * @param buff		Buffer to work with, where to store a possible solution.
 * @param BUFF_SIZE	sizeof(buff) / sizeof(*buff).
 * @param i		Index of the current queen.
 * @return Amount of all possible solution for N_QUEENS == BUFF_SIZE.
 */
int	ft_queens_puzzle_solve(char *buff, const int BUFF_SIZE, int i)
{
	char	next_try;
	int		solutions;

	if (i == BUFF_SIZE - 1)
	{
		write(1, buff, BUFF_SIZE - 1);
		ft_putchar('\n');
		return (1);
	}
	next_try = '0';
	solutions = 0;
	while (next_try < '0' + (BUFF_SIZE - 1))
	{
		if (!ft_check_collision(buff, i, next_try))
		{
			buff[i] = next_try;
			solutions += ft_queens_puzzle_solve(buff, BUFF_SIZE, i + 1);
		}
		next_try++;
	}
	return (solutions);
}

/* ft_queens_puzzle():: nb's maximum value can be 10. */
#define BUFF_SIZE	11

int	ft_queens_puzzle(int nb)
{
	char	buff[BUFF_SIZE];

	if (nb > 10)
	{
		return (-1);
	}
	buff[nb] = '\0';
	return (ft_queens_puzzle_solve(buff, nb + 1, 0));
}

#undef BUFF_SIZE

#define N_QUEENS	10

int	ft_ten_queens_puzzle(void)
{
	return (ft_queens_puzzle(N_QUEENS));
}

#undef N_QUEENS

/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_ten_queens_puzzle());
	return (0);
}
 */
