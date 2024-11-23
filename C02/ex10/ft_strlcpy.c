#include <stddef.h>

unsigned int	ft_strlen(const char *s)
{
	const char	*os = s;

	while (*s != '\0')
		s++;
	return (s - os);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	retval;

	retval = ft_strlen(src);
	if (!size)
		return (retval);
	while (--size)
	{
		*dest = *src;
		if (*src++ == '\0')
			break ;
		dest++;
	}
	*dest = '\0';
	return (retval);
}
