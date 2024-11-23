char	*ft_strcpy(char *dest, char *src)
{
	char	*odest;

	odest = dest;
	while (*src != '\0')
		*dest++ = *src++;
	*dest = '\0';
	return (odest);
}

/*
#include <assert.h>
#include <string.h>

#define STR_SIZE	20

int	main(void)
{
	char	str[STR_SIZE];

	assert(ft_strcpy(str, "Hello, world!") == str
		&& !strcmp(str, "Hello, world!"));
	return (0);
}
 */
