#include <unistd.h>

void	ft_putchar(char c)
{
	write(STDOUT_FILENO, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
		ft_putchar(*str++);
}

/*
int	main(void)
{
	ft_putstr("Hello, world!");
	return (0);
}
 */
