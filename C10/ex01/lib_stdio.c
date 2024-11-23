/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_stdio.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asagymba <asagymba@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 00:22:06 by asagymba          #+#    #+#             */
/*   Updated: 2024/11/24 00:22:06 by asagymba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <errno.h>
#include <string.h>
#include "lib_stdio.h"
#include "lib_string.h"

#define ERROR_COLON		": "
#define JUST_ONE_BYTE	1

void	ft_perror(const char *s)
{
	const char	*errno_s = strerror(errno);

	(void) write(STDERR_FILENO, s, ft_strlen(s));
	(void) write(STDERR_FILENO, ERROR_COLON, ft_strlen(ERROR_COLON));
	(void) write(STDERR_FILENO, errno_s, ft_strlen(errno_s));
	(void) write(STDERR_FILENO, "\n", JUST_ONE_BYTE);
}

#undef JUST_ONE_BYTE
#undef ERROR_COLON
