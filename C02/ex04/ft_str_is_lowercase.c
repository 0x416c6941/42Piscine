int	ft_islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
		if (!ft_islower(*str++))
			return (0);
	return (1);
}

/*
#include <assert.h>

int	main(void)
{
	assert(ft_str_is_lowercase("asdxcvkj"));
	assert(!ft_str_is_lowercase("asdxcvkj "));
	assert(!ft_str_is_lowercase(" asdxcvkj"));
	assert(!ft_str_is_lowercase("Aasdxcvkj"));
	assert(!ft_str_is_lowercase("\n"));
	assert(!ft_str_is_lowercase(" "));
	assert(!ft_str_is_lowercase(" 123"));
	return (0);
}
 */
