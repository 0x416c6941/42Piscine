#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*prev;
	t_list	*retval;
	int		i;

	prev = NULL;
	i = 0;
	while (i < size)
	{
			retval = ft_create_elem(strs[i++]);
			if (retval == NULL)
					return (NULL);
			retval->next = prev;
			prev = retval;
	}
	return (retval);
}
