#include <stdlib.h>

int		ft_strlen(const char *str);
char	*ft_strchr(const char *s, int c);
int		ft_check_base(const char *base);
int		ft_atoi_base(char *str, char *base);

#define EMPTY_STRING_SIZE	1

int	ft_calculate_out_size(int nbr, const char *base_to)
{
	int	out_size;
	int	base_to_size;

	out_size = EMPTY_STRING_SIZE;
	if (nbr < 0)
		out_size++;
	if (nbr == 0)
		out_size++;
	base_to_size = ft_strlen(base_to);
	while (nbr)
	{
		out_size++;
		nbr /= base_to_size;
	}
	return (out_size);
}

#undef EMPTY_STRING_SIZE

int	ft_convert_to_base(int nbr, const char *base, char *out)
{
	int		is_negative;
	int		base_size;
	char	*pos;
	int		mod;

	is_negative = 0;
	if (nbr < 0)
		is_negative = 1;
	base_size = ft_strlen(base);
	pos = out;
	while (nbr)
	{
		mod = nbr % base_size;
		if (mod < 0)
			mod = -mod;
		*pos++ = base[mod];
		nbr /= base_size;
	}
	if (is_negative)
		*pos++ = '-';
	if (!(pos - out))
		*pos++ = *base;
	*pos = '\0';
	return (pos - out);
}

/**
 * Swaps *a and *b. *a and *b must be of same size.
 * @param a	A pointer to some value.
 * @param b	A pointer to some other value.
 * @param n	sizeof(*a).
 */
void	ft_swap(void *a, void *b, unsigned int n)
{
	unsigned char	swap;

	while (n--)
	{
		swap = *((unsigned char *) a);
		*((unsigned char *) a++) = *((unsigned char *) b);
		*((unsigned char *) b++) = swap;
	}
}

char	*ft_strrev(char *str)
{
	int	str_size;
	int	i;

	str_size = ft_strlen(str);
	i = 0;
	while (i < str_size / 2)
	{
		ft_swap(str + i, str + (str_size - 1) - i, sizeof(*(str + i)));
		i++;
	}
	return (str);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nbr_dec;
	int		out_size;
	char	*out;

	if (!ft_check_base(base_from)
		|| !ft_check_base(base_to))
		return (NULL);
	nbr_dec = ft_atoi_base(nbr, base_from);
	out_size = ft_calculate_out_size(nbr_dec, base_to);
	out = (char *) malloc(out_size);
	if (out == NULL)
		return (NULL);
	(void) ft_convert_to_base(nbr_dec, base_to, out);
	return (ft_strrev(out));
}

/*
#include <assert.h>
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	*res;

	res = ft_convert_base("100", "0123456789", "0123456789ABCDEF");
	printf("%s\n", res);
	free(res);
	return (0);
}
 */
