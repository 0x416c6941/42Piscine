int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

/*
#include <assert.h>
#include <string.h>

int	main(void)
{
	assert(strcmp("AC", "ABC") > 0);
	assert(strcmp("ABC", "ABC") == 0);
	assert(strcmp("ABC", "AB") > 0);
	assert(strcmp("ABA", "ABZ") < 0);
	assert(strcmp("ABJ", "ABC") > 0);

	assert(ft_strcmp("AC", "ABC") == 1);
	assert(ft_strcmp("ABC", "ABC") == 0);
	assert(ft_strcmp("ABC", "AB") == 67);
	assert(ft_strcmp("ABA", "ABZ") == -25);
	assert(ft_strcmp("ABJ", "ABC") == 7);
	return (0);
}
 */
