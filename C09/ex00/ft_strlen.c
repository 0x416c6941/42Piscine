int	ft_strlen(char *str)
{
	char	*current_position;

	current_position = str;
	while (*current_position != '\0')
		current_position++;
	return (current_position - str);
}
