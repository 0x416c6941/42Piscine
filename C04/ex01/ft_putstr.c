#include <unistd.h>

int	ft_strlen(char *str)
{
	char	*current_position;

	current_position = str;
	while (*current_position != '\0')
	{
		current_position++;
	}
	return (current_position - str);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

/*
int	main(void)
{
	ft_putstr("Hello, world!\n");
	ft_putstr("\n");
	ft_putstr("");
	ft_putstr("dest\n");
	return (0);
}
 */
