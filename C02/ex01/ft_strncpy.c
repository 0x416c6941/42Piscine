char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*odest;

	odest = dest;
	while (n && *src != '\0')
	{
		*dest++ = *src++;
		n--;
	}
	while (n)
	{
		*dest++ = '\0';
		n--;
	}
	return (odest);
}
