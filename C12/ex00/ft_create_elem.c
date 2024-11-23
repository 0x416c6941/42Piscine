/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asagymba <asagymba@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 00:22:07 by asagymba          #+#    #+#             */
/*   Updated: 2024/11/24 00:22:07 by asagymba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	struct s_list	*retval;

	retval = (struct s_list *) malloc(sizeof(struct s_list));
	if (retval == NULL)
		return (NULL);
	retval->next = NULL;
	retval->data = data;
	return (retval);
}
