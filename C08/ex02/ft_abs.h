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
