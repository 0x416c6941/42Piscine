int	ft_isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}

int	ft_tolower(int c)
{
	const int	ascii_shift_to_lower = 32;

	if (ft_isupper(c))
	{
		return (c + ascii_shift_to_lower);
	}
	return (c);
}

char	*ft_strlowcase(char *str)
{
	char	*ostr;

	ostr = str;
	while (*str != '\0')
	{
		*str = ft_tolower(*str);
		str++;
	}
	return (ostr);
}

/*
#include <assert.h>
#include <string.h>

int	main(void)
{
	char		test1[] = "hELLO, WORLD!", test2[] = " 123!";
	const char	*test1_res = "hello, world!", *test2_res = " 123!";

	assert(test1 == ft_strlowcase(test1) && !strcmp(test1, test1_res));
	assert(test2 == ft_strlowcase(test2) && !strcmp(test2, test2_res));
	return (0);
}
 */
