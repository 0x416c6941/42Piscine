int	ft_strlen(const char *str)
{
	const char	*current_position;

	current_position = str;
	while (*current_position != '\0')
		current_position++;
	return (current_position - str);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (c == *s)
			return ((char *) s);
		s++;
	}
	return ((void *) 0x0);
}

int	ft_isspace(int c)
{
	const char	*ws = " \f\n\r\t\v";

	while (*ws != '\0')
		if (c == *ws++)
			return (1);
	return (0);
}

#define MIN_BASE_SIZE	2

/* Check "base" with the following rules:
 * strlen(base) >= MIN_BASE_SIZE;
 * all chars are unique;
 * base doesn't contain '+', '-', and whitespaces;
 *
 * isspace() isn't used here, because Norminette doesn't allow to have
 * more than 5 functions in 1 source file.
 * @param base	Base to check.
 * @return	1, if base fulfills all the requirements.
 * 		0 otherwise.
 */
int	ft_check_base(const char *base)
{
	const char	*pos;

	if (ft_strlen(base) < MIN_BASE_SIZE)
		return (0);
	pos = base;
	while (*pos != '\0')
		pos++;
	if (ft_strchr(base, '+') || ft_strchr(base, '-'))
		return (0);
	while (*base != '\0')
	{
		if (ft_strchr(base + 1, *base) || ft_isspace(*base))
			return (0);
		base++;
	}
	return (1);
}

#undef MIN_BASE_SIZE

int	ft_atoi_base(char *str, char *base)
{
	int	base_size;
	int	retval;
	int	sign;

	if (!ft_check_base(base))
		return (0);
	base_size = ft_strlen(base);
	retval = 0;
	sign = 1;
	while (ft_isspace(*str))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (ft_strchr(base, *str))
	{
		retval = retval * base_size
			+ (sign * (ft_strchr(base, *str++) - base));
	}
	return (retval);
}
