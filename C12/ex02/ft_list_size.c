#include "ft_list.h"
#include <stdlib.h>

int	ft_list_size(t_list *begin_list)
{
	int	retval;

	retval = 0;
	while (begin_list->next != NULL)
	{
		begin_list = begin_list->next;
		retval++;
	}
	return (retval);
}
