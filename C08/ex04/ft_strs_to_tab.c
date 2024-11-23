#include "ft_stock_str.h"
#include <stdlib.h>

unsigned int	ft_strlen(const char *str)
{
	const char	*current_position;

	current_position = str;
	while (*current_position != '\0')
	{
		current_position++;
	}
	return (current_position - str);
}

void	*ft_memcpy(void *restrict dest, const void *restrict src,
		unsigned int n)
{
	void	*odest;

	odest = dest;
	while (n--)
	{
		*((unsigned char *) dest++) = *((unsigned char *) src++);
	}
	return (odest);
}

char	*ft_strdup(const char *src)
{
	char			*dup;
	unsigned int	src_buff_size;

	src_buff_size = ft_strlen(src) + 1;
	dup = (char *) malloc(src_buff_size);
	if (!dup)
		return (NULL);
	return ((char *) ft_memcpy(dup, src, src_buff_size));
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*retval;
	t_stock_str	*pos;

	retval = (t_stock_str *) malloc((ac + 1) * sizeof(t_stock_str));
	if (retval == NULL)
		return (NULL);
	pos = retval;
	while (ac--)
	{
		pos->size = ft_strlen(*av);
		pos->str = *av;
		pos->copy = ft_strdup(*av++);
		if (pos->copy == NULL)
		{
			while (pos != retval)
				free(pos--->copy);
			free(pos);
			return (NULL);
		}
		pos++;
	}
	pos->str = 0;
	return (retval);
}
