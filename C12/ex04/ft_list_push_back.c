#include "ft_list.h"
#include <stdlib.h>

void	ft_list_push_back(t_list **begin_list, void *data)
{
	struct s_list	*to_push_back = ft_create_elem(data);

	if (to_push_back == NULL)
		return ;
	if (*begin_list == NULL)
	{
		*begin_list = to_push_back;
		return ;
	}
	while ((*begin_list)->next != NULL)
		begin_list = &((*begin_list)->next);
	begin_list->next = to_push_back;
}
