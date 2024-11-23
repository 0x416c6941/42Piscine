/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_string.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asagymba <asagymba@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 00:22:03 by asagymba          #+#    #+#             */
/*   Updated: 2024/11/24 00:22:03 by asagymba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
