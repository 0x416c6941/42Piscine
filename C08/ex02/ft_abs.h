/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asagymba <asagymba@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 00:22:57 by asagymba          #+#    #+#             */
/*   Updated: 2024/11/24 00:22:57 by asagymba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H

# define ABS(Value)				\
({						\
 	__typeof__(Value) retval = Value;	\
	if (retval < 0)				\
		retval = -retval;		\
	retval;					\
})

#endif	/* FT_ABS_H */
