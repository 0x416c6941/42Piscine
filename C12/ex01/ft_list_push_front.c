#include "ft_list.h"
#include <stdlib.h>

void	ft_list_push_front(t_list **begin_list, void *data)
{
	struct s_list	*new_front;

	new_front = ft_create_elem(data);
	if (new_front == NULL)
		return ;
	new_front->next = *begin_list;
	*begin_list = new_front;
}
