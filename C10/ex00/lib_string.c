#include <unistd.h>
#include "lib_string.h"

size_t	ft_strlen(const char *s)
{
	const char	*os;

	os = s;
	while (*s != '\0')
		s++;
	return (s - os);
}
