/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asagymba <asagymba@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 00:22:08 by asagymba          #+#    #+#             */
/*   Updated: 2024/11/24 00:22:08 by asagymba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
