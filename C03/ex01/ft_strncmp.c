/* (n == 0) => (No bytes should be compared.) */
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if (!n)
		return (0);
	while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0' && --n)
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

/* First two tests are basic ones from $ man 3 strncmp. */
/*
#include <assert.h>
#include <string.h>

int	main(void)
{
	assert(strncmp("ABC", "AB", 3) > 0);
	assert(strncmp("ABC", "AB", 2) == 0);

	assert(strncmp("ACB", "ABDD", 4) > 0);
	assert(strncmp(" A", "A", 2) < 0);


	assert(ft_strncmp("ABC", "AB", 3) == 67);
	assert(ft_strncmp("ABC", "AB", 2) == 0);

	assert(ft_strncmp("ACB", "ABDD", 4) == 1);
	assert(ft_strncmp(" A", "A", 2) == -33);
	return (0);
}
 */
