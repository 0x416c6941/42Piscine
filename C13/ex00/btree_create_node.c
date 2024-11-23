#include <stdlib.h>
#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	struct s_btree	*retval;

	retval = (struct s_btree *) malloc(sizeof(struct s_btree));
	if (retval == NULL)
		return (NULL);
	retval->left = NULL;
	retval->right = NULL;
	retval->item = item;
	return (retval);
}
