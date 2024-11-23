#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
		ft_putchar(*str++);
}

#define INVALID_ARGS	1

int	main(int argc, char **argv)
{
	if (!(argc >= 1))
		return (INVALID_ARGS);
	ft_putstr(*argv);
	ft_putchar('\n');
	return (0);
}
