/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asagymba <asagymba@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 00:21:53 by asagymba          #+#    #+#             */
/*   Updated: 2024/11/24 00:21:53 by asagymba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

int	ft_toupper(int c)
{
	const int	ascii_shift_to_upper = -32;

	if (ft_islower(c))
	{
		return (c + ascii_shift_to_upper);
	}
	return (c);
}

char	*ft_strupcase(char *str)
{
	char	*ostr;

	ostr = str;
	while (*str != '\0')
	{
		*str = ft_toupper(*str);
		str++;
	}
	return (ostr);
}

/*
#include <assert.h>
#include <string.h>

int	main(void)
{
	char		test1[] = "Hello, world!", test2[] = " 123!";
	const char	*test1_res = "HELLO, WORLD!", *test2_res = " 123!";

	assert(test1 == ft_strupcase(test1) && !strcmp(test1, test1_res));
	assert(test2 == ft_strupcase(test2) && !strcmp(test2, test2_res));
	return (0);
}
 */
