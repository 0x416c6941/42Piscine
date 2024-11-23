/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asagymba <asagymba@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 00:21:54 by asagymba          #+#    #+#             */
/*   Updated: 2024/11/24 00:21:54 by asagymba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'));
}

int	ft_toupper(int c)
{
	const int	ascii_shift_to_upper = -32;

	if (c >= 'a' && c <= 'z')
	{
		return (c + ascii_shift_to_upper);
	}
	return (c);
}

int	ft_tolower(int c)
{
	const int	ascii_shift_to_lower = 32;

	if (c >= 'A' && c <= 'Z')
	{
		return (c + ascii_shift_to_lower);
	}
	return (c);
}

#define OUT	0
#define IN	1

char	*ft_strcapitalize(char *str)
{
	char	*ostr;
	int		state;

	ostr = str;
	state = OUT;
	while (*str != '\0')
	{
		if (ft_isalnum(*str))
		{
			if (!state)
				*str = ft_toupper(*str);
			else
				*str = ft_tolower(*str);
			state = IN;
		}
		else
			state = OUT;
		str++;
	}
	return (ostr);
}

#undef IN
#undef OUT
