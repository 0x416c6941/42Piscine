#include <unistd.h>

void	ft_putchar(char c)
{
	write(STDOUT_FILENO, &c, 1);
}

void	ft_print_numbers(void)
{
	char	num;

	num = '0';
	while (num <= '9')
		ft_putchar(num++);
}

/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}
 */
