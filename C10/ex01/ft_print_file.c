/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_file.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asagymba <asagymba@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 00:22:04 by asagymba          #+#    #+#             */
/*   Updated: 2024/11/24 00:22:04 by asagymba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <limits.h>
#include <unistd.h>
#include "ft_print_file.h"

#define JUST_ONE_BYTE	1

/**
 * Print the content of opened file to provided output stream.
 * @param output_stream	Where to write content of a file.
 * @param file			File descriptor of opened file.
 * @return	0	if everything went fine;
 * 			1	on some error (see errno).
 */
int	ft_print_file(int output_stream, int file)
{
	unsigned char	next_byte;
	ssize_t			read_retval;

	next_byte = UCHAR_MAX;
	while (42)
	{
		read_retval = read(file, &next_byte, JUST_ONE_BYTE);
		if (read_retval == -1)
			return (1);
		else if (read_retval == 0)
			break ;
		if (write(output_stream, &next_byte, JUST_ONE_BYTE) == -1)
			return (1);
	}
	return (0);
}

#undef JUST_ONE_BYTE
