#include <stddef.h>
#include <unistd.h>

#define SEP	", "

/**
 * Initializes the buffer with consecutive values '0', '1', '2', ... .
 * @param	n		How many bytes to fill.
 * @param	buffer	A pointer to the buffer.
 * @return	Amount of written bytes.
 */
size_t	ft_init_buffer(size_t n, char *buffer)
{
	size_t	i;

	i = 0;
	while (i < n)
		*buffer++ = '0' + i++;
	return (i);
}

void	ft_putstr(const char *str)
{
	while (*str != '\0')
		write(STDOUT_FILENO, str++, 1);
}

#define RANGE_N_LOWER	0
#define RANGE_N_UPPER	10

/**
 * Updates the buffer if last number in buffer
 * is bigger or equal to RANGE_N_UPPER.
 * @param	n		ft_strlen(buffer).
 * @param	buffer	A buffer containing a current number.
 */
void	ft_update_buffer(int n, char *buffer)
{
	int	i;

	if (!(n > RANGE_N_LOWER && n < RANGE_N_UPPER))
		return ;
	i = 1;
	while (i < n)
	{
		if (!((buffer[n - i] - '0') <= (RANGE_N_UPPER - i)))
			buffer[n - (i + 1)]++;
		i++;
	}
	i = 1;
	while (i < n)
	{
		if (!((buffer[i] - '0') <= (RANGE_N_UPPER - (n - i))))
			buffer[i] = buffer[i - 1] + 1;
		i++;
	}
}

#define BUFFER_SIZE	RANGE_N_UPPER

void	ft_print_combn(int n)
{
	char			buffer[BUFFER_SIZE];
	const size_t	last = n - 1;

	if (!(n > RANGE_N_LOWER && n < RANGE_N_UPPER))
		return ;
	buffer[ft_init_buffer(n, buffer)] = '\0';
	while ((*buffer - '0') <= (RANGE_N_UPPER - n))
	{
		ft_putstr(buffer);
		if ((*buffer - '0') != (RANGE_N_UPPER - n))
			ft_putstr(SEP);
		buffer[last]++;
		ft_update_buffer(n, buffer);
	}
}

#undef BUFFER_SIZE

#undef RANGE_N_UPPER
#undef RANGE_N_LOWER

#undef SEP

/*
int	main(void)
{
	ft_print_combn(2);
	ft_putstr("\n\n");
	ft_print_combn(4);
	ft_putstr("\n\n");
	ft_print_combn(5);
	ft_putstr("\n\n");
	ft_print_combn(1);
	ft_putstr("\n\n");
	ft_print_combn(8);
	ft_putstr("\n\n");
	ft_print_combn(9);
	ft_putstr("\n\n");
	ft_print_combn(10);
	ft_putstr("\n\n");
	ft_print_combn(6);
	ft_putstr("\n\n");
	ft_print_combn(7);
	return (0);
}
 */
