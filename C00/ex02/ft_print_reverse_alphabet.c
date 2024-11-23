#include <unistd.h>

void	ft_putchar(char c)
{
	write(STDOUT_FILENO, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char	letter;

	letter = 'z';
	while (letter >= 'a')
		ft_putchar(letter--);
}

/*
int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
 */
