int	ft_iterative_power(int nb, int power)
{
	int	multiplier;

	if (power < 0)
		return (0);
	if (!power)
		return (1);
	multiplier = nb;
	while (--power)
		nb *= multiplier;
	return (nb);
}
